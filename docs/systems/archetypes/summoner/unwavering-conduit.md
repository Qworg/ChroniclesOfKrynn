# Summoner - Unwavering Conduit

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Unwavering Conduit
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Unwavering%20Conduit
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Eidolon of Law; Unwavering Monsters; Law Magic
- **Replaced / altered class features:** Eidolon; Summon Monster; Spells

## Replacement details

### Alters: eidolon

- **Archetype feature:** Eidolon of Law
- **Description:** An unwavering conduit’s eidolon must be of a lawful alignment (if using the summoner from Pathfinder Unchained , the eidolon must be of the archon, devil, or inevitable subtype).
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: An unwavering conduit’s eidolon must be of a lawful alignment (if using the summoner from Pathfinder Unchained , the eidolon must be of the archon, devil, or inevitable subtype). Once selected, the evolutions of the unwavering conduit’s eidolon cannot be changed when a new class level is gained (though they can be altered normally with the transmogrify spell; see Pathfinder RPG Advanced Player’s Guide 250). At least half the eidolon’s skill points must be spent on skills in which the unwavering conduit also has ranks. The eidolon gains a +1 resistance bonus on saving throws against spells and abilities of the conjuration, enchantment, and transmutation schools. This bonus increases to +2 at 3rd level, and by an additional 1 for every 3 levels thereafter. The eidolon has 1 fewer evolution point than normal for an eidolon of the unwavering conduit’s summoner level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook.

### Alters: summon monster

- **Archetype feature:** Unwavering Monsters
- **Description:** Since an unwavering conduit’s power is drawn from planar energies aligned with law, all the creatures he summons must be of a lawful alignment.
- **Mechanics:**
  - Level hooks: 3, 2, 6.
  - Mechanics summary: Since an unwavering conduit’s power is drawn from planar energies aligned with law, all the creatures he summons must be of a lawful alignment. If a creature would normally be celestial or fiendish, it is instead a resolute creature ( Bestiary 2 293). This also causes the unwavering conduit’s summoning power to be more set than a standard summoner’s. Beginning at 3rd level, each time he uses summon monster to summon multiple monsters, rather than rolling a die to see how many creatures he summons, he receives a specific number (two creatures for 1d3, or four creatures for 1d4+1). If an item, spell, or ability would increase the number of creatures summoned, the set number increases by that amount. Also, starting at 2nd level, creatures summoned by the unwavering conduit receive a +1 resistance bonus on saving throws against spells and abilities of the conjuration, enchantment, and transmutation schools.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Alters: the summoner’s spells known

- **Archetype feature:** Law Magic
- **Description:** The unwavering conduit gains the following bonus spells known at the listed spell level: 1st— protection from chaos , 2nd— arrow of law UM , 3rd— magic circle against chaos , 4th— order’s wrath , 5th— dispel chaos , 6th— dictum.
- **Mechanics:**
  - Mechanics summary: The unwavering conduit gains the following bonus spells known at the listed spell level: 1st— protection from chaos , 2nd— arrow of law UM , 3rd— magic circle against chaos , 4th— order’s wrath , 5th— dispel chaos , 6th— dictum . The unwavering conduit gains one fewer spell known per spell level for spell levels 1–6.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Eidolon of Law
- Unwavering Monsters
- Law Magic

