# Monk - Qinggong Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Qinggong Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Qinggong%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ki Power; Activation
- **Replaced / altered class features:** Slow Fall; High Jump; Wholeness of Body; Diamond Body; Abundant Step; Diamond Soul; Quivering Palm; Timeless Body; Tongue of the Sun and Moon; Empty Body; Perfect Self

## Replacement details

### Replaces: the monk class ability the qinggong monk gives up for this ki power

- **Archetype feature:** Ki Power
- **Description:** A qinggong monk can select a ki power (see below) for which she qualifies in place of the following monk class abilities: slow fall (4th), high jump (5th), wholeness of body (7th), diamond body (11th), abundant step (12th), diamond soul (13th), quivering palm (15th), timeless body (17th), tongue of the sun and moon (17th), empty body (19th), and perfect self (20th).
- **Mechanics:**
  - Mechanics summary: A qinggong monk can select a ki power (see below) for which she qualifies in place of the following monk class abilities: slow fall (4th), high jump (5th), wholeness of body (7th), diamond body (11th), abundant step (12th), diamond soul (13th), quivering palm (15th), timeless body (17th), tongue of the sun and moon (17th), empty body (19th), and perfect self (20th). Ki Powers Ki powers are abilities that draw on the power of a monk’s ki. The standard monk has several abilities that count as ki powers, such as wholeness of body, abundant step, and empty body. A qinggong monk can learn additional ki powers, which often replaces a non-ki monk ability such as purity of body. Ki powers are divided into three categories: feats, monk abilities, and spells. Feats : These ki powers duplicate the effects of specific feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Slow Fall
- High Jump
- Wholeness of Body
- Diamond Body
- Abundant Step
- Diamond Soul
- Quivering Palm
- Timeless Body
- Tongue of the Sun and Moon
- Empty Body
- Perfect Self

## Parsed source feature headings

- Ki Power
- Activation

