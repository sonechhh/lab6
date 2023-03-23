#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <time.h>

#include "Characters.h"
#include "Arena.h"

using namespace std;


int main() {
    system("chcp 65001");

    srand(time(NULL));


    Prey prey("prey", Point2D(1, 1), true);
    Predator predator("predator", Point2D(1, 1), false);

    Arena arena(80, 80, &prey, &predator);

    cout << arena;

    //
    //cout << "Enter a name for your prey: ";    
    //cin >> prey_name;
    //cout << "Enter a name for your predator: ";
    //cin >> predator_name;
    //
    //cout << "За кого хотите играть? (0-жертва, 1-хищник)" << endl;
    //cin >> sideChoice;

    //bool preyNpc = true;
    //if (sideChoice == 0) preyNpc = false;

    //Prey prey(prey_name, Point2D(1, 1), preyNpc);
    //Predator predator(predator_name, Point2D(7, 1), !preyNpc);

    //prey.autoMove();
    //predator.autoMove();


    //Arena arena(10, 10, &prey, &predator);
    //cout << arena << endl;

    //while (1) {
    //    
    //    if (sideChoice == 0) {
    //        if (check(prey, predator)) {
    //            
    //            predator.MoveTo(prey.getx(), prey.gety());
    //            
    //            cout << arena;
    //            cout << "\n!!!!!! ХИЩНИК ПОБЕДИЛ !!!!!!" << endl;
    //            return 0;
    //        }
    //        else {
    //            prey.AutoMove(arena, sideChoice);
    //            predator.AutoMove(arena, sideChoice);
    //            cout << arena << endl;
    //        }
    //    }
    //    
    //    else {
    //        if (check1(prey, predator)) {
    //            cout << "\n!!!!!! ХИЩНИК ПОБЕДИЛ !!!!!!" << endl;
    //            return 0;
    //        }
    //        else {
    //            prey.AutoMove(arena, sideChoice);
    //            predator.AutoMove(arena, sideChoice);
    //            cout << arena << endl;
    //        }
    //    }
    //}

    return 0;
}