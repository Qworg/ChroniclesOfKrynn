# Rogue - Guerrilla

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Guerrilla
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Guerrilla
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skilled Liar (Ex); Cover of Night (Ex); Secret Messenger (Ex); Guerrilla Sniping (Ex); Uncanny Dodge (Ex); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trapfinding; evasion; trap sense; uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Skilled Liar (Ex)
- **Description:** Whenever a guerrilla uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Whenever a guerrilla uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1). A guerrilla can still use Disable Device to disarm magic traps.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: evasion

- **Archetype feature:** Cover of Night (Ex)
- **Description:** At 2nd level, a guerrilla learns to use darkness to her advantage.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a guerrilla learns to use darkness to her advantage. She gains a +5 bonus on Disguise, Sleight of Hand, and Stealth checks while she is in areas of dim light or darkness, and can create mundane disguises in dim light or darkness with a full-round action (instead of the normal 1d3 × 10 minutes).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trap sense

- **Archetype feature:** Secret Messenger (Ex)
- **Description:** At 3rd level, a guerrilla gains a +1 bonus on Bluff checks to convey secret messages and on Sense Motive checks to discern secret messages.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, a guerrilla gains a +1 bonus on Bluff checks to convey secret messages and on Sense Motive checks to discern secret messages. These bonuses increase by 1 every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Guerrilla Sniping (Ex)
- **Description:** At 4th level, when a guerrilla is in an area of dim light or darkness, she takes only a –10 penalty on her Stealth check to maintain her obscured location while sniping.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, when a guerrilla is in an area of dim light or darkness, she takes only a –10 penalty on her Stealth check to maintain her obscured location while sniping.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: improved uncanny dodge

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 8th level, a guerrilla gains uncanny dodge.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a guerrilla gains uncanny dodge.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Skilled Liar (Ex)
- Cover of Night (Ex)
- Secret Messenger (Ex)
- Guerrilla Sniping (Ex)
- Uncanny Dodge (Ex)
- Rogue Talents
- Advanced Rogue Talents

