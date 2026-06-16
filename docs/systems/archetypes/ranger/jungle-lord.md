# Ranger - Jungle Lord

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Jungle Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Jungle%20Lord
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proﬁciency; Bonus Language; Animal Focus (Su); Favored Terrain (Ex); Hunter’s Bond (Ex); Hardened by Nature (Ex); Brachiation (Ex); Inspired Moment (Ex); Strong Bond (Ex); Victory Cry (Ex)
- **Replaced / altered class features:** favored enemy; spells; the additional favored terrain granted to rangers at 5th level; quarry and improved quarry; camouﬂage; master hunter

## Replacement details

### Replaces: the ranger’s normal weapon

- **Archetype feature:** Weapon and Armor Proﬁciency
- **Description:** A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip.
- **Mechanics:**
  - Mechanics summary: A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip. Jungle Lords are not proﬁcient with armor and shields.
- **Implementation flags:**
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: armor proﬁciencies

- **Archetype feature:** Weapon and Armor Proﬁciency
- **Description:** A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip.
- **Mechanics:**
  - Mechanics summary: A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip. Jungle Lords are not proﬁcient with armor and shields.
- **Implementation flags:**
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: favored enemy

- **Archetype feature:** Animal Focus (Su)
- **Description:** As a swift action, a jungle lord can take on the aspect of an animal, gaining a bonus or a special ability based on the type of animal emulated.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: As a swift action, a jungle lord can take on the aspect of an animal, gaining a bonus or a special ability based on the type of animal emulated. This ability functions as the hunter’s animal focus class feature ( Pathﬁnder RPG Advanced Class Guide 27 ), though it applies only to the jungle lord and not an animal companion. The jungle lord can use this ability for 1 minute per day per ranger level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. He can emulate only one animal at a time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, animal companion hook, favored enemy hook.

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a jungle lord must select jungle as his ﬁrst favored terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a jungle lord must select jungle as his ﬁrst favored terrain.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Alters: hunter’s bond

- **Archetype feature:** Hunter’s Bond (Ex)
- **Description:** A jungle lord forms a close bond with an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 3, 1.
  - Mechanics summary: A jungle lord forms a close bond with an animal companion. This ability functions like the druid animal companion ability except that the jungle lord’s effective druid level is equal to his ranger level -3. The jungle lord gains a +2 bonus on wild empathy and Handle Animal checks regarding his animal companion. A jungle lord can choose his companion from the following list: ape, axe beak B3 , baboon B2 , bear, big cat (lion, tiger), bird, boar, crocodile (alligator), dinosaur (deinonychus, pteranodon B1 , velociraptor), dog, elephant B1 , giant chameleon B3 , giant gecko B3 , giant vulture B3 , giraffe B4 , hippopotamus B2 , moa B5 , monitor lizard B1 , rhinoceros B1 , small cat (c... (Superscript B indicates a Pathﬁnder RPG Bestiary volume.) The jungle lord can have up to four animal companions, but he must divide up his eﬁective druid level between his companions to determine the abilities of each companion. For example, a jungle lord with an effective druid level of 4 can have one 4th-level companion, two and- level companions, or one lst-level and one 3rd-level companion.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook.

### Replaces: spells

- **Archetype feature:** Hardened by Nature (Ex)
- **Description:** At 4th level, the jungle lord's keen senses make him harder to hit and more able to withstand those blows that manage to sneak by his defenses.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6.
  - Mechanics summary: At 4th level, the jungle lord's keen senses make him harder to hit and more able to withstand those blows that manage to sneak by his defenses. When unarmored and unencumbered, the jungle lord can add his Wisdom bonus (if any) to his AC and his CMB. In addition, the jungle lord gains a +1 dodge bonus to AC at 6th level, and every 3 ranger levels thereafter (9th, 12th, 15th, and 18th). He loses these bonuses when he wears any armor, when he carries a shield, or when he carries a medium or heavy load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the additional favored terrain granted to rangers at 5th level

- **Archetype feature:** Brachiation (Ex)
- **Description:** At 5th level, as a free action for a number of rounds per day equal to his ranger level, a jungle lord can climb with a climb speed equal to his land speed, and gains a bonus on Acrobatics checks equal to his ranger level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, as a free action for a number of rounds per day equal to his ranger level, a jungle lord can climb with a climb speed equal to his land speed, and gains a bonus on Acrobatics checks equal to his ranger level. These rounds do not have to be consecutive. The jungle lord still gains additional favored terrains at 10th, 15th, and 18th levels.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Replaces: quarry and improved quarry

- **Archetype feature:** Inspired Moment (Ex)
- **Description:** At 11th level, the jungle lord can have an inspired moment once per day as a free action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11, 19.
  - Mechanics summary: At 11th level, the jungle lord can have an inspired moment once per day as a free action. The jungle lord gains the following beneﬁts until the end of his next turn. He can take an extra move or swift action on his turn. He gains a +4 bonus to AC and on attack rolls, skill checks, or ability checks. He can use this ability one additional time per day at 19th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: camouﬂage

- **Archetype feature:** Strong Bond (Ex)
- **Description:** At 12th level, the jungle lord strengthens his bond with his animal companions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the jungle lord strengthens his bond with his animal companions. The jungle lord’s effective druid level for his animal companions is now equal to his ranger level; he can immediately allocate these additional levels to his companions as he sees ﬁt.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

### Replaces: master hunter

- **Archetype feature:** Victory Cry (Ex)
- **Description:** At 20th level, the jungle lord’s signature battle cry rallies his animal friends to greater combat prowess and hardiness.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the jungle lord’s signature battle cry rallies his animal friends to greater combat prowess and hardiness. The jungle lord can shout his victory cry a number of times per day equal to his Wisdom modiﬁer as a standard action. Each time he does so, his animal companions within 200 feet gain a +6 morale bonus on attack rolls and to AC, and all threatened critical hits made by his animal companions are automatically conﬁrmed. Furthermore, following his victory cry, the jungle lord can apply a number of animal aspects equal to his Wisdom modiﬁer when using animal focus, rather than the usual limit of one. These effects last for 1 minute.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proﬁciency
- Bonus Language
- Animal Focus (Su)
- Favored Terrain (Ex)
- Hunter’s Bond (Ex)
- Hardened by Nature (Ex)
- Brachiation (Ex)
- Inspired Moment (Ex)
- Strong Bond (Ex)
- Victory Cry (Ex)

