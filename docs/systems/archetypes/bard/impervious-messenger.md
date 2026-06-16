# Bard - Impervious Messenger

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Impervious Messenger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Impervious%20Messenger
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance (Su); Cryptic Whisper (Ex)
- **Replaced / altered class features:** fascinate; suggestion and mass suggestion; dirge of doom and frightening tune; bardic knowledge and well-versed

## Replacement details

### Replaces: fascinate

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18, 8, 12.
  - Mechanics summary: An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page , but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18, 8, 12.
  - Mechanics summary: An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page , but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook.

### Replaces: dirge of doom and frightening tune

- **Archetype feature:** Bardic Performance (Su)
- **Description:** An impervious messenger gains the following types of bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6, 18, 8, 12.
  - Mechanics summary: An impervious messenger gains the following types of bardic performances. Chant of Perfect Recall (Su) : At 1st level, an impervious messenger can spend 1 round of his bardic performance to commit something to memory. This ability functions exactly as per memorize page , but the impervious messenger is the only recipient and he requires only 1 round to commit a single page to memory. An impervious messenger can commit additional pages worth of material to memory by using additional rounds of his bardic performance, but he can never memorize more than half his total bard level in pages (minimum 1). Song of Subterfuge (Su) : At 6th level, an impervious messenger learns to use his performances to project various thoughts into his own mind to disrupt divination attempts. This acts similarly to distraction, except it only affects the impervious messenger and allows him to use the result of his Perform check in place of saving throws against attempts to read his mind, such as detect thoughts.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook.

### Replaces: bardic knowledge and well-versed

- **Archetype feature:** Cryptic Whisper (Ex)
- **Description:** At 2nd level, the impervious messenger internalizes his understanding of language and ciphers, and filters them through his bardic abilities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the impervious messenger internalizes his understanding of language and ciphers, and filters them through his bardic abilities. He adds half his bard level to all Linguistics checks and Bluff checks to deliver secret messages, and he gains a +4 bonus on saving throws against glyph spells, symbol spells, and language-dependent effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Bardic Performance (Su)
- Cryptic Whisper (Ex)

