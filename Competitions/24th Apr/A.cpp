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
        int n, time_limit;
        cin >> n >> time_limit;

        int duration[n];

        // getting ai
        for (int idx = 0; idx < n; idx ++ ) cin >> duration[idx];

        int max_ent = 0, ent, video = -1;

        for (int idx = 0; idx < n and time_limit > 0; idx ++ ) {
            cin >> ent;
            if (duration[idx] <= time_limit-- and ent > max_ent) {
                max_ent = ent;
                video = idx+1;
            }
        }
        cout << video << endl;
    }
 
    return 0;
}