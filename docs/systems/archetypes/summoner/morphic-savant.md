# Summoner - Morphic Savant

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Morphic Savant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Morphic%20Savant
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Eidolon of Chaos; Morphic Monsters; Chaos Magic
- **Replaced / altered class features:** Eidolon; Summon Monster; Spells

## Replacement details

### Alters: eidolon

- **Archetype feature:** Eidolon of Chaos
- **Description:** A morphic savant’s eidolon must be of a chaotic alignment (if using the summoner from Pathfinder Unchained , the eidolon must have the azata, demon, or protean subtype).
- **Mechanics:**
  - Mechanics summary: A morphic savant’s eidolon must be of a chaotic alignment (if using the summoner from Pathfinder Unchained , the eidolon must have the azata, demon, or protean subtype). The morphic savant’s eidolon has three base forms: biped, quadruped, and serpentine. Each form has the same feats and skills, but has its own set of evolutions. When the summoner meditates and regains his spell slots for the day, he can select any of the three base forms of his eidolon. The eidolon has 1 fewer evolution point than normal for an eidolon of the morphic savant’s summoner level, and has 1 fewer skill point per Hit Die.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook.

### Alters: summon monster

- **Archetype feature:** Morphic Monsters
- **Description:** Since a morphic savant’s power is drawn from planar energies aligned with chaos, all the creatures he summons must be of a chaotic alignment.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: Since a morphic savant’s power is drawn from planar energies aligned with chaos, all the creatures he summons must be of a chaotic alignment. If a creature would normally be celestial or fiendish, it is instead an entropic creature ( Pathfinder RPG Bestiary 2 292). This also causes the morphic savant’s summoning power to be less reliable than a standard summoner’s. Each time he uses his summon monster spell-like ability to summon multiple creatures, there is a 50% chance he summons one more monster than normal for the summon monster spell he uses, in which case the creatures remain for only 1 round per level (instead of 1 minute per level). Also, starting at 2nd level, the morphic savant can grant one 1-point evolution to all the creatures he summons with his summon monster spell-like ability. He can’t grant an evolution that duplicates the function of, or has the same name as, any ability the summoned creatures already possess (for example, he can’t grant a creature with a bite attack another bite attack), nor can he add an evolution that causes the summoned monsters to have more attacks than his eidolon’s maximum number of attacks.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook.

### Alters: the summoner’s spells known

- **Archetype feature:** Chaos Magic
- **Description:** A morphic savant gains the following bonus spells known at the listed spell level: 1st— protection from law , 2nd— shard of chaos UM , 3rd— magic circle against law , 4th— chaos hammer , 5th— dispel law , 6th— word of chaos.
- **Mechanics:**
  - Mechanics summary: A morphic savant gains the following bonus spells known at the listed spell level: 1st— protection from law , 2nd— shard of chaos UM , 3rd— magic circle against law , 4th— chaos hammer , 5th— dispel law , 6th— word of chaos . The morphic savant gains one fewer spell known per spell level for spell levels 1–6.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Eidolon of Chaos
- Morphic Monsters
- Chaos Magic

