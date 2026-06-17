# Rogue - Gun Smuggler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Gun Smuggler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Gun%20Smuggler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Hidden Gun (Ex); Secret Sidearm (Ex); Selective Targeting (Ex); Stolen Shots (Ex); Uncanny Aim (Ex)
- **Replaced / altered class features:** Weapon Proficiencies; Trapfinding; Sneak Attack; Trap Finding; 6th-level Rogue Talent; Uncanny Dodge; Improved Uncanny Dodge

## Implementation details

### Replaces: the rogue’s weapon proficiencies

- **Archetype feature:** Weapon Proficiency
- **Description:** A gun smuggler is proficient with all simple weapons and one-handed firearms, plus the rapier, sap, short sword, and sword cane.
- **Detailed mechanics:**
  - **Rules text to implement:** A gun smuggler is proficient with all simple weapons and one-handed firearms, plus the rapier, sap, short sword, and sword cane.
- **Implementation flags:**
  - firearm subsystem.

### Replaces: trapfinding

- **Archetype feature:** Hidden Gun (Ex)
- **Description:** A gun smuggler gains a bonus equal to half her rogue level on Sleight of Hand checks to conceal a one-handed firearm on her body.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A gun smuggler gains a bonus equal to half her rogue level on Sleight of Hand checks to conceal a one-handed firearm on her body. She increases the DCs of opponents’ Perception checks to realize the true nature of disguised weapons (such as a sword cane) within 5 feet of her by an amount equal to her rogue level (maximum DC 25 plus her rogue level).
- **Implementation flags:**
  - firearm subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Secret Sidearm (Ex)
- **Description:** As an expert in discreet and easily concealable weapons and firearms, a gun smuggler gains a battered gun identical to that gained by a 1st-level gunslinger and Gunsmithing as a bonus feat (including the ability to restore her battered gun as if she were a gunslinger), though she must select a coat pistol, dagger pistol, or sword cane pistol as her battered weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** As an expert in discreet and easily concealable weapons and firearms, a gun smuggler gains a battered gun identical to that gained by a 1st-level gunslinger and Gunsmithing as a bonus feat (including the ability to restore her battered gun as if she were a gunslinger), though she must select a coat pistol, dagger pistol, or sword cane pistol as her battered weapon.
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Alters: sneak attack

- **Archetype feature:** Selective Targeting (Ex)
- **Description:** A gun smuggler focuses on concealable firearms for her sneak attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A gun smuggler focuses on concealable firearms for her sneak attacks. When she makes a sneak attack using any weapon other than a coat pistol, dagger pistol, or sword cane pistol (either firing the weapon or making a melee attack), her sneak attack damage dice are d4s instead of d6s.
- **Implementation flags:**
  - ki subsystem.
  - firearm subsystem.

### Replaces: trap sense and the rogue talent gained at 6th level

- **Archetype feature:** Stolen Shots (Ex)
- **Description:** At 3rd level, a gun smuggler can access small quantities of cutting-edge firearm technology through clandestine dealers.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 9, 18.
  - **Rules text to implement:** At 3rd level, a gun smuggler can access small quantities of cutting-edge firearm technology through clandestine dealers. She gains the benefits of the black market connections rogue talent, though only for the purpose of securing firearms and related equipment. At the beginning of each day, the gun smuggler gains a number of bullets (with accompanying black powder) or paper cartridges—referred to as shots—in any combination equal to her rogue level, representing ammunition smuggled to her by contacts. Her contacts provide only enough shots to replenish this small supply, so she can’t accumulate ammunition indefinitely, and these shots have a market price of 0 gp. At 6th level, the gun smuggler can elect to gain one or more pieces of magic ammunition, though each one replaces a number of her daily shots equal to the ammunition’s enhancement bonus (maximum enhancement bonus of +2 for any one piece of ammunition). She can choose to add any of the following weapon special abilities to the shot, though the shot must have at least a +1 enhancement bonus, and these special abilities use an amount of bonus equal to the ability’s normal price: distance, flaming, flaming burst, merciful, seeking, or thundering. At 9th level and every 3 rogue levels thereafter, the maximum enhancement bonus of a gun smuggler’s shots increases by 1 (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - ki subsystem.
  - firearm subsystem.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Uncanny Aim (Ex)
- **Description:** At 4th level, a gun smuggler increases the range increment of any coat pistol, dagger pistol, or sword cane pistol she wields by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a gun smuggler increases the range increment of any coat pistol, dagger pistol, or sword cane pistol she wields by 10 feet. At 8th level, the base damage of bullets fired by these weapons increases by one die step.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon Proficiency
- Hidden Gun (Ex)
- Secret Sidearm (Ex)
- Selective Targeting (Ex)
- Stolen Shots (Ex)
- Uncanny Aim (Ex)
