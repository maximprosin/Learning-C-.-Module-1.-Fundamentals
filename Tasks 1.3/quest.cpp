#include <iostream>

int main() {
    int step1, step2, step3;
    
    std::cout << "You see three doors:\n";
    std::cout << "1. Red\n";
    std::cout << "2. Blue\n";
    std::cout << "3. Green\n";
    std::cout << "Choose (1/2/3): ";
    std::cin >> step1;
    
    if (step1 == 1) {
        std::cout << "\nYou find a sword, shield, or map:\n";
        std::cout << "1. Sword\n";
        std::cout << "2. Shield\n";
        std::cout << "3. Map\n";
        std::cout << "Choose (1/2/3): ";
        std::cin >> step2;
        
        if (step2 == 1) {
            std::cout << "\nFight, run, or hide?\n";
            std::cout << "1. Fight\n";
            std::cout << "2. Run\n";
            std::cout << "3. Hide\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 2) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 3) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            }
        }
        else if (step2 == 2) {
            std::cout << "\nAttack, defend, or wait?\n";
            std::cout << "1. Attack\n";
            std::cout << "2. Defend\n";
            std::cout << "3. Wait\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 2) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 3) {
                std::cout << "\nTime stops. You're stuck.\n";
            }
        }
        else if (step2 == 3) {
            std::cout << "\nGo north, south, or east?\n";
            std::cout << "1. North\n";
            std::cout << "2. South\n";
            std::cout << "3. East\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 2) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 3) {
                std::cout << "\nYou win! Freedom!\n";
            }
        }
    }
    else if (step1 == 2) {
        std::cout << "\nYou see a river, forest, or cave:\n";
        std::cout << "1. River\n";
        std::cout << "2. Forest\n";
        std::cout << "3. Cave\n";
        std::cout << "Choose (1/2/3): ";
        std::cin >> step2;
        
        if (step2 == 1) {
            std::cout << "\nSwim, cross, or follow?\n";
            std::cout << "1. Swim\n";
            std::cout << "2. Cross\n";
            std::cout << "3. Follow\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 2) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 3) {
                std::cout << "\nTime stops. You're stuck.\n";
            }
        }
        else if (step2 == 2) {
            std::cout << "\nEnter, climb, or go around?\n";
            std::cout << "1. Enter\n";
            std::cout << "2. Climb\n";
            std::cout << "3. Go around\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 2) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 3) {
                std::cout << "\nYou win! Freedom!\n";
            }
        }
        else if (step2 == 3) {
            std::cout << "\nExplore, stay, or leave?\n";
            std::cout << "1. Explore\n";
            std::cout << "2. Stay\n";
            std::cout << "3. Leave\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 2) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 3) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            }
        }
    }
    else if (step1 == 3) {
        std::cout << "\nYou meet a wizard, elf, or dwarf:\n";
        std::cout << "1. Wizard\n";
        std::cout << "2. Elf\n";
        std::cout << "3. Dwarf\n";
        std::cout << "Choose (1/2/3): ";
        std::cin >> step2;
        
        if (step2 == 1) {
            std::cout << "\nAsk, fight, or ignore?\n";
            std::cout << "1. Ask\n";
            std::cout << "2. Fight\n";
            std::cout << "3. Ignore\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 2) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 3) {
                std::cout << "\nTime stops. You're stuck.\n";
            }
        }
        else if (step2 == 2) {
            std::cout << "\nJoin, run, or hide?\n";
            std::cout << "1. Join\n";
            std::cout << "2. Run\n";
            std::cout << "3. Hide\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 2) {
                std::cout << "\nYou win! Freedom!\n";
            } else if (step3 == 3) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            }
        }
        else if (step2 == 3) {
            std::cout << "\nTrust, doubt, or attack?\n";
            std::cout << "1. Trust\n";
            std::cout << "2. Doubt\n";
            std::cout << "3. Attack\n";
            std::cout << "Choose (1/2/3): ";
            std::cin >> step3;
            
            if (step3 == 1) {
                std::cout << "\nYou die. The labyrinth wins.\n";
            } else if (step3 == 2) {
                std::cout << "\nTime stops. You're stuck.\n";
            } else if (step3 == 3) {
                std::cout << "\nYou win! Freedom!\n";
            }
        }
    }
    else {
        std::cout << "\nInvalid choice!\n";
    }
    
    return 0;
}