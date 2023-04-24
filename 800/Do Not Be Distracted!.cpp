#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{    
    // Number of test Cases
    int test_cases;
    cin >> test_cases;

    // Looping for Each Test Case
    for (int test_case = 0; test_case < test_cases; test_case++) {
        
        int len, idx;
        cin >> len;

        set <char> seen;
        char prev = ' ';


        string sus = "YES";

        for (idx = 0; idx < len; idx++) {
            char task;
            cin >> task;

            if (seen.count(task) != 0 and task != prev) {
                sus = "NO";
                break;
            } else {
                seen.insert(task);
            }
            prev = task;
        }

        for (int temp = len - 1 - idx; temp > 0; temp -- ) cin >> prev;

        cout << sus << endl;
    }
 
    return 0;
}
