#include <iostream>
#include <cmath>
using namespace std;
#define SUNDAY (1 << 0) // 1
#define MONDAY (1 << 1) // 2
#define TUESDAY (1 << 2) // 4
#define WEDNESDAY (1 << 3) // 8
#define THURSDAY (1 << 4) // 16
#define FRIDAY (1 << 5) // 32
#define SATURDAY (1 << 6) // 64

#define TRANSFORM(day) (pow(2, day - 1))

#define SUNDAY_LIT "Sunday"
#define MONDAY_LIT "Monday"
#define TUESDAY_LIT "Tuesday"
#define WEDNESDAY_LIT "Wednesday"
#define THURSDAY_LIT "Thursday"
#define FRIDAY_LIT "Friday"
#define SATURDAY_LIT "Saturday"
#define DEFAULT "Invalid day number"

int main()
{
    cout << "Enter number of day:" << endl;
    int day;
    cin >> day;
    day = TRANSFORM(day);

    switch (day) {
        case SUNDAY:
            cout << SUNDAY_LIT << endl;
            break;
        case MONDAY:
            cout << MONDAY_LIT << endl;
            break;
        case TUESDAY:
            cout << TUESDAY_LIT << endl;
            break;
        case WEDNESDAY:
            cout << WEDNESDAY_LIT << endl;
            break;
        case THURSDAY:
            cout << THURSDAY_LIT << endl;
            break;
        case FRIDAY:
            cout << FRIDAY_LIT << endl;
            break;
        case SATURDAY:
            cout << SUNDAY_LIT << endl;
            break;
        default:
            cout << DEFAULT << endl;
            break;
    }
    return 0;
}