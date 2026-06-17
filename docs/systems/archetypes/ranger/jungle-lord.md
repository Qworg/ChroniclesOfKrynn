# Ranger - Jungle Lord

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Jungle Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Jungle%20Lord
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proﬁciency; Bonus Language; Animal Focus (Su); Favored Terrain (Ex); Hunter’s Bond (Ex); Hardened by Nature (Ex); Brachiation (Ex); Inspired Moment (Ex); Strong Bond (Ex); Victory Cry (Ex)
- **Replaced / altered class features:** favored enemy; spells; the additional favored terrain granted to rangers at 5th level; quarry and improved quarry; camouﬂage; master hunter

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The jungle lord gains Acrobatics and Linguistics as class skills instead of Knowledge (dungeoneering) and Spellcraft.
- **Detailed mechanics:**
  - **Rules text to implement:** The jungle lord gains Acrobatics and Linguistics as class skills instead of Knowledge (dungeoneering) and Spellcraft.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the ranger’s normal weapon and armor proﬁciencies

- **Archetype feature:** Weapon and Armor Proﬁciency
- **Description:** A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip.
- **Detailed mechanics:**
  - **Rules text to implement:** A jungle lord is proﬁcient with the dagger, battleaxe, blowgun, bolas, club, greatclub, handaxe, kukri, lasso ( Pathﬁnder RPG Ultimate Equipment 31 ), longbow, longspear, net, quarterstaff, shortbow, shortspear, sling, spear, and whip. Jungle Lords are not proﬁcient with armor and shields.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Language
- **Description:** A jungle lord's language options include Sylvan, the language of woodland creatures.
- **Detailed mechanics:**
  - **Rules text to implement:** A jungle lord's language options include Sylvan, the language of woodland creatures.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: favored enemy

- **Archetype feature:** Animal Focus (Su)
- **Description:** As a swift action, a jungle lord can take on the aspect of an animal, gaining a bonus or a special ability based on the type of animal emulated.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** As a swift action, a jungle lord can take on the aspect of an animal, gaining a bonus or a special ability based on the type of animal emulated. This ability functions as the hunter’s animal focus class feature ( Pathﬁnder RPG Advanced Class Guide 27 ), though it applies only to the jungle lord and not an animal companion. The jungle lord can use this ability for 1 minute per day per ranger level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. He can emulate only one animal at a time.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a jungle lord must select jungle as his ﬁrst favored terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a jungle lord must select jungle as his ﬁrst favored terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: hunter’s bond

- **Archetype feature:** Hunter’s Bond (Ex)
- **Description:** A jungle lord forms a close bond with an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 3, 1.
  - **Rules text to implement:** A jungle lord forms a close bond with an animal companion. This ability functions like the druid animal companion ability except that the jungle lord’s effective druid level is equal to his ranger level -3. The jungle lord gains a +2 bonus on wild empathy and Handle Animal checks regarding his animal companion. A jungle lord can choose his companion from the following list: ape, axe beak B3, baboon B2, bear, big cat (lion, tiger), bird, boar, crocodile (alligator), dinosaur (deinonychus, pteranodon B1, velociraptor), dog, elephant B1, giant chameleon B3, giant gecko B3, giant vulture B3, giraffe B4, hippopotamus B2, moa B5, monitor lizard B1, rhinoceros B1, small cat (cheetah, leopard), snake (constrictor, viper), or wolf. (Superscript B indicates a Pathﬁnder RPG Bestiary volume.) The jungle lord can have up to four animal companions, but he must divide up his eﬁective druid level between his companions to determine the abilities of each companion. For example, a jungle lord with an effective druid level of 4 can have one 4th-level companion, two and- level companions, or one lst-level and one 3rd-level companion. Each time a jungle lord’s effective druid level increases, he must decide how to allocate the increase among his animal companions (including the option of adding a new 1st-level companion). Once an effective druid level is allocated to a particular companion, it cannot be redistributed while that companion is in thejungle lord’s service (he must release a companion or wait until a companion dies to allocate its levels to another companion).
- **Implementation flags:**
  - animal companion progression.

### Replaces: spells

- **Archetype feature:** Hardened by Nature (Ex)
- **Description:** At 4th level, the jungle lord's keen senses make him harder to hit and more able to withstand those blows that manage to sneak by his defenses.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** At 4th level, the jungle lord's keen senses make him harder to hit and more able to withstand those blows that manage to sneak by his defenses. When unarmored and unencumbered, the jungle lord can add his Wisdom bonus (if any) to his AC and his CMB. In addition, the jungle lord gains a +1 dodge bonus to AC at 6th level, and every 3 ranger levels thereafter (9th, 12th, 15th, and 18th). He loses these bonuses when he wears any armor, when he carries a shield, or when he carries a medium or heavy load.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the additional favored terrain granted to rangers at 5th level

- **Archetype feature:** Brachiation (Ex)
- **Description:** At 5th level, as a free action for a number of rounds per day equal to his ranger level, a jungle lord can climb with a climb speed equal to his land speed, and gains a bonus on Acrobatics checks equal to his ranger level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, as a free action for a number of rounds per day equal to his ranger level, a jungle lord can climb with a climb speed equal to his land speed, and gains a bonus on Acrobatics checks equal to his ranger level. These rounds do not have to be consecutive. The jungle lord still gains additional favored terrains at 10th, 15th, and 18th levels.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quarry and improved quarry

- **Archetype feature:** Inspired Moment (Ex)
- **Description:** At 11th level, the jungle lord can have an inspired moment once per day as a free action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11, 19.
  - **Rules text to implement:** At 11th level, the jungle lord can have an inspired moment once per day as a free action. The jungle lord gains the following beneﬁts until the end of his next turn. His speed increases by 10 feet. He can take an extra move or swift action on his turn. He gains a +4 bonus to AC and on attack rolls, skill checks, or ability checks. Finally, he automatically conﬁrms any critical threat he scores. He can use this ability one additional time per day at 19th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: camouﬂage

- **Archetype feature:** Strong Bond (Ex)
- **Description:** At 12th level, the jungle lord strengthens his bond with his animal companions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, the jungle lord strengthens his bond with his animal companions. The jungle lord’s effective druid level for his animal companions is now equal to his ranger level; he can immediately allocate these additional levels to his companions as he sees ﬁt.
- **Implementation flags:**
  - animal companion progression.

### Replaces: master hunter

- **Archetype feature:** Victory Cry (Ex)
- **Description:** At 20th level, the jungle lord’s signature battle cry rallies his animal friends to greater combat prowess and hardiness.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the jungle lord’s signature battle cry rallies his animal friends to greater combat prowess and hardiness. The jungle lord can shout his victory cry a number of times per day equal to his Wisdom modiﬁer as a standard action. Each time he does so, his animal companions within 200 feet gain a +6 morale bonus on attack rolls and to AC, and all threatened critical hits made by his animal companions are automatically conﬁrmed. Furthermore, following his victory cry, the jungle lord can apply a number of animal aspects equal to his Wisdom modiﬁer when using animal focus, rather than the usual limit of one. These effects last for 1 minute.
- **Implementation flags:**
  - animal companion progression.

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
