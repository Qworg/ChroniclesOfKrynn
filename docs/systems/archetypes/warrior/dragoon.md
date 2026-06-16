# Warrior - Dragoon

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Dragoon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Dragoon
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Skilled Rider (Ex); Spear Training (Ex); Spinning Lance (Ex); Banner (Ex); Piercing Lance (Ex); Leaping Lance (Ex); Weapon Mastery
- **Replaced / altered class features:** the 1st-level fighter bonus combat feat; armor training 2; weapon training 2, 3, and 4; armor training 3; armor training 4

## Replacement details

### Replaces: the 1st-level fighter bonus combat feat

- **Archetype feature:** Skilled Rider (Ex)
- **Description:** At 1st level, a dragoon gains both the Mounted Combat and Skill Focus (Ride) feats as bonus feats.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a dragoon gains both the Mounted Combat and Skill Focus (Ride) feats as bonus feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor training 2

- **Archetype feature:** Spinning Lance (Ex)
- **Description:** At 7th level, a dragoon may alternate attacks with the piercing head of his lance with reach, or with the butt end (treat as a club) against adjacent targets.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a dragoon may alternate attacks with the piercing head of his lance with reach, or with the butt end (treat as a club) against adjacent targets. Unlike a double weapon, the masterwork quality and magical special abilities apply to both ends of the lance, except for those weapon special abilities that apply only to edged weapons.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training 2, 3
- **Archetype feature:** Banner (Ex)
- **Description:** At 9th level, a dragoon may attach a banner to his lance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 19.
  - Mechanics summary: At 9th level, a dragoon may attach a banner to his lance. This is identical to the cavalier class feature. The bonuses provided by the dragoon’s banner increase by +1 for every five levels beyond 9th (to a maximum of +3 at 19th level). Cavalier levels stack with his dragoon level for determining the effect of his banner, and he can take the better banner progression.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Banner (Ex)
- **Description:** At 9th level, a dragoon may attach a banner to his lance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 19.
  - Mechanics summary: At 9th level, a dragoon may attach a banner to his lance. This is identical to the cavalier class feature. The bonuses provided by the dragoon’s banner increase by +1 for every five levels beyond 9th (to a maximum of +3 at 19th level). Cavalier levels stack with his dragoon level for determining the effect of his banner, and he can take the better banner progression.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor training 3

- **Archetype feature:** Piercing Lance (Ex)
- **Description:** At 11th level, as a standard action or as part of a charge, a dragoon attacking a mounted opponent can make two attacks, one against the mount and the other against the rider, using his highest base attack bonus.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, as a standard action or as part of a charge, a dragoon attacking a mounted opponent can make two attacks, one against the mount and the other against the rider, using his highest base attack bonus. Furthermore, if the mount is hit and its rider attempts to negate the hit with the Mounted Combat feat, the dragoon’s attack roll is considered 4 higher when calculating the DC of the Ride check to negate the hit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: armor training 4

- **Archetype feature:** Leaping Lance (Ex)
- **Description:** At 15th level, a dragoon and his mount suffer no armor check penalty on Acrobatics checks while mounted.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a dragoon and his mount suffer no armor check penalty on Acrobatics checks while mounted. When charging, a dragoon may jump from his mount toward his target. If he jumps 10 feet, his charge modifiers on attack rolls and to AC are doubled and he is still considered mounted for lance damage, mounted combat feats, and so on.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Skilled Rider (Ex)
- Spear Training (Ex)
- Spinning Lance (Ex)
- Banner (Ex)
- Piercing Lance (Ex)
- Leaping Lance (Ex)
- Weapon Mastery

