# Monk - Qinggong Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Qinggong Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Qinggong%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ki Power; Activation
- **Replaced / altered class features:** Slow Fall; High Jump; Wholeness of Body; Diamond Body; Abundant Step; Diamond Soul; Quivering Palm; Timeless Body; Tongue of the Sun and Moon; Empty Body; Perfect Self

## Implementation details

### Replaces: the monk class ability the qinggong monk gives up for this ki power

- **Archetype feature:** Ki Power
- **Description:** A qinggong monk can select a ki power (see below) for which she qualifies in place of the following monk class abilities: slow fall (4th), high jump (5th), wholeness of body (7th), diamond body (11th), abundant step (12th), diamond soul (13th), quivering palm (15th), timeless body (17th), tongue of the sun and moon (17th), empty body (19th), and perfect self (20th).
- **Detailed mechanics:**
  - **Rules text to implement:** A qinggong monk can select a ki power (see below) for which she qualifies in place of the following monk class abilities: slow fall (4th), high jump (5th), wholeness of body (7th), diamond body (11th), abundant step (12th), diamond soul (13th), quivering palm (15th), timeless body (17th), tongue of the sun and moon (17th), empty body (19th), and perfect self (20th). Ki Powers Ki powers are abilities that draw on the power of a monk’s ki. The standard monk has several abilities that count as ki powers, such as wholeness of body, abundant step, and empty body. A qinggong monk can learn additional ki powers, which often replaces a non-ki monk ability such as purity of body. Ki powers are divided into three categories: feats, monk abilities, and spells. Feats : These ki powers duplicate the effects of specific feats. A monk does not need to qualify for a feat to select it as a ki power. For example, a qinggong monk can select Spring Attack as a ki power even if she doesn’t meet the prerequisites for selecting Spring Attack as a feat. Activating one of these ki powers is a free action on the monk’s turn; until the start of her next turn, the monk is treated as if she had that feat. Some of these ki powers that duplicate feats may also be activated as an immediate action; these powers are noted in the ki powers list. Monk Abilities : Some ki powers are standard monk abilities. Even if a qinggong monk selects a different ki power in place of a standard monk ability, she can select that monk ability later as one of her ki powers. Spells : These ki powers duplicate the effects of a spell, and are spell-like abilities. A qinggong monk’s class level is the caster level for these spell-like abilities, and she uses Wisdom to determine her concentration check bonus.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Requirements
- **Description:** All ki powers have a minimum monk level requirement to select them.
- **Detailed mechanics:**
  - **Rules text to implement:** All ki powers have a minimum monk level requirement to select them. A monk who does not meet this requirement cannot select that ki power.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Activation
- **Description:** Most ki powers require the monk to spend ki points; the exact amount is listed after the ki power.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** Most ki powers require the monk to spend ki points; the exact amount is listed after the ki power. Ki powers that cost 0 ki do not require the monk to have any ki points in her ki pool to use the ability. The saving throw against a monk’s ki power, if any, is equal to 10 + 1/2 the monk’s level + the monk’s Wisdom bonus. Feats marked with a dagger (†) are ki powers that can be activated as an immediate action. 4th-level Ki Powers Acrobatic Steps (1 ki point)
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Ki Power
- Requirements
- Activation
