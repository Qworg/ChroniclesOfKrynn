# Alchemist - Gun Chemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Gun Chemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Gun%20Chemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Alchemical Ordnance (Su); Gunsmith; Discoveries; Cartridge Savant (Ex); Repeat Fire (Ex)
- **Replaced / altered class features:** Weapon and Armor Proficiencies; Bombs; Brew Potion; Throw Anything; Poison Resistance; Swift Poisoning

## Replacement details

### Replaces: the gun chemist’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Gun chemists are proficient with all simple weapons, firearms, and light armor.
- **Mechanics:**
  - Mechanics summary: Gun chemists are proficient with all simple weapons, firearms, and light armor.
- **Implementation flags:**
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Gun chemists are proficient with all simple weapons, firearms, and light armor.
- **Mechanics:**
  - Mechanics summary: Gun chemists are proficient with all simple weapons, firearms, and light armor.
- **Implementation flags:**
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: bombs

- **Archetype feature:** Alchemical Ordnance (Su)
- **Description:** A gun chemist is adept at using his know-how to infuse his ammunition with volatile chemicals and his own magical reserves.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A gun chemist is adept at using his know-how to infuse his ammunition with volatile chemicals and his own magical reserves. When loading a firearm, he can infuse the ammunition as a free action. The compounds are unstable, and if not fired within a number of rounds equal to the gun chemist’s Intelligence modifier (though no sooner than the end of his next turn), the alchemical ordnance becomes inert and loses its additional effects; he can still fire the firearm as normal. Each day, the gun chemist can infuse a number of pieces of alchemical ordnance equal to his class level + his Intelligence modifier, and he can fire no more than one piece per round. Alchemical ordnance deals damage as normal, plus an amount of fire damage equal to 1d6 + the gun chemist’s Intelligence modifier. The damage of the gun chemist’s alchemical ordnance increases by 1d6 points at every odd-numbered class level (this bonus damage is not multiplied on a critical hit or by using feats such as Vital Strike ).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, alchemist bomb hook, alchemist discovery hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: Brew Potion and Throw Anything

- **Archetype feature:** Gunsmith
- **Description:** A gun chemist gains a battered gun identical to the one gained by a 1st level gunslinger , as well as the Gunsmithing feat (including the ability to restore his battered gun as if he were a gunslinger).
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A gun chemist gains a battered gun identical to the one gained by a 1st level gunslinger , as well as the Gunsmithing feat (including the ability to restore his battered gun as if he were a gunslinger). As a standard action, the gun chemist can expend one use of his alchemical ordnance to remove the broken condition from a single firearm he is currently wielding, as long as that condition was gained from a misfire.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: poison resistance

- **Archetype feature:** Cartridge Savant (Ex)
- **Description:** At 2nd level, a gun chemist can make optimal and highly efficient use of alchemical cartridges, such as flare cartridges.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5, 20.
  - Mechanics summary: At 2nd level, a gun chemist can make optimal and highly efficient use of alchemical cartridges, such as flare cartridges . If the gun chemist fires such an alchemical cartridge and it allows a saving throw to negate or reduce the cartridge’s effect, the saving throw’s DC increases by 1 (to a maximum DC of 22). The DC increases by an additional 1 at 5th level and every 3 levels thereafter (to a maximum of 7 higher at 20th level). When a gun chemist fires an alchemical cartridge that deals a type of damage in place of a firearm’s normal damage (such as a dragon’s breath cartridge ), he can increase the damage dealt by an amount equal to his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: swift poisoning

- **Archetype feature:** Repeat Fire (Ex)
- **Description:** At 6th level, a gun chemist gains Rapid Reload as a bonus feat and must select a type of firearm.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a gun chemist gains Rapid Reload as a bonus feat and must select a type of firearm. If he already has this feat, he can instead gain one combat feat for which he qualifies.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Alchemical Ordnance (Su)
- Gunsmith
- Discoveries
- Cartridge Savant (Ex)
- Repeat Fire (Ex)

