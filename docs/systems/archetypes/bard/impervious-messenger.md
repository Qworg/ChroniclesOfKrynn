# Bard - Impervious Messenger

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Impervious Messenger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Impervious%20Messenger
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance (Su); Cryptic Whisper (Ex)
- **Replaced / altered class features:** fascinate; suggestion and mass suggestion; dirge of doom and frightening tune; bardic knowledge and well-versed

## Implementation details

### Replaces: fascinate

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6, 18, 8, 12.
  - **Rules text to implement:** An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page, but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts. At 18th level, if the impervious messenger succeeds on a saving throw while using song of subterfuge, the character who attempted the divination effect must succeed on a Will save (DC = 20 + the impervious messenger’s Charisma modifier) or else the impervious messenger instantly learns the nature of the effect and can allow the effect to continue, but provide whatever information he chooses to the divining character rather than the true results of the divination effect. Unbroken Stride (Su) : At 8th level, an impervious messenger draws upon his bardic abilities to imbue himself with grace and speed. While using this bardic performance, an impervious messenger gains an insight bonus equal to half his bard level on all Acrobatics, Climb, Fly, and Ride checks. In addition, while maintaining this performance, he gains the benefits of the ranger’s woodland stride ability and a +10-foot enhancement bonus to his base land speed. At 12th level, an impervious messenger using his unbroken stride bardic performance also acts as if under the effect of freedom of movement. In addition, the enhancement bonus to his base land speed increases to +30 feet.
- **Implementation flags:**
  - bardic performance subsystem.
  - flight/movement mode support.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6, 18, 8, 12.
  - **Rules text to implement:** An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page, but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts. At 18th level, if the impervious messenger succeeds on a saving throw while using song of subterfuge, the character who attempted the divination effect must succeed on a Will save (DC = 20 + the impervious messenger’s Charisma modifier) or else the impervious messenger instantly learns the nature of the effect and can allow the effect to continue, but provide whatever information he chooses to the divining character rather than the true results of the divination effect. Unbroken Stride (Su) : At 8th level, an impervious messenger draws upon his bardic abilities to imbue himself with grace and speed. While using this bardic performance, an impervious messenger gains an insight bonus equal to half his bard level on all Acrobatics, Climb, Fly, and Ride checks. In addition, while maintaining this performance, he gains the benefits of the ranger’s woodland stride ability and a +10-foot enhancement bonus to his base land speed. At 12th level, an impervious messenger using his unbroken stride bardic performance also acts as if under the effect of freedom of movement. In addition, the enhancement bonus to his base land speed increases to +30 feet.
- **Implementation flags:**
  - bardic performance subsystem.
  - flight/movement mode support.

### Replaces: dirge of doom and frightening tune

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6, 18, 8, 12.
  - **Rules text to implement:** An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page, but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts. At 18th level, if the impervious messenger succeeds on a saving throw while using song of subterfuge, the character who attempted the divination effect must succeed on a Will save (DC = 20 + the impervious messenger’s Charisma modifier) or else the impervious messenger instantly learns the nature of the effect and can allow the effect to continue, but provide whatever information he chooses to the divining character rather than the true results of the divination effect. Unbroken Stride (Su) : At 8th level, an impervious messenger draws upon his bardic abilities to imbue himself with grace and speed. While using this bardic performance, an impervious messenger gains an insight bonus equal to half his bard level on all Acrobatics, Climb, Fly, and Ride checks. In addition, while maintaining this performance, he gains the benefits of the ranger’s woodland stride ability and a +10-foot enhancement bonus to his base land speed. At 12th level, an impervious messenger using his unbroken stride bardic performance also acts as if under the effect of freedom of movement. In addition, the enhancement bonus to his base land speed increases to +30 feet.
- **Implementation flags:**
  - bardic performance subsystem.
  - flight/movement mode support.

### Replaces: bardic knowledge and well-versed

- **Archetype feature:** Cryptic Whisper (Ex)
- **Description:** At 2nd level, the impervious messenger internalizes his understanding of language and ciphers, and filters them through his bardic abilities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the impervious messenger internalizes his understanding of language and ciphers, and filters them through his bardic abilities. He adds half his bard level to all Linguistics checks and Bluff checks to deliver secret messages, and he gains a +4 bonus on saving throws against glyph spells, symbol spells, and language-dependent effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bardic Performance (Su)
- Cryptic Whisper (Ex)
