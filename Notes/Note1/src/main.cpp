#include <iostream>
#define UP (1 << 0)
#define DOWN (1 << 1)
#define LEFT (1 << 2)
#define RIGHT (1 << 3)
#define UP_RIGHT (UP | RIGHT)
#define UP_LEFT (UP | LEFT)
#define DOWN_RIGHT (DOWN | RIGHT)
#define DOWN_LEFT (DOWN | LEFT)

using namespace std;

int main()
{
    int command;
    cin >> command;

    switch (command) {
        case UP: cout << "UP" << endl; break;
        case DOWN: cout << "DOWN" << endl; break;
        case LEFT: cout << "LEFT" << endl; break;
        case RIGHT: cout << "RIGHT" << endl; break;

        case UP_RIGHT: cout << "UP_RIGHT" << endl; break;
        case UP_LEFT: cout << "UP_LEFT" << endl; break;
        case DOWN_RIGHT: cout << "DOWN_RIGHT" << endl; break;
        case DOWN_LEFT: cout << "DOWN_LEFT" << endl; break;

        default: cout << "Invalid command" << endl; break;
    }
}