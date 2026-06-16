# Warrior - Tribal Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Tribal Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Tribal%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Forbidden Armor; Battle Focus (Ex); Tribal Weapon Training (Ex)
- **Replaced / altered class features:** 1st-level Bonus Feat; Weapon Training

## Replacement details

### Replaces: the fighter feat gained at 1st level

- **Archetype feature:** Battle Focus (Ex)
- **Description:** A tribal fighter learns to fight with his bare hands and wield traditional tribal weapons so effortlessly that they are almost extensions of his arms.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: A tribal fighter learns to fight with his bare hands and wield traditional tribal weapons so effortlessly that they are almost extensions of his arms. He gains Improved Unarmed Strike as a bonus feat. For the purpose of meeting the prerequisites of style feats and feats that have style feats as prerequisites, the tribal fighter counts as having a number of skill ranks equal to his fighter level in all skills in which he is trained.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: weapon training

- **Archetype feature:** Tribal Weapon Training (Ex)
- **Description:** At 5th level, when a tribal fighter gains the weapon training ability, he must choose the tribal weapon group and doesn’t later gain additional weapon groups, though the weapon training bonus for tribal weapons still improves at 9th level and every 4 levels thereafter.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 9.
  - Mechanics summary: At 5th level, when a tribal fighter gains the weapon training ability, he must choose the tribal weapon group and doesn’t later gain additional weapon groups, though the weapon training bonus for tribal weapons still improves at 9th level and every 4 levels thereafter. Additionally, if the tribal fighter has combat feats that apply to a specific weapon type (such as Improved Critical or Weapon Focus) and he has selected a weapon that belongs to the tribal weapon group, he can apply the benefits of that feat to all weapons that belong to the tribal weapon group that would legally apply (for instance, a feat that applies only to throwing wea... This benefit applies only to feats selected as fighter bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 1st-level Bonus Feat

## Parsed source feature headings

- Forbidden Armor
- Battle Focus (Ex)
- Tribal Weapon Training (Ex)

