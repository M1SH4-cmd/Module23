#include <iostream>
#define TANK(model, name) model ## _ ## name

using namespace std;


void armata_shoot(int count)
{
    for (int i = 0; i < count; ++i) {
        cout << "shot!" << endl;
    }
}


int main()
{

    double armata_weight = 49.5;
    int armata_capacity = 3;
    double armata_max_speed = 90.0;

    cout << TANK(armata, weight) << endl;

    TANK(armata, weight) = 55;

    cout << TANK(armata, weight) << endl;

    TANK(armata, shoot)(5);
}
