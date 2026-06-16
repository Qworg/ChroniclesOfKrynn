# Summoner - Broodmaster

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Broodmaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Broodmaster
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Eidolon Brood; Brood Link (Su); Bond Senses (Su); Shield Ally (Ex); Maker’s Call (Su); Transposition (Su); Larger Brood; Greater Shield Ally (Su); Brood Bond (Su); Merge Forms (Su)
- **Replaced / altered class features:** the summoner’s normal eidolon ability; life link; life bond

## Replacement details

### Replaces: the summoner’s normal eidolon ability

- **Archetype feature:** Eidolon Brood
- **Description:** At 2nd level, instead of a single eidolon, a broodmaster summons two Small eidolons to his side, each less powerful than the single eidolon of a standard summoner.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, instead of a single eidolon, a broodmaster summons two Small eidolons to his side, each less powerful than the single eidolon of a standard summoner. Each eidolon has it own base form and associated base statistics and free evolutions. Regardless of the number of eidolons in the brood, each eidolon has the same base attack bonus and base saving throw bonuses, but the rest of the eidolons’ base statistics must be divided between the eidolons, including Hit Dice (minimum 1), skill points, number of feats, armor bonus, Str/Dex bonus, evolution pool (but see below), and maximum number of natural attacks. Individual eidolons in the brood must purchase evolutions separately. Once a broodmaster decides on the forms and abilities of his eidolons, they cannot be changed until the summoner gains a level. Example : A 2nd-level broodmaster can summon two eidolons.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook, natural attack system.

### Replaces: life link

- **Archetype feature:** Brood Link (Su)
- **Description:** At 2nd level, a broodmaster forms a close bond with his eidolons.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a broodmaster forms a close bond with his eidolons. This ability works like the standard summoner life link ability, except the broodmaster can only sacrifice hit points to prevent damage to one eidolon in the brood at a time. If two or more eidolons in the brood take enough damage to send them back to their home plane, the broodmaster can only sacrifice hit points to prevent damage to one of them.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

### Replaces: life bond

- **Archetype feature:** Brood Bond (Su)
- **Description:** At 14th level, a summoner’s life becomes linked to his brood.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a summoner’s life becomes linked to his brood. This functions as the life bond ability, except the broodmaster can only transfer damage to one eidolon in the brood at a time. If that eidolon takes enough damage to send it back to its home plane, all excess damage remains with the broodmaster, killing him.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, ki/monk hook.

## Parsed source feature headings

- Eidolon Brood
- Brood Link (Su)
- Bond Senses (Su)
- Shield Ally (Ex)
- Maker’s Call (Su)
- Transposition (Su)
- Larger Brood
- Greater Shield Ally (Su)
- Brood Bond (Su)
- Merge Forms (Su)

