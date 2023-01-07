#include <iostream>
#include <cmath>

using namespace std;

class Player {
    public:
        int level;
        string name;
        string type;
        Player (int aLevel, string aName, string aType) {
            level = aLevel;
            name = aName;
            type = aType;
        }

        void dungeonL() {
            if (level > 10) {
                cout << name << " can enter this dungeon!\n";
            }
            cout << name << " cannot enter this dungeon!\n" << "Player must level up " << 15 - level << " times!\n";
        }
};

int main() {
    
    Player player1(9, "Gandalf", "Wizard");  

    player1.dungeonL();

    return 0;
}