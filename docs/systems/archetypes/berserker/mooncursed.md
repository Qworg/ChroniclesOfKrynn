# Berserker - Mooncursed

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mooncursed
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mooncursed
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Race; Shifting Rage (Su); Hybrid Rage (Su); Greater Shifting Rage (Su); Mighty Shifting Rage (Su)
- **Replaced / altered class features:** improved uncanny dodge; greater rage; mighty rage

## Replacement details

### Alters: rage

- **Archetype feature:** Shifting Rage (Su)
- **Description:** A mooncursed can call upon an animal totem or inner curse, transforming her into a savage beast.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: A mooncursed can call upon an animal totem or inner curse, transforming her into a savage beast. Starting at 1st level, she chooses bear, boar, crocodile, shark, tiger, or wolf. Once chosen, this animal can’t be changed. When using rounds of her shifting rage, instead of the usual bonuses and penalties from rage, the mooncursed transforms into a Medium version of this animal’s form as if under the influence of beast shape I , treating her class level as her caster level whenever relevant. Other aspects of rage aside from the bonuses and penalties, such as the skill restrictions on skills and effects that require concentration, still apply during a shifting rage.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Hybrid Rage (Su)
- **Description:** Beginning at 5th level, a mooncursed can choose to assume a hybrid of her base type and alternate form instead of her usual alternate form during her shifting rage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: Beginning at 5th level, a mooncursed can choose to assume a hybrid of her base type and alternate form instead of her usual alternate form during her shifting rage. If she does, the animal’s forelimbs (or pectoral fins for the shark) remain hands able to manipulate objects and wield weapons as well as human hands do, she can walk on two legs (the shark’s tail fins remain legs), and she can talk.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: greater rage

- **Archetype feature:** Greater Shifting Rage (Su)
- **Description:** At 11th level, a mooncursed can assume larger alternate and hybrid forms.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a mooncursed can assume larger alternate and hybrid forms. This functions like beast shape II , and it allows the mooncursed to take on a Medium or Large version of her animal’s form.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: mighty rage

- **Archetype feature:** Mighty Shifting Rage (Su)
- **Description:** At 20th level, a mooncursed can assume even larger alternate and hybrid forms.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a mooncursed can assume even larger alternate and hybrid forms. This functions like beast shape III , and it allows the mooncursed to take on a Medium, Large, or Huge version of her animal’s form.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Race
- Shifting Rage (Su)
- Hybrid Rage (Su)
- Greater Shifting Rage (Su)
- Mighty Shifting Rage (Su)

