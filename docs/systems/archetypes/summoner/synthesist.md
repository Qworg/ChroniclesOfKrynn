# Summoner - Synthesist

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Synthesist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Synthesist
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Fused Eidolon; Fused Link (Su); Shielded Meld (Ex); Maker’s Jump (Sp); Greater Shielded Meld (Ex); Split Forms (Su)
- **Replaced / altered class features:** the class’s eidolon ability, bond senses, and life bond; life link; shield ally; maker’s call and transposition; greater shield ally; merge forms

## Implementation details

### Replaces: the class’s eidolon ability, bond senses, and life bond

- **Archetype feature:** Fused Eidolon
- **Description:** A synthesist summons the essence of a powerful outsider to meld with his own being.
- **Detailed mechanics:**
  - **Rules text to implement:** A synthesist summons the essence of a powerful outsider to meld with his own being. The synthesist wears the eidolon like translucent, living armor. The eidolon mimics all of the synthesist’s movements, and the synthesist perceives through the eidolon’s senses and speaks through its voice, as the two are now one creature. The synthesist directs all of the eidolon’s actions while fused, perceives through its senses, and speaks through its voice, as the two are now one creature. While fused with his eidolon, the synthesist uses the eidolon’s Strength, Dexterity, and Constitution, but retains his own Intelligence, Wisdom, and Charisma. The synthesist gains the eidolon’s hit points as temporary hit points. When these hit points reach 0, the eidolon is killed and sent back to its home plane. The synthesist uses the eidolon’s base attack bonus, and gains the eidolon’s armor and natural armor bonuses and modifiers to ability scores. The synthesist also gains access to the eidolon’s special abilities and the eidolon’s evolutions. The synthesist is still limited to the eidolon’s maximum number of natural attacks. The eidolon has no skills or feats of its own. The eidolon must be at least the same size as the synthesist. The eidolon must have limbs for the synthesist to cast spells with somatic components. The eidolon’s temporary hit points can be restored with the rejuvenate eidolon spell. While fused, the synthesist loses the benefits of his armor. He counts both as his original type and as an outsider for any effect related to type, whichever is worse for the synthesist. Spells such as banishment or dismissal work normally on the eidolon, but the synthesist is unaffected. Neither the synthesist nor his eidolon can be targeted separately, as they are fused into one creature. The synthesist and eidolon cannot take separate actions. While fused with his eidolon, the synthesist can use all of his own abilities and gear, except for his armor. In all other cases, this ability functions as the summoner’s normal eidolon ability (for example, the synthesist cannot use his summon monster ability while the eidolon is present). The following class abilities function differently for synthesist summoners.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: life link

- **Archetype feature:** Fused Link (Su)
- **Description:** Starting at 1st level, the synthesist forms a close bond with his eidolon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** Starting at 1st level, the synthesist forms a close bond with his eidolon. Whenever the temporary hit points from his eidolon would be reduced to 0, the summoner can, as a free action, sacrifice any number of his own hit points. Each hit point sacrificed this way prevents 1 point of damage done to the eidolon (thus preventing the loss of the summoner’s temporary hit points), preventing the eidolon from being killed and sent back to its home plane.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.

### Replaces: shield ally

- **Archetype feature:** Shielded Meld (Ex)
- **Description:** At 4th level, whenever the synthesist is fused with his eidolon, he gains a +2 shield bonus to his Armor Class and a +2 circumstance bonus on his saving throws.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, whenever the synthesist is fused with his eidolon, he gains a +2 shield bonus to his Armor Class and a +2 circumstance bonus on his saving throws.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: maker’s call and transposition

- **Archetype feature:** Maker’s Jump (Sp)
- **Description:** At 6th level, whenever the synthesist is fused with his eidolon, the synthesist can cast dimension door as a spell-like ability using his caster level.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, whenever the synthesist is fused with his eidolon, the synthesist can cast dimension door as a spell-like ability using his caster level. This ability only affects the fused synthesist and eidolon. The synthesist can use this ability once per day at 6th level, plus one additional time per day for every six levels beyond 6th.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - spell-like ability support.

### Replaces: greater shield ally

- **Archetype feature:** Greater Shielded Meld (Ex)
- **Description:** At 12th level, whenever the synthesist is fused with his eidolon, he gains a +4 shield bonus to his Armor Class and a +4 circumstance bonus on his saving throws.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, whenever the synthesist is fused with his eidolon, he gains a +4 shield bonus to his Armor Class and a +4 circumstance bonus on his saving throws.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: merge forms

- **Archetype feature:** Split Forms (Su)
- **Description:** At 16th level, as a swift action, the synthesist and his fused eidolon can split into two creatures: the synthesist and the eidolon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, as a swift action, the synthesist and his fused eidolon can split into two creatures: the synthesist and the eidolon. Both have the same evolutions. The synthesist emerges in a square adjacent to the eidolon if possible. All effects and spells currently targeting the fused synthesist-eidolon affect both the synthesist and the eidolon. The synthesist can use this ability for a number of rounds per day equal to his summoner level. He can end this effect at any time as a full-round action. For the duration of this effect, the eidolon functions as a normal eidolon of the summoner’s class level.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Fused Eidolon
- Fused Link (Su)
- Shielded Meld (Ex)
- Maker’s Jump (Sp)
- Greater Shielded Meld (Ex)
- Split Forms (Su)
