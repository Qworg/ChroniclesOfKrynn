# Summoner - Shadow Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Shadow Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Shadow%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Shadow Summoning (Sp); Shadow Eidolon
- **Replaced / altered class features:** Class Skills; Summon Monster; Eidolon

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The shadow caller adds Stealth to his list of class skills and removes Use Magic Device from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The shadow caller adds Stealth to his list of class skills and removes Use Magic Device from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Shadow Summoning (Sp)
- **Description:** When a shadow caller uses his summon monster ability or casts the summon monster spell, he typically summons creatures from the Shadow Plane or creatures closely associated with shadow.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** When a shadow caller uses his summon monster ability or casts the summon monster spell, he typically summons creatures from the Shadow Plane or creatures closely associated with shadow. When a creature on the summon monster spell list indicates that it is summoned with either the celestial or the fiendish template based on the alignment of the caster, the creature summoned by the shadow caller has the shadow creature template instead. Furthermore, the summon monster lists are modified in the following ways (these changes also apply to using a higher-level summon spell to summon multiple creatures from a lower-level list). Summon Monster I : No changes. Summon Monster II : A shadow caller cannot summon Small elementals or lemures, but instead can summon zoogs. Summon Monster III : A shadow caller cannot summon dretches or lantern archons, but can summon augur kytons. Summon Monster IV : A shadow caller cannot summon Medium elementals, hell hounds, hound archons, or mephits, but can summon allips, gloomwings, and shadows. Summon Monster V : A shadow caller cannot summon babau, bearded devils, bralani azatas, Large elementals, salamanders, or xills, but can summon shadow mastiffs and shae. Summon Monster VI : A shadow caller cannot summon Huge elementals, erinyes, lillend azatas, or succubi, but can summon cloakers. Summon Monster VII : A shadow caller cannot summon bebiliths, bone devils, greater elementals, or vrocks, but can summon greater shadows. Summon Monster VIII : A shadow caller can only summon derghodaemons and young umbral dragons. Summon Monster IX : A shadow caller can only summon interlocutor kytons and nightwings. This ability otherwise functions as and replaces the summoner’s normal summon monster spell-like abilities.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: the summoner’s eidolon ability

- **Archetype feature:** Shadow Eidolon
- **Description:** A shadow caller’s eidolon is at once a thing of shadow called from the deep of the Shadow Plane and his own shadow; the two are inseparable.
- **Detailed mechanics:**
  - **Rules text to implement:** A shadow caller’s eidolon is at once a thing of shadow called from the deep of the Shadow Plane and his own shadow; the two are inseparable. When his eidolon manifests, his shadow lengthens and finally detaches from him as a creature unto itself. For as long as the shadow caller’s eidolon is manifested, he and the eidolon do not have distinct shadows, regardless of the presence or absence of light. This lack of a shadow replaces the magical symbol that identifies the summoner and his eidolon.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Class Skills
- Shadow Summoning (Sp)
- Shadow Eidolon
