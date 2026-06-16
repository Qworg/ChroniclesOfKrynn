# Inquisitor - Faith Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Faith Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Faith%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Sworn Enemy (Sp, Su); Enemy Revealed (Su); Hateful Bane (Su)
- **Replaced / altered class features:** domain and alters judgment; detect alignment

## Replacement details

### Replaces: domain

- **Archetype feature:** Sworn Enemy (Sp, Su)
- **Description:** A faith hunter chooses a single alignment (such as chaotic evil, rather than simply chaotic or evil) that directly opposes her own along either the law/ chaos axis or the good/evil axis (so a lawful good faith hunter can choose chaotic good, chaotic neutral, chaotic evil, neutral evil, or lawful evil, whereas a neutral good faith hunter can only choose chaotic evil, neutra..
- **Mechanics:**
  - Level hooks: 6, 10, 18.
  - Mechanics summary: A faith hunter chooses a single alignment (such as chaotic evil, rather than simply chaotic or evil) that directly opposes her own along either the law/ chaos axis or the good/evil axis (so a lawful good faith hunter can choose chaotic good, chaotic neutral, chaotic evil, neutral evil, or lawful evil, whereas a neutral good faith hunter can only choose chaotic evil, neutra... Creatures of this alignment are her sworn enemies. She can detect creatures of that specific alignment at will, functioning as detect evil , except this ability works only on creatures and detects the specific alignment. At 6th level, once per day as a swift action, a faith hunter can smite one foe she can see. If the foe is of the faith hunter’s sworn enemy alignment, the faith hunter gains a +4 sacred bonus on attack rolls against that foe and a sacred bonus equal to half her inquisitor level on damage rolls made against the foe. Smites against targets of the faith hunter’s sworn enemy alignment automatically bypass any DR the creature might possess.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, cleric domain hook, smite hook.

### Replaces: alters judgment

- **Archetype feature:** Sworn Enemy (Sp, Su)
- **Description:** A faith hunter chooses a single alignment (such as chaotic evil, rather than simply chaotic or evil) that directly opposes her own along either the law/ chaos axis or the good/evil axis (so a lawful good faith hunter can choose chaotic good, chaotic neutral, chaotic evil, neutral evil, or lawful evil, whereas a neutral good faith hunter can only choose chaotic evil, neutra..
- **Mechanics:**
  - Level hooks: 6, 10, 18.
  - Mechanics summary: A faith hunter chooses a single alignment (such as chaotic evil, rather than simply chaotic or evil) that directly opposes her own along either the law/ chaos axis or the good/evil axis (so a lawful good faith hunter can choose chaotic good, chaotic neutral, chaotic evil, neutral evil, or lawful evil, whereas a neutral good faith hunter can only choose chaotic evil, neutra... Creatures of this alignment are her sworn enemies. She can detect creatures of that specific alignment at will, functioning as detect evil , except this ability works only on creatures and detects the specific alignment. At 6th level, once per day as a swift action, a faith hunter can smite one foe she can see. If the foe is of the faith hunter’s sworn enemy alignment, the faith hunter gains a +4 sacred bonus on attack rolls against that foe and a sacred bonus equal to half her inquisitor level on damage rolls made against the foe. Smites against targets of the faith hunter’s sworn enemy alignment automatically bypass any DR the creature might possess.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, cleric domain hook, smite hook.

### Replaces: detect alignment

- **Archetype feature:** Enemy Revealed (Su)
- **Description:** At 2nd level, when a faith hunter uses her sworn enemy ability to identify a creature’s alignment (typically on the third round of concentrating on an area including the creature), she can reveal that creature’s alignment aura, causing it to glow for 1 round per inquisitor level so that even creatures with regular vision can see the aura.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, when a faith hunter uses her sworn enemy ability to identify a creature’s alignment (typically on the third round of concentrating on an area including the creature), she can reveal that creature’s alignment aura, causing it to glow for 1 round per inquisitor level so that even creatures with regular vision can see the aura. This not only allows others to recognize the creature’s alignment, potentially exposing its true nature, it also allows them to track its location easily by the glow. The faith hunter can use this ability a number of times per day equal to her Wisdom modifier (minimum 1), and it doesn’t take any extra action on her part to do so; it is part of the same action as concentrating on her sworn enemy detect ability.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: bane

- **Archetype feature:** Hateful Bane (Su)
- **Description:** At 5th level, a faith hunter’s bane ability functions only against creatures that are both the selected creature type and her sworn enemy alignment.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a faith hunter’s bane ability functions only against creatures that are both the selected creature type and her sworn enemy alignment.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Sworn Enemy (Sp, Su)
- Enemy Revealed (Su)
- Hateful Bane (Su)

