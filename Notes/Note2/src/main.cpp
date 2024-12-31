#include <iostream>
#define MIN(a, b) ((a < (b))? (a) : (b))
#define MAX(a, b) ((a > (b))? (a) : (b))
using namespace std;
int main()
{
    cout << MIN(5.7, 16) << endl;
    cout << MAX(5.7, 16) << endl;
}