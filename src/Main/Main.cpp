#include "Main.h"

int main(int argc, char *argv[]) {
    printf("!!! The Space Station !!!\n");
    
    Map spaceMap;
    
    PlayableCharacter PC_Gnomy;
    PC_Gnomy.SetCharacterName("Gn0my");
    PC_Gnomy.PrintCharacterNameAndTitle();
    PC_Gnomy.SetCharacterTitle("Space Pirate");
    PC_Gnomy.PrintCharacterNameAndTitle();
    PC_Gnomy.InitCharacterSkills();

    Skill hull("Hulls");
    PC_Gnomy.LevelUpSkills(hull, 100);
    PC_Gnomy.InitCharacterSkills();
    
    
    return 0;
}
