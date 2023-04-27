#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];

//user defined type that I designed for selecting 2 pokemon
typedef struct {
    u16 pokemon1;
    u16 pokemon2;
} sStarterPair;

sStarterPair GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);

#endif // GUARD_STARTER_CHOOSE_H
