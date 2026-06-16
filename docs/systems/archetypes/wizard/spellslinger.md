# Wizard - Spellslinger

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spellslinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spellslinger
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Gun (Su); Gunsmith; Mage Bullets (Su); School of the Gun
- **Replaced / altered class features:** arcane bond; scribe scroll; cantrips, but the spellslinger gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Arcane Gun (Su)
- **Description:** The spellslinger gains the Exotic Weapon Proficiency (firearms) feat, and one or two of his firearms can be arcane guns.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: The spellslinger gains the Exotic Weapon Proficiency (firearms) feat, and one or two of his firearms can be arcane guns . Arcane guns are normal one-handed or two-handed firearms in the hands of others, as they were normal firearms before the spellslinger imbued them with magic. In a spellslinger’s hands, they both fire projectiles (bullets and pellets) and cast magic. At 1st level, the spellslinger decides whether he wants to have one or two arcane guns at a time. If the spellslinger chooses to have only one arcane gun at a time, spells fired through the arcane gun that require an attack roll have a ×3 critical hit multiplier. A spellslinger can cast any ranged touch attack, cone, line, or ray spells through his arcane gun .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: scribe scroll

- **Archetype feature:** Gunsmith
- **Description:** The spellslinger gains the Gunsmithing feat and a battered gun that is identical to the gun a gunslinger gains at first level.
- **Mechanics:**
  - Mechanics summary: The spellslinger gains the Gunsmithing feat and a battered gun that is identical to the gun a gunslinger gains at first level. If the spellslinger chooses the ability to attune two arcane guns , he still only starts out with one gun. Like a gunslinger, a spellslinger can use the Gunsmithing feat to restore his battered gun.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: cantrips, but the spellslinger gains the detect magic and read magic cantrips and places them in his spellbook

- **Archetype feature:** Mage Bullets (Su)
- **Description:** A spellslinger is adept at transferring spell energy into his arcane gun attacks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: A spellslinger is adept at transferring spell energy into his arcane gun attacks. As a swift action, he can sacrifice a spell and transform that energy into a weapon bonus equal to the level of the spell sacrificed on a single barrel of his firearm. With that weapon bonus the spellslinger can apply any of the following to his arcane bond: enhancement bonuses (up to +5) and dancing , defending , distance , flaming , flaming burst , frost , ghost touch , icy burst , merciful , seeking , shock , shocking burst , spell storing , thundering , vicious , and wounding . An arcane gun gains no benefit from having two of the same weapon special abilities on the same barrel. The effect of the mage bullets ability lasts for a number of minutes equal to the level of the spell sacrificed, or until this ability is used again to assign the barrel different enhancements. He can cast either of these as 1st-level spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: arcane school

- **Archetype feature:** School of the Gun
- **Description:** The rigor and care required by arcane guns is so great that a spellslinger forsakes four schools of magic.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: The rigor and care required by arcane guns is so great that a spellslinger forsakes four schools of magic. These opposition schools are chosen at 1st level and cannot be changed later. A spellslinger who prepares a spell from his opposition school must use two spell slots of that level to prepare the spell. In addition, the spellslinger takes a –4 penalty on any skill checks made when crafting a magic item that has a spell from one of his opposition schools as a prerequisite.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Arcane Gun (Su)
- Gunsmith
- Mage Bullets (Su)
- School of the Gun

