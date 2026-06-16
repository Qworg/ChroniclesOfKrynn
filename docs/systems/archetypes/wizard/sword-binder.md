# Wizard - Sword Binder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Sword Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Sword%20Binder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Bond; Sword of the Mage (Su); Telekinetic Sword (Sp)
- **Replaced / altered class features:** arcane school and bonus school spell slots; the 10th level bonus feat

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Arcane Bond
- **Description:** A sword binder must choose a sword as his bonded item.
- **Mechanics:**
  - Mechanics summary: A sword binder must choose a sword as his bonded item. He gains proficiency with it.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: arcane school and bonus school spell slots

- **Archetype feature:** Sword of the Mage (Su)
- **Description:** A sword binder can send his bound sword to strike his foes.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 8.
  - Mechanics summary: A sword binder can send his bound sword to strike his foes. He gains the hand of the apprentice ability of the universalist school, but can use that ability only with his bound sword. His range with the ability is close (25 feet + 5 feet per 2 wizard levels he possesses), and he can use it a number of times per day equal to 3 + his Intelligence modifier + 1/2 his level. At 5th level, whenever the sword binder casts a spell with a range of touch from the wizard spell list, he can use his bonded sword to deliver the touch attack, including expending a daily use of hand of the apprentice to make the touch attack at range. This occurs as part of the same action as casting the spell. He gains all the attack bonuses that apply to his sword (including enhancement bonuses and relevant feats), but does not add his sword’s damage or effects to the touch spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 10th level bonus feat

- **Archetype feature:** Telekinetic Sword (Sp)
- **Description:** At 10th level, a sword binder can control his bound sword (and only his sword) as per the sustained force option of telekinesis.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 10, 15, 20.
  - Mechanics summary: At 10th level, a sword binder can control his bound sword (and only his sword) as per the sustained force option of telekinesis . While the sword is flying in this way, the sword binder can monitor the area around the sword with clairaudience/clairvoyance as a swift action. This ability can be used once per day at 10th level, and an additional time per day at 15th level and again at 20th level. This ability can be used for 2 rounds per sword binder level each day.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Arcane Bond
- Sword of the Mage (Su)
- Telekinetic Sword (Sp)

