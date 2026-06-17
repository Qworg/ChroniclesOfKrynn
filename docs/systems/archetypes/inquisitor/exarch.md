# Inquisitor - Exarch

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Exarch
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Exarch
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spells; Inflexible Will (Ex); Detect Chaos (Sp); Fearsome Jurist (Su); Aura of Repetition (Su); Double Jeopardy (Su); Aura of Reversion (Su)
- **Replaced / altered class features:** monster lore; detect alignment; her second judgment; greater bane; her third judgment

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** Exarchs cannot cast spells with the chaotic descriptor.
- **Detailed mechanics:**
  - **Rules text to implement:** Exarchs cannot cast spells with the chaotic descriptor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: monster lore

- **Archetype feature:** Inflexible Will (Ex)
- **Description:** At 1st level, an exarch gains a +2 bonus on saving throws against confusion and insanity effects and effects with the chaotic descriptor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an exarch gains a +2 bonus on saving throws against confusion and insanity effects and effects with the chaotic descriptor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect alignment

- **Archetype feature:** Detect Chaos (Sp)
- **Description:** At will, an exarch can use detect chaos.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** At will, an exarch can use detect chaos.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fearsome Jurist (Su)
- **Description:** At 5th level, an exarch can imbue one of her weapons with the jurist or menacing weapon special ability as a swift action, and may switch between these properties as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an exarch can imbue one of her weapons with the jurist or menacing weapon special ability as a swift action, and may switch between these properties as a swift action. When using either special ability, her weapon’s critical threat range doubles against chaotic creatures. This does not stack with keen edge, Improved Critical, or similar effects. This ability otherwise functions as and replaces bane.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: her second judgment

- **Archetype feature:** Aura of Repetition (Su)
- **Description:** At 8th level, once per day while using her judgment, an exarch can project an aura of repetition, as the Toil subdomain power.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, once per day while using her judgment, an exarch can project an aura of repetition, as the Toil subdomain power. If the exarch takes Artifice (Toil) as her domain, the save DC of her aura increases by 2 but its duration does not increase.
- **Implementation flags:**
  - domain system.
  - judgment subsystem.

### Replaces: greater bane

- **Archetype feature:** Double Jeopardy (Su)
- **Description:** At 12th level, whenever an exarch uses her fearsome jurist ability, she may choose to affect two weapons, with one gaining the jurist weapon special ability and the other the menacing special ability as above.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, whenever an exarch uses her fearsome jurist ability, she may choose to affect two weapons, with one gaining the jurist weapon special ability and the other the menacing special ability as above. Both special abilities may be combined in a single weapon, whose critical threat range doubles. This does not stack with keen edge, Improved Critical, or similar effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: her third judgment

- **Archetype feature:** Aura of Reversion (Su)
- **Description:** At 16th level, while using her judgment, an exarch can project a 30-foot-radius emanation for a number of rounds per day equal to her inquisitor level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, while using her judgment, an exarch can project a 30-foot-radius emanation for a number of rounds per day equal to her inquisitor level. Any creature other than the exarch that is using a transmutation effect within this aura at the beginning of its turn becomes sickened, or sickened and nauseated if using a polymorph effect, including the change shape ability (Fortitude negates; DC 10 + 1/2 the exarch’s level + her Wisdom modifier). Continuous effects from permanent magical items do not cause this effect. Within the aura, dispel checks against transmutation effects gain a +4 bonus. This ability cannot be used simultaneously with aura of repetition.
- **Implementation flags:**
  - judgment subsystem.

## Parsed source feature headings

- Spells
- Inflexible Will (Ex)
- Detect Chaos (Sp)
- Fearsome Jurist (Su)
- Aura of Repetition (Su)
- Double Jeopardy (Su)
- Aura of Reversion (Su)
