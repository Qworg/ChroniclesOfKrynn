# Summoner - Naturalist

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Naturalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Naturalist
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature’s Call (Sp); Animal Focus (Su); Second Animal Focus (Su); Shared Focus (Su); Third Animal Focus (Su)
- **Replaced / altered class features:** summon monster I; shield ally and greater shield ally; life bond; greater aspect

## Replacement details

### Replaces: summon monster I

- **Archetype feature:** Nature’s Call (Sp)
- **Description:** Starting at 1st level, the naturalist can cast summon nature’s ally I as a spell like ability a number of times per day equal to 3 + his Charisma modifier.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1.
  - Mechanics summary: Starting at 1st level, the naturalist can cast summon nature’s ally I as a spell like ability a number of times per day equal to 3 + his Charisma modifier. He can only use this ability to summon creatures of the animal, magical beast, or vermin type. This ability otherwise functions as the summon monster I class feature (increasing in level as the naturalist goes up in level and with the same restrictions).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Animal Focus (Su)
- **Description:** At 4th level, as a swift action a naturalist can enhance his eidolon with the aspect of an animal.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, as a swift action a naturalist can enhance his eidolon with the aspect of an animal. Each time he uses this ability, he can select a hunter’s animal aspect (see page 27) and apply it to his eidolon. His hunter level for this ability is equal to his summoner level – 2. He does not gain the ability to add an animal aspect to himself (see Shared Focus, below). For example, using aspect of the bat might give the eidolon larger ears and eyes and perhaps membranes of skin connecting its limbs to its body, while using aspect of the stag might give the eidolon antlers and hooflike nails on its feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, summoner eidolon hook, ki/monk hook.

### Replaces: the aspect summoner class ability

- **Archetype feature:** Second Animal Focus (Su)
- **Description:** At 10th level, whenever a naturalist uses animal focus, he may apply two different animal aspects to his eidolon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, whenever a naturalist uses animal focus, he may apply two different animal aspects to his eidolon. The eidolon’s form gains superficial physical charges appropriate to the chosen aspect.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

### Replaces: life bond

- **Archetype feature:** Shared Focus (Su)
- **Description:** At 14th level, the naturalist begins to take on some of the feral nature of his eidolon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, the naturalist begins to take on some of the feral nature of his eidolon. Whenever the naturalist uses animal focus to grant an aspect to his eidolon, he also gains the effects of the chosen aspect. The naturalist gains the effects of only one aspect, even if the eidolon gains more than one (naturalist’s choice).
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

### Replaces: greater aspect

- **Archetype feature:** Third Animal Focus (Su)
- **Description:** At 18th level, whenever a naturalist uses his animal focus ability, he can apply three different animal aspects to his eidolon (one of which lasts until he decides to change it).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, whenever a naturalist uses his animal focus ability, he can apply three different animal aspects to his eidolon (one of which lasts until he decides to change it).
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

## Parsed source feature headings

- Nature’s Call (Sp)
- Animal Focus (Su)
- Second Animal Focus (Su)
- Shared Focus (Su)
- Third Animal Focus (Su)

