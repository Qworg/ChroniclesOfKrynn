# Ranger - Shapeshifter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Shapeshifter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Shapeshifter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Combat Style Feat (Ex); Shifter’s Blessing (Su); Dual Form Shifter (Ex); Master Shifter (Su)
- **Replaced / altered class features:** favored terrain; camouflage; master hunter

## Replacement details

### Replaces: favored terrain

- **Archetype feature:** Shifter’s Blessing (Su)
- **Description:** At 3rd level, the shapeshifter can take on the aspects of a wild creature once per day as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, the shapeshifter can take on the aspects of a wild creature once per day as a swift action. He can remain in this form for a number of rounds equal to his ranger level + his Wisdom modifier. While in one of his shifter’s blessing forms, the ranger gains the shapeshifter subtype. The shapeshifter must choose one of the following forms. Once this choice is made, it cannot be changed. Form of the Bear : The ranger’s muscles enlarge and tighten, and his facial features become more ursine.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored terrain hook, ki/monk hook, AC/natural armor bonus.

### Replaces: camouflage

- **Archetype feature:** Dual Form Shifter (Ex)
- **Description:** At 12th level, when the shapeshifter takes on a shifter’s blessing form, he can take on a hybrid of two of his forms.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, when the shapeshifter takes on a shifter’s blessing form, he can take on a hybrid of two of his forms. He gains the bonuses for both forms.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: master hunter

- **Archetype feature:** Master Shifter (Su)
- **Description:** At 20th level, the ranger’s shifter’s blessing forms improve, and he can take on true forms of beasts.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the ranger’s shifter’s blessing forms improve, and he can take on true forms of beasts. The ranger can use dual form shifter with this ability, although he cannot use more than one polymorph effect at any one time. The ranger’s forms from shifter’s blessing improve to the following: Form of the Bear : The ranger’s muscles enlarge and tighten, and his facial features become more ursine. While in this form, the ranger gains a +8 enhancement bonus to Strength and he does not suffer any reduction of speed. Alternatively, the ranger can polymorph into the form of a bear as if the caster of beast shape IV . While in this form, the ranger increases his base speed by 20 feet and he gains a +10 bonus on Acrobatics and Climb checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook, AC/natural armor bonus.

## Parsed source feature headings

- Combat Style Feat (Ex)
- Shifter’s Blessing (Su)
- Dual Form Shifter (Ex)
- Master Shifter (Su)

