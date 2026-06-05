#include "CuTest.h"

#include "../../src/conf.h"
#include "../../src/sysdep.h"
#include "../../src/structs.h"
#include "../../src/mob_spells.h"
#include "../../src/spells.h"

void Test_mob_auto_buff_blocks_invisibility_and_elemental_shields(CuTest *tc)
{
  CuAssertTrue(tc, !mob_can_auto_buff_with_spell(SPELL_INVISIBLE));
  CuAssertTrue(tc, !mob_can_auto_buff_with_spell(SPELL_GREATER_INVIS));
  CuAssertTrue(tc, !mob_can_auto_buff_with_spell(SPELL_INVISIBILITY_SPHERE));
  CuAssertTrue(tc, !mob_can_auto_buff_with_spell(SPELL_FIRE_SHIELD));
  CuAssertTrue(tc, !mob_can_auto_buff_with_spell(SPELL_COLD_SHIELD));
}

void Test_mob_auto_buff_keeps_normal_defensive_buffs(CuTest *tc)
{
  CuAssertTrue(tc, mob_can_auto_buff_with_spell(SPELL_STONESKIN));
  CuAssertTrue(tc, mob_can_auto_buff_with_spell(SPELL_SHIELD));
  CuAssertTrue(tc, mob_can_auto_buff_with_spell(SPELL_BLUR));
}
