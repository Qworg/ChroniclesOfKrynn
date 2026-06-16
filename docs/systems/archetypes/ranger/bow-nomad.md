# Ranger - Bow Nomad

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Bow Nomad
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Bow%20Nomad
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Twin Bows (Ex); Combat Style (Ex); Agile Maneuvers; Trick Shot (Ex); Focused Fire (Ex)
- **Replaced / altered class features:** wild empathy; favored terrain

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Twin Bows (Ex)
- **Description:** At 1st level, a bow nomad can simultaneously wield a combination of two of any of the following ranged weapons: shortbow, longbow, and their composite versions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a bow nomad can simultaneously wield a combination of two of any of the following ranged weapons: shortbow, longbow, and their composite versions. When a bow nomad makes a full attack with two bows, twoweapon penalties apply and can be offset with Two- Weapon Fighting feats. Since bows aren’t light weapons, a bow nomad with Two-Weapon Fighting takes a –4 penalty on attacks with each of her bows. Extra attacks from other sources, such as those granted by Manyshot or Rapid Shot, can be applied to only one of the wielded bows per round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.

### Replaces: Endurance

- **Archetype feature:** Agile Maneuvers
- **Description:** At 3rd level, a bow nomad gains Agile Maneuvers as a bonus feat.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a bow nomad gains Agile Maneuvers as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: favored terrain

- **Archetype feature:** Trick Shot (Ex)
- **Description:** A bow nomad can make a number of trick shots per day equal to 1/2 her ranger level + her Dexterity modifier.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8, 13, 18.
  - Mechanics summary: A bow nomad can make a number of trick shots per day equal to 1/2 her ranger level + her Dexterity modifier. Unless otherwise noted, making a trick shot is a standard action that provokes attacks of opportunity. Deflecting Arrow : At 3rd level, as an immediate action that doesn’t provoke attacks of opportunity, a bow nomad can deflect a single ranged attack. This ability functions as the Deflect Arrows feat, except the bow nomad need not have a hand free and can deflect an attack targeting any creature within 30 feet. Hampering Strike : At 8th level, a bow nomad can attempt to disarm or trip an opponent within 30 feet in place of a ranged attack, with a –4 penalty on the combat maneuver check. Pinning Strike : At 13th level, a bow nomad can attempt to pin a Large or smaller opponent’s limb or clothing to the ground or a wall in place of an attack.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, save DC calculation, favored terrain hook, ki/monk hook, AC/natural armor bonus.

### Alters: the 6th-level combat style feat and replaces camouflage and hide in plain sight

- **Archetype feature:** Focused Fire (Ex)
- **Description:** At 6th level, the bow nomad must select the Manyshot feat as her 6th-level combat style feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 16.
  - Mechanics summary: At 6th level, the bow nomad must select the Manyshot feat as her 6th-level combat style feat. In addition to the normal benefit of Manyshot, the bow nomad can specify the bow in her off hands as the source of the second arrow (precision damage and critical damage are still only added once). The bow nomad takes no two-weapon penalties when using this ability, but she cannot use it and Two-Weapon Fighting in the same round. The nomad can still choose to use Manyshot in the normal manner. At 11th and 16th level, the bow nomad can apply this ability to each of her iterative attacks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Twin Bows (Ex)
- Combat Style (Ex)
- Agile Maneuvers
- Trick Shot (Ex)
- Focused Fire (Ex)

