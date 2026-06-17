# Alchemist - Wasteland Blightbreaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Wasteland Blightbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Wasteland%20Blightbreaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Healing Infusion (Sp, Su); Swift Healing Infusions (Sp); Banish Blights (Su); Discoveries
- **Replaced / altered class features:** poison resistance +2; swift poisoning; poison resistance +6 and the discovery gained at 8th level

## Implementation details

### Replaces: poison resistance +2

- **Archetype feature:** Healing Infusion (Sp, Su)
- **Description:** At 2nd level, the blightbreaker can prepare extracts of the healing subschool as if he had the infusion discovery and can choose to render any such extracts inert and prepare other extracts to replace them (unlike infusions, which continue to occupy the alchemist’s daily extract slots until consumed or used).
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the blightbreaker can prepare extracts of the healing subschool as if he had the infusion discovery and can choose to render any such extracts inert and prepare other extracts to replace them (unlike infusions, which continue to occupy the alchemist’s daily extract slots until consumed or used). If the blightbreaker has the infusion discovery, or if he is also a chirurgeon, he can use touch injection as a spell-like ability once per day as a standard action, but only to absorb an infusion of the healing subschool.
- **Implementation flags:**
  - poison subsystem.
  - spell-like ability support.

### Replaces: swift poisoning

- **Archetype feature:** Swift Healing Infusions (Sp)
- **Description:** At 6th level, the blightbreaker can absorb an infusion of the healing subschool as if with touch injection as a standard action an unlimited number of times per day.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, the blightbreaker can absorb an infusion of the healing subschool as if with touch injection as a standard action an unlimited number of times per day. While he has a healing extract absorbed in this fashion, he can deliver it as a swift action.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison resistance +6 and the discovery gained at 8th level

- **Archetype feature:** Banish Blights (Su)
- **Description:** At 8th level, a blightbreaker can end any effect affecting a creature that could be reversed by break enchantment.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 3.
  - **Rules text to implement:** At 8th level, a blightbreaker can end any effect affecting a creature that could be reversed by break enchantment. To do so, the affected creature must imbibe one of the blightbreaker’s infused extracts of the healing subschool of at least 3rd level. The blightbreaker must then attempt a caster level check as described in break enchantment. If the blightbreaker succeeds at the check, the creature is free of the spell, curse, or effect. The blightbreaker can also use this ability to attempt to dispel primal magic events ( Pathfinder Campaign Setting: Inner Sea Magic 12–13 ) affecting a creature or an area. To do so, the affected creature must imbibe an infused extract as described above, and the blightbreaker must attempt a caster level check against a DC equal to 11 + the primal magic event’s CR. If he succeeds at the check, the primal magic event ends as if the blightbreaker had successfully used dispel magic. If the blightbreaker attempts to dispel a primal magic event affecting an area, as a standard action, he must dump an infused extract of the healing subschool of at least 3rd level onto an affected square. He then must attempt a caster level check against a DC equal to 11 + the primal magic event’s CR. If he succeeds at the check, the primal magic event ends as if the blightbreaker had successfully used dispel magic.
- **Implementation flags:**
  - poison subsystem.
  - curse subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the wasteland blightbreaker archetype: dispelling bomb, elixir of life, healing bomb, healing touch, infusion, spontaneous healing.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the wasteland blightbreaker archetype: dispelling bomb, elixir of life, healing bomb, healing touch, infusion, spontaneous healing.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Healing Infusion (Sp, Su)
- Swift Healing Infusions (Sp)
- Banish Blights (Su)
- Discoveries
