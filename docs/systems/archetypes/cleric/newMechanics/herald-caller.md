# Cleric - Herald Caller

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Herald Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Herald%20Caller
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skill Ranks per Level; Dedicated Summoner; Call Heralds (Su); Divine Heralds (Su); Mighty Heralds
- **Replaced / altered class features:** Class Skills; Domains; Armor Proficiencies;

## Implementation details

### Alters: the cleric’s class skills

- **Archetype feature:** Skill Ranks per Level
- **Description:** 4 + Int modifier.
- **Detailed mechanics:**
  - **Rules text to implement:** 4 + Int modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the cleric’s domains and armor proficiencies

- **Archetype feature:** Dedicated Summoner
- **Description:** A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus.
- **Detailed mechanics:**
  - **Rules text to implement:** A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus. A herald caller can choose only one domain from her deity’s list of domains, rather than the normal two domains, and she doesn’t gain proficiency with medium armor or shields.
- **Implementation flags:**
  - domain system.
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Call Heralds (Su)
- **Description:** A herald caller can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** A herald caller can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time. She can lose a prepared spell in order to cast any summon monster spell of the same level or lower. She gains a +1 bonus on concentration checks to cast a summon monster spell defensively. This bonus increases to +2 at 5th level, and increases by 1 every 5 cleric levels thereafter.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Heralds (Su)
- **Description:** A herald caller can use summon monster spells only to summon creatures particularly appropriate to her deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A herald caller can use summon monster spells only to summon creatures particularly appropriate to her deity. This includes all creatures listed as summon monster options for priests of her deity (see Expanded Summoning for Priests on page 30), creatures whose alignment matches at least one aspect of her deity’s alignment, and creatures of an elemental subtype that matches a domain granted by the deity (if any). When summoning a creature that is normally summoned with the celestial or fiendish template, a herald caller of a chaotic deity can instead summon it with the entropic template, and a herald caller of a lawful deity can instead summon it with the resolute template (see pages 292–293 of Pathfinder RPG Bestiary 2 for more information on these simple templates). Because of these summoned monsters’ strong ties to the herald caller’s deity, the herald caller also gains specific benefits with creatures she summons with summon monster spells gained from her cleric spell list. The herald caller and her summoned monsters can understand each other’s spoken words as if they shared a common language (though this doesn’t give summoned monsters the ability to speak if they normally lack it). Whenever the herald caller uses channel energy to heal, she can include all of her summoned monsters, even if they are out of her normal channel energy radius or of a creature type that would not normally be affected. If she channels energy to deal damage, she can exclude any of her summoned monsters that would normally be affected.
- **Implementation flags:**
  - domain system.
  - summoning subsystem.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Mighty Heralds
- **Description:** At 4th level, a herald caller receives Augment Summoning as a bonus feat, and is considered to have Spell Focus (conjuration) for the purposes of prerequisites for feats that have Augment Summoning as a prerequisite (such as Evolved Summoned Monster on page 146 of the Pathfinder RPG Advanced Class Guide ).
- **Detailed mechanics:**
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a herald caller receives Augment Summoning as a bonus feat, and is considered to have Spell Focus (conjuration) for the purposes of prerequisites for feats that have Augment Summoning as a prerequisite (such as Evolved Summoned Monster on page 146 of the Pathfinder RPG Advanced Class Guide ). At 8th level, she gains Superior Summoning ( Pathfinder RPG Ultimate Magic 157) as a bonus feat.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skill Ranks per Level
- Dedicated Summoner
- Call Heralds (Su)
- Divine Heralds (Su)
- Mighty Heralds
