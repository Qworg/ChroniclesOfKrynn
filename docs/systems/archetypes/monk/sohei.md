# Monk - Sohei

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Sohei
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Sohei
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Weapon and Armor Proficiency; Bonus Feats; Devoted Guardian (Ex); Unarmed Strike; Monastic Mount (Su); Ki Weapon (Su); Weapon Training (Ex)
- **Replaced / altered class features:** stunning fist; fast movement and increased unarmed damage; slow fall and abundant step; purity of body, diamond body, quivering palm, timeless body, and tongue of sun and moon

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** A sohei gains Handle Animal as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A sohei gains Handle Animal as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: the monk’s weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A sohei is proficient with all simple and martial weapons and with light armor, instead of a monk’s usual weapon and armor proficiencies.
- **Detailed mechanics:**
  - **Rules text to implement:** A sohei is proficient with all simple and martial weapons and with light armor, instead of a monk’s usual weapon and armor proficiencies. When wearing light armor, a sohei can still use his flurry of blows ability, but loses his AC bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A sohei may select mounted combat feats as bonus feats.
- **Detailed mechanics:**
  - **Rules text to implement:** A sohei may select mounted combat feats as bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: stunning fist

- **Archetype feature:** Devoted Guardian (Ex)
- **Description:** At 1st level, a sohei can always act in a surprise round even if he does not notice his enemies, though he remains flat-footed until he acts.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, a sohei can always act in a surprise round even if he does not notice his enemies, though he remains flat-footed until he acts. In addition, a sohei gains a bonus on initiative rolls equal to 1/2 his monk level. At 20th level, a sohei’s initiative roll is automatically a natural 20.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unarmed Strike
- **Description:** A sohei’s unarmed strike damage does not increase at 4th level and above.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** A sohei’s unarmed strike damage does not increase at 4th level and above.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: fast movement and increased unarmed damage

- **Archetype feature:** Monastic Mount (Su)
- **Description:** At 4th level, a sohei may spend 1 point from his ki pool to grant his mount temporary hit points equal to twice his level for 1 hour per level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a sohei may spend 1 point from his ki pool to grant his mount temporary hit points equal to twice his level for 1 hour per level. In addition, as long as the sohei and his mount are adjacent, including when mounted, the mount gains any of the following abilities the sohei possesses: AC bonus, diamond soul, evasion, high jump, improved evasion, ki strike (as long as the sohei has at least 1 point in his ki pool), perfect self, and still mind. When a sohei spends points from his ki pool, his mount gains the same benefits as the sohei.
- **Implementation flags:**
  - ki subsystem.

### Replaces: slow fall and abundant step

- **Archetype feature:** Ki Weapon (Su)
- **Description:** At 4th level, as a swift action, a sohei may spend 1 point from his ki pool to grant any weapon he wields (including his unarmed strike) a +1 enhancement bonus on attack and damage rolls, increasing by +1 per four levels after 4th to a maximum bonus of +5 at 20th level, until the end of his next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 20.
  - **Rules text to implement:** At 4th level, as a swift action, a sohei may spend 1 point from his ki pool to grant any weapon he wields (including his unarmed strike) a +1 enhancement bonus on attack and damage rolls, increasing by +1 per four levels after 4th to a maximum bonus of +5 at 20th level, until the end of his next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: purity of body, diamond body, quivering palm, timeless body, and tongue of sun and moon

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 6th level, a sohei gains weapon training in one of the following weapon groups, as the fighter class feature: bows, crossbows, monk weapons, polearms, spears, or thrown weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 18.
  - **Rules text to implement:** At 6th level, a sohei gains weapon training in one of the following weapon groups, as the fighter class feature: bows, crossbows, monk weapons, polearms, spears, or thrown weapons. He may select an additional group of weapons for every six levels after 6th, to a maximum of three at 18th level. A sohei may use flurry of blows and ki strike with any weapon in which he has weapon training.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skills
- Weapon and Armor Proficiency
- Bonus Feats
- Devoted Guardian (Ex)
- Unarmed Strike
- Monastic Mount (Su)
- Ki Weapon (Su)
- Weapon Training (Ex)
