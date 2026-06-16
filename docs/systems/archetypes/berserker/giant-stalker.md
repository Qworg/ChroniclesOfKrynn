# Berserker - Giant Stalker

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Giant Stalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Giant%20Stalker
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Harangue Giant (Ex); Smell Giants (Ex); Giant Baiter (Su); Giant Stalker Rage Powers
- **Replaced / altered class features:** uncanny dodge; trap sense

## Replacement details

### Alters: rage

- **Archetype feature:** Harangue Giant (Ex)
- **Description:** While raging, a giant stalker can speak Giant.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: While raging, a giant stalker can speak Giant. If the giant stalker already knows Giant, she gains a +2 bonus on Intimidate checks when speaking Giant while raging.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Smell Giants (Ex)
- **Description:** A 2nd level, a giant stalker gains the scent special ability, but with regard only to humanoids with the giant subtype.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A 2nd level, a giant stalker gains the scent special ability, but with regard only to humanoids with the giant subtype.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Giant Baiter (Su)
- **Description:** At 3rd level, a raging giant stalker can take a move action to erupt into a violent or vulgar display directed at a single giant within 60 feet.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 9, 12, 15, 18.
  - Mechanics summary: At 3rd level, a raging giant stalker can take a move action to erupt into a violent or vulgar display directed at a single giant within 60 feet. This display is infused with secret magical traditions that draw upon the Mammoth Lords’ ancestral enmities toward giants. A targeted giant must succeed at a Will save (DC = 10 + half the giant stalker’s barbarian level + the giant stalker’s Constitution modifier) or be compelled to focus its attacks on the giant stalker; this ability can also affect non-giant creatures that are Large or larger, though such creatures gain a +4 bonus on the Will save to resist the effect. This compulsion ends if the giant stalker is out of sight or inaccessible to the giant’s attacks. While baited, a giant is distracted and enraged by the insults—a giant stalker gains a +1 dodge bonus to her AC against any giant she has successfully baited. Once baited, a giant remains baited for a number of rounds equal to the giant stalker’s Constitution modifier, or until the giant stalker’s rage ends (whichever comes first).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, rage/rage-power hook.

## Parsed source feature headings

- Harangue Giant (Ex)
- Smell Giants (Ex)
- Giant Baiter (Su)
- Giant Stalker Rage Powers

