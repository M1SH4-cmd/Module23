#include <iostream>
// Define one of the macroses: SPRING, SUMMER, AUTUMN или WINTER
#define WINTER

#if defined(SPRING)
    #define SEASON "Spring"
#elif defined(SUMMER)
    #define SEASON "Summer"
#elif defined(AUTUMN)
    #define SEASON "Autumn"
#elif defined(WINTER)
    #define SEASON "Winter"
#else
    #define SEASON "Unknown season"
#endif

using namespace std;
int main() {
    cout << "Current season: " << SEASON << endl;
    return 0;
}