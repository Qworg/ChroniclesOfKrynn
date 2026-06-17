# Warrior - Dragoon

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Dragoon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Dragoon
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Skilled Rider (Ex); Spear Training (Ex); Spinning Lance (Ex); Banner (Ex); Piercing Lance (Ex); Leaping Lance (Ex); Weapon Mastery
- **Replaced / altered class features:** the 1st-level fighter bonus combat feat; armor training 2; weapon training 2, 3, and 4; armor training 3; armor training 4

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A dragoon is not proficient with tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A dragoon is not proficient with tower shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the 1st-level fighter bonus combat feat

- **Archetype feature:** Skilled Rider (Ex)
- **Description:** At 1st level, a dragoon gains both the Mounted Combat and Skill Focus (Ride) feats as bonus feats.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a dragoon gains both the Mounted Combat and Skill Focus (Ride) feats as bonus feats.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spear Training (Ex)
- **Description:** At 5th level, a dragoon must select weapon training with the spear group.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, a dragoon must select weapon training with the spear group. The dragoon’s weapon training bonus with spears improves by +1 on attack rolls and +2 on damage rolls for every four levels beyond 5th (to a maximum of +4 on attack rolls and +8 on damage rolls at 17th level). The dragoon does not gain weapon training in any other groups as he increases in level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 2

- **Archetype feature:** Spinning Lance (Ex)
- **Description:** At 7th level, a dragoon may alternate attacks with the piercing head of his lance with reach, or with the butt end (treat as a club) against adjacent targets.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a dragoon may alternate attacks with the piercing head of his lance with reach, or with the butt end (treat as a club) against adjacent targets. Unlike a double weapon, the masterwork quality and magical special abilities apply to both ends of the lance, except for those weapon special abilities that apply only to edged weapons.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2, 3, and 4

- **Archetype feature:** Banner (Ex)
- **Description:** At 9th level, a dragoon may attach a banner to his lance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 19.
  - **Rules text to implement:** At 9th level, a dragoon may attach a banner to his lance. This is identical to the cavalier class feature. The bonuses provided by the dragoon’s banner increase by +1 for every five levels beyond 9th (to a maximum of +3 at 19th level). Cavalier levels stack with his dragoon level for determining the effect of his banner, and he can take the better banner progression.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 3

- **Archetype feature:** Piercing Lance (Ex)
- **Description:** At 11th level, as a standard action or as part of a charge, a dragoon attacking a mounted opponent can make two attacks, one against the mount and the other against the rider, using his highest base attack bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, as a standard action or as part of a charge, a dragoon attacking a mounted opponent can make two attacks, one against the mount and the other against the rider, using his highest base attack bonus. Furthermore, if the mount is hit and its rider attempts to negate the hit with the Mounted Combat feat, the dragoon’s attack roll is considered 4 higher when calculating the DC of the Ride check to negate the hit.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: armor training 4

- **Archetype feature:** Leaping Lance (Ex)
- **Description:** At 15th level, a dragoon and his mount suffer no armor check penalty on Acrobatics checks while mounted.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a dragoon and his mount suffer no armor check penalty on Acrobatics checks while mounted. When charging, a dragoon may jump from his mount toward his target. If he jumps 10 feet, his charge modifiers on attack rolls and to AC are doubled and he is still considered mounted for lance damage, mounted combat feats, and so on.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Mastery
- **Description:** The dragoon must select the lance for this ability.
- **Detailed mechanics:**
  - **Rules text to implement:** The dragoon must select the lance for this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Skilled Rider (Ex)
- Spear Training (Ex)
- Spinning Lance (Ex)
- Banner (Ex)
- Piercing Lance (Ex)
- Leaping Lance (Ex)
- Weapon Mastery
