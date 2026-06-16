/* LuminariMUD Unit Tests for the Archetype core (MVP).
 *
 * These tests exercise the inert archetype registry and its safe accessors.
 * They link only archetypes.c plus tiny stubs (basic_mud_log, str_cmp) so the
 * full server is not required.
 */

#include "CuTest/CuTest.h"
#include "conf.h"
#include "sysdep.h"
#include "structs.h"
#include "utils.h"
#include "archetypes.h"

#include <string.h>
#include <stdlib.h>

/* ---- minimal stubs required by archetypes.c ---- */
/* str_cmp maps to libc strcasecmp (see sysdep.h), so only the logger needs a
 * stub here. */
void basic_mud_log(const char *format, ...)
{
  (void)format;
}

/* ---- tests ---- */

static void Test_Registry_Validates_Clean(CuTest *tc)
{
  CuAssertIntEquals(tc, 0, validate_archetypes());
}

static void Test_None_Is_Known_And_Enabled(CuTest *tc)
{
  CuAssertTrue(tc, is_known_archetype(ARCHETYPE_NONE));
  CuAssertTrue(tc, is_archetype_enabled(ARCHETYPE_NONE));
  CuAssertStrEquals(tc, "None", get_archetype_name(ARCHETYPE_NONE));
}

static void Test_None_Valid_For_Any_Class(CuTest *tc)
{
  CuAssertTrue(tc, is_valid_archetype_for_class(ARCHETYPE_NONE, CLASS_WIZARD));
  CuAssertTrue(tc, is_valid_archetype_for_class(ARCHETYPE_NONE, CLASS_WARRIOR));
  /* Even a bogus class is acceptable for the NONE sentinel. */
  CuAssertTrue(tc, is_valid_archetype_for_class(ARCHETYPE_NONE, -1));
  CuAssertTrue(tc, is_valid_archetype_for_class(ARCHETYPE_NONE, NUM_CLASSES + 5));
}

static void Test_Unknown_Ids_Are_Rejected(CuTest *tc)
{
  /* No real archetypes ship enabled, so any non-NONE id must be invalid. */
  CuAssertTrue(tc, !is_known_archetype(9999));
  CuAssertTrue(tc, !is_archetype_enabled(9999));
  CuAssertTrue(tc, !is_valid_archetype_for_class(9999, CLASS_WIZARD));
  CuAssertTrue(tc, !is_valid_archetype_for_class(1, CLASS_WIZARD));
}

static void Test_Bad_Class_Bounds(CuTest *tc)
{
  CuAssertTrue(tc, !is_valid_archetype_for_class(1, -1));
  CuAssertTrue(tc, !is_valid_archetype_for_class(1, NUM_CLASSES));
}

static void Test_Get_Name_Never_Null(CuTest *tc)
{
  CuAssertStrEquals(tc, "Unknown", get_archetype_name(9999));
  CuAssertStrEquals(tc, "Unknown", get_archetype_name(-1));
}

static void Test_Get_Class_For_Unknown(CuTest *tc)
{
  CuAssertIntEquals(tc, CLASS_UNDEFINED, get_archetype_class(9999));
  CuAssertIntEquals(tc, CLASS_UNDEFINED, get_archetype_class(ARCHETYPE_NONE));
}

static void Test_Parse_Archetype(CuTest *tc)
{
  CuAssertIntEquals(tc, ARCHETYPE_NONE, parse_archetype(NULL));
  CuAssertIntEquals(tc, ARCHETYPE_NONE, parse_archetype(""));
  CuAssertIntEquals(tc, ARCHETYPE_NONE, parse_archetype("does-not-exist"));
  /* "None" is enabled and parseable (case-insensitive). */
  CuAssertIntEquals(tc, ARCHETYPE_NONE, parse_archetype("none"));
}

static void Test_Storage_Constants_Slot_Ready(CuTest *tc)
{
  CuAssertTrue(tc, MAX_ARCHETYPES_PER_CLASS >= ARCHETYPE_EFFECTIVE_PER_CLASS);
  CuAssertIntEquals(tc, 1, ARCHETYPE_EFFECTIVE_PER_CLASS);
  CuAssertIntEquals(tc, 0, ARCHETYPE_NONE);
  CuAssertIntEquals(tc, 1, ARCHETYPE_VERSION);
}

static void Test_Init_Char_Archetypes(CuTest *tc)
{
  struct char_data ch;
  struct player_special_data ps;
  int class_id, slot;

  memset(&ch, 0, sizeof(ch));
  memset(&ps, 0xff, sizeof(ps));
  ch.player_specials = &ps;

  init_char_archetypes(&ch, 0);
  CuAssertIntEquals(tc, 0, GET_ARCHETYPE_VERSION(&ch));

  for (class_id = 0; class_id < NUM_CLASSES; class_id++)
    for (slot = 0; slot < MAX_ARCHETYPES_PER_CLASS; slot++)
      CuAssertIntEquals(tc, ARCHETYPE_NONE, GET_ARCHETYPE(&ch, class_id, slot));

  init_char_archetypes(&ch, ARCHETYPE_VERSION);
  CuAssertIntEquals(tc, ARCHETYPE_VERSION, GET_ARCHETYPE_VERSION(&ch));
}

CuSuite *ArchetypeGetSuite(void)
{
  CuSuite *suite = CuSuiteNew();
  SUITE_ADD_TEST(suite, Test_Registry_Validates_Clean);
  SUITE_ADD_TEST(suite, Test_None_Is_Known_And_Enabled);
  SUITE_ADD_TEST(suite, Test_None_Valid_For_Any_Class);
  SUITE_ADD_TEST(suite, Test_Unknown_Ids_Are_Rejected);
  SUITE_ADD_TEST(suite, Test_Bad_Class_Bounds);
  SUITE_ADD_TEST(suite, Test_Get_Name_Never_Null);
  SUITE_ADD_TEST(suite, Test_Get_Class_For_Unknown);
  SUITE_ADD_TEST(suite, Test_Parse_Archetype);
  SUITE_ADD_TEST(suite, Test_Storage_Constants_Slot_Ready);
  SUITE_ADD_TEST(suite, Test_Init_Char_Archetypes);
  return suite;
}

int main(void)
{
  CuString *output = CuStringNew();
  CuSuite *suite = CuSuiteNew();

  CuSuiteAddSuite(suite, ArchetypeGetSuite());

  CuSuiteRun(suite);
  CuSuiteSummary(suite, output);
  CuSuiteDetails(suite, output);
  printf("%s\n", output->buffer);

  return (suite->failCount != 0);
}
