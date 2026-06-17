# Paladin - Knight of Coins

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Knight of Coins
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Knight%20of%20Coins
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Eye for Forgeries (Sp); Blessing of Prosperity (Su)
- **Replaced / altered class features:** Class Skills; Skill Ranks; Detect Evil; 3rd, 9th, 15th-level Mercy

## Implementation details

### Alters: the paladin’s class skills and skill ranks per level

- **Archetype feature:** Class Skills
- **Description:** A knight of coins adds Appraise, Knowledge (local), Perception, and Use Magic Device to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A knight of coins adds Appraise, Knowledge (local), Perception, and Use Magic Device to her list of class skills. She gains a number of skill ranks equal to 4 + her Intelligence modifier at each level, instead of a number of skill ranks equal to 2 + her Intelligence modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: detect evil

- **Archetype feature:** Eye for Forgeries (Sp)
- **Description:** At will, a knight of coins can concentrate on a single item within 30 feet as a move action.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** At will, a knight of coins can concentrate on a single item within 30 feet as a move action. When she does, the knight of coins can detect if it is magical, as per the spell detect magic. The knight of coins cannot concentrate on more than one item in this way at a time.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the mercies gained at 3rd, 9th, and 15th levels

- **Archetype feature:** Blessing of Prosperity (Su)
- **Description:** A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 9.
  - **Rules text to implement:** A knight of coins is a patron of wealth and seeks to even the playing field for those who have unfair economic disadvantages. At 3rd level and every 6 levels thereafter, the paladin can select a blessing (see Blessings below). By expending a use of lay on hands, the knight of coins can instead grant a boon to herself or a creature touched as a standard action. These boons do not stack with themselves or with blessings from another knight of coins. A blessing of prosperity lasts up to 1 hour, though the knight of coins who bestowed it can end a blessing’s benefits early (whether it affects her or another creature) as a free action. Using this ability requires only one free hand and is a standard action, unless the knight of coins targets herself, in which case it is a swift action. If she knows multiple blessings of prosperity, the knight of coins can bestow multiple blessings on a single target as part of the action and the expenditure of a use of lay on hands required to use this ability. If she bestows multiple different blessings, these blessings are cumulative. For example, a 9th-level knight of coins’ blessing of prosperity ability might grant a +4 sacred bonus on Appraise and Sense Motive checks as well as a +4 sacred bonus on Perception checks and to CMD against disarm and steal combat maneuvers. A knight of coins who takes the Extra Mercy feat can gain an extra blessing of prosperity instead of an extra mercy. Once a blessing of prosperity is chosen, it can’t be changed. A character who has benefited from a blessing of prosperity cannot benefit from that same blessing again (whether bestowed by the same knight of coins or another knight of coins) for 24 hours. Blessings : The following blessings are available to a knight of coins. The target adds an extra 10% to the gp value gained when selling off treasure (normally 50% of the item’s original value). This blessing cannot result in selling treasure for more than 100% of its original value. The target gains a +4 sacred bonus on Appraise and Sense Motive checks. The target gains a +4 sacred bonus on Perception checks and to CMD against disarm and steal combat maneuvers. The target gains a +4 sacred bonus on Craft, Perform, and Profession checks. The target can use locate object as a spell-like ability once, using the knight of coins’ class level as the caster level. The target can treat one settlement as having its base value and purchase limit increased by 30%. The target must choose the affected settlement when the knight of coins bestows this blessing. The target can treat one settlement as being one size category larger for the purposes of determining available magic items. The target must choose the affected settlement when the knight of coins bestows this blessing.
- **Implementation flags:**
  - spell-like ability support.
  - crafting subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Eye for Forgeries (Sp)
- Blessing of Prosperity (Su)
