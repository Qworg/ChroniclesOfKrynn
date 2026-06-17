# Ranger - Shapeshifter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Shapeshifter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Shapeshifter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Combat Style Feat (Ex); Shifter’s Blessing (Su); Dual Form Shifter (Ex); Master Shifter (Su)
- **Replaced / altered class features:** favored terrain; camouflage; master hunter

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Combat Style Feat (Ex)
- **Description:** At 2nd level, a shapeshifter ranger must choose the natural weapon combat style.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a shapeshifter ranger must choose the natural weapon combat style.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: favored terrain

- **Archetype feature:** Shifter’s Blessing (Su)
- **Description:** At 3rd level, the shapeshifter can take on the aspects of a wild creature once per day as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, the shapeshifter can take on the aspects of a wild creature once per day as a swift action. He can remain in this form for a number of rounds equal to his ranger level + his Wisdom modifier. While in one of his shifter’s blessing forms, the ranger gains the shapeshifter subtype. The shapeshifter must choose one of the following forms. Once this choice is made, it cannot be changed. Form of the Bear : The ranger’s muscles enlarge and tighten, and his facial features become more ursine. While in this form, the ranger gains a +4 enhancement bonus to Strength, but his base speed becomes 20 feet. Form of the Cat : The ranger’s muscles become lean and defined, and his gait more deliberate and graceful. While in this form, the ranger increases his base speed by 10 feet, and he gains a +4 bonus on Acrobatics and Climb checks. Form of the Dragon : The ranger’s skin becomes rough and scaly. While in this form, the ranger gains a +2 natural armor bonus to AC. Form of the Eagle : The ranger’s skin stretches, his nose becomes hooked, and his eyes enlarge. While in this form, the ranger gains a +10 bonus on Perception checks. Form of the Jackal : The ranger becomes thin and hyperactive, his movements taking on a nervous spryness. While in this form, the ranger can spend a move action to move up to 1/2 his speed without provoking attacks of opportunity. Form of the Otter : The ranger’s hands and feet grow webs, and his body grows an oily fur that is water resistant. While in this form, the ranger gains a swim speed of 30 feet and a +8 bonus on Swim checks. At 8th level and again every five levels thereafter, the ranger may select an additional form for his shifter’s blessing and may use this ability one additional time per day. This is not a polymorph ability; a ranger with shifter’s blessing in one of his shifted forms can be affected by a polymorph ability and retain his bonus and traits gained by the class feature.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: camouflage

- **Archetype feature:** Dual Form Shifter (Ex)
- **Description:** At 12th level, when the shapeshifter takes on a shifter’s blessing form, he can take on a hybrid of two of his forms.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, when the shapeshifter takes on a shifter’s blessing form, he can take on a hybrid of two of his forms. He gains the bonuses for both forms.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: master hunter

- **Archetype feature:** Master Shifter (Su)
- **Description:** At 20th level, the ranger’s shifter’s blessing forms improve, and he can take on true forms of beasts.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the ranger’s shifter’s blessing forms improve, and he can take on true forms of beasts. The ranger can use dual form shifter with this ability, although he cannot use more than one polymorph effect at any one time. The ranger’s forms from shifter’s blessing improve to the following: Form of the Bear : The ranger’s muscles enlarge and tighten, and his facial features become more ursine. While in this form, the ranger gains a +8 enhancement bonus to Strength and he does not suffer any reduction of speed. Alternatively, the ranger can polymorph into the form of a bear as if the caster of beast shape IV. Form of the Cat : The ranger’s muscles become lean and defined, and his gait more deliberate and graceful. While in this form, the ranger increases his base speed by 20 feet and he gains a +10 bonus on Acrobatics and Climb checks. Alternatively, the ranger can polymorph into the form of a cat of any size as if the caster of beast shape IV. Form of the Dragon : The ranger’s skin becomes rough and scaly. While in this form, the ranger gains a +4 natural armor bonus to AC and a fly speed of 30 feet with average maneuverability. Alternately, the ranger can polymorph into the form of a dragon as if the caster of form of the dragon I. Form of the Eagle : The ranger’s skin stretches, his nose becomes hooked, and his eyes enlarge. While in this form, the ranger gains a +10 bonus on Perception checks and a fly speed of 40 feet with good maneuverability. Alternatively, the ranger can polymorph into the form of an eagle or similar raptor as if the caster of beast shape IV. Form of the Jackal : The ranger becomes thin and hyperactive, his movements taking on a nervous spryness. While in this form, the ranger does not provoke attacks of opportunity due to movement. Alternatively, the ranger can polymorph into the form of a jackal or other canine creature as if the caster of beast shape IV. Form of the Otter : The ranger’s hands and feet grow webs, and his body grows an oily fur that is water resistant. While in this form, the ranger gains a swim speed of 60 feet and a +5 bonus on Swim checks. Alternatively, the ranger can polymorph into the form of an otter or similar river mammal as if the caster of beast shape IV.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

## Parsed source feature headings

- Combat Style Feat (Ex)
- Shifter’s Blessing (Su)
- Dual Form Shifter (Ex)
- Master Shifter (Su)
