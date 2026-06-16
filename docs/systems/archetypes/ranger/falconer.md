# Ranger - Falconer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Falconer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Falconer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Feathered Companion (Ex); Hunter’s Bond (Ex); Swoop for the Kill (Ex)
- **Replaced / altered class features:** wild empathy; the combat style feat the ranger gains at 6th level

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Feathered Companion (Ex)
- **Description:** At 1st level, a falconer earns the trust and companionship of a bird of prey.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a falconer earns the trust and companionship of a bird of prey. The bird can be of any type of large hunting or scavenging bird (even a vulture). This ability functions like the druid animal companion ability (which is part of the nature bond class feature), but the falconer must take the bird (or falcon; Ultimate Wildneress pg. The falconer cannot teach the bird of prey the work trick, but can teach it either the roam or distract trick for free. Whichever trick the falconer does not pick then can be picked as a trick later. Roam (DC 15) : The falconer can let his animal companion loose to roam and forage.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, rage/rage-power hook, animal companion hook.

### Replaces: the combat style feat the ranger gains at 6th level

- **Archetype feature:** Swoop for the Kill (Ex)
- **Description:** At 6th level, when outdoors, a falconer can direct his feathered companion to strike an enemy from high above.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, when outdoors, a falconer can direct his feathered companion to strike an enemy from high above. His feathered companion gains the following trick as a bonus trick. Swooping Charge (DC 20; bird) : The falconer’s bird companion flies up and then swoops down into a charge. To perform this trick, the companion must be able to fly, and it must be outdoors or someplace with enough room for the bird to fly great distances in (a grand cathedral may have enough room, but dungeons usually do not). It spends a full-round action flying to a high vantage point, and on the next round makes a charge attack upon an enemy the falconer designates. If that charge attack hits, the bird deals 2d4 points of damage instead of 1d4 with its bite and gains a ×4 critical modifier when making the attack.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Feathered Companion (Ex)
- Hunter’s Bond (Ex)
- Swoop for the Kill (Ex)

