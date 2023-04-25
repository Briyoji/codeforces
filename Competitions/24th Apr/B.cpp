#include <iostream>
#include <math.h>

using namespace std;

int main()
{ 
    // Number of test Cases
    int test_cases;
    cin >> test_cases;

    // Looping for Each Test Case
    for (int test_case = 0; test_case < test_cases; test_case++) {
        long int side; cin >> side;
        cout << (side * (side)) + 2 * side + 2 << '\n';
    }
 
    return 0;
}