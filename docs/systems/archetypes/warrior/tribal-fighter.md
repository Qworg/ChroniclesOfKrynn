# Warrior - Tribal Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Tribal Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Tribal%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Forbidden Armor; Battle Focus (Ex); Tribal Weapon Training (Ex)
- **Replaced / altered class features:** 1st-level Bonus Feat; Weapon Training

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Forbidden Armor
- **Description:** A tribal fighter favors traditional armor and shields, avoiding other types out of spiritual devotion, superstitious suspicion, or respect for tradition.
- **Detailed mechanics:**
  - **Rules text to implement:** A tribal fighter favors traditional armor and shields, avoiding other types out of spiritual devotion, superstitious suspicion, or respect for tradition. He can attain his battle focus (see page 51) only while using armaments of the appropriate types. Like a druid, a tribal fighter is prohibited from wearing metal armor and using metal shields. A tribal fighter who wears prohibited armor or uses a prohibited shield loses the benefits of the battle focus and tribal weapon training abilities while doing so and for 24 hours after removing the prohibited armor or shield.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the fighter feat gained at 1st level

- **Archetype feature:** Battle Focus (Ex)
- **Description:** A tribal fighter learns to fight with his bare hands and wield traditional tribal weapons so effortlessly that they are almost extensions of his arms.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** A tribal fighter learns to fight with his bare hands and wield traditional tribal weapons so effortlessly that they are almost extensions of his arms. He gains Improved Unarmed Strike as a bonus feat. For the purpose of meeting the prerequisites of style feats and feats that have style feats as prerequisites, the tribal fighter counts as having a number of skill ranks equal to his fighter level in all skills in which he is trained.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: weapon training

- **Archetype feature:** Tribal Weapon Training (Ex)
- **Description:** At 5th level, when a tribal fighter gains the weapon training ability, he must choose the tribal weapon group and doesn’t later gain additional weapon groups, though the weapon training bonus for tribal weapons still improves at 9th level and every 4 levels thereafter.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 9.
  - **Rules text to implement:** At 5th level, when a tribal fighter gains the weapon training ability, he must choose the tribal weapon group and doesn’t later gain additional weapon groups, though the weapon training bonus for tribal weapons still improves at 9th level and every 4 levels thereafter. Additionally, if the tribal fighter has combat feats that apply to a specific weapon type (such as Improved Critical or Weapon Focus) and he has selected a weapon that belongs to the tribal weapon group, he can apply the benefits of that feat to all weapons that belong to the tribal weapon group that would legally apply (for instance, a feat that applies only to throwing weapons wouldn’t apply to greatclubs). This benefit applies only to feats selected as fighter bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Forbidden Armor
- Battle Focus (Ex)
- Tribal Weapon Training (Ex)
