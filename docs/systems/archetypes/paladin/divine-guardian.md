# Paladin - Divine Guardian

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Divine Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Divine%20Guardian
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Martial Focus; Divine Troth (Sp); Guarding Hands (Su); Courageous Defense (Ex); Bonus Feat
- **Replaced / altered class features:** detect evil

## Replacement details

### Replaces: detect evil

- **Archetype feature:** Divine Troth (Sp)
- **Description:** Once per day the divine guardian pledges her protection to a willing creature for the day.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: Once per day the divine guardian pledges her protection to a willing creature for the day. This is done at the same time she prepares her spells. When the paladin first selects a creature for divine troth, that creature must be present and agree to receive the paladin’s protection, but if the paladin already has a creature selected for divine troth, she can maintain that selection each day without her charge being present. Once per day, the divine guardian can cast locate creature to find the current target of her divine troth.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: lay on hands

- **Archetype feature:** Guarding Hands (Su)
- **Description:** The paladin can use lay on hands to heal herself or her divine troth as a move action, but cannot use lay on hands to heal herself as a swift action.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: The paladin can use lay on hands to heal herself or her divine troth as a move action, but cannot use lay on hands to heal herself as a swift action. The divine guardian cannot use lay on hands more than once per round.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: aura of courage

- **Archetype feature:** Courageous Defense (Ex)
- **Description:** At 3rd level a divine guardian can intercept attacks directed at the target of her divine troth as if she had the Bodyguard APG and In Harm’s Way APG feats.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level a divine guardian can intercept attacks directed at the target of her divine troth as if she had the Bodyguard APG and In Harm’s Way APG feats. The divine guardian’s aura of courage does not grant a bonus to allies within 10 feet, but still grants her immunity to fear effects.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

## Parsed source feature headings

- Martial Focus
- Divine Troth (Sp)
- Guarding Hands (Su)
- Courageous Defense (Ex)
- Bonus Feat

