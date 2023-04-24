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
        int case_val;
        cin >> case_val;

        int num_1, num_2, temp, common, idx = 4;

        cin >> num_1 >> num_2 >> temp;
        
        if (temp == num_1 and temp == num_2) {
            common = temp;
            while (idx <= case_val) {
                cin >> temp;
                if (temp != common) cout << idx << endl;
                ++idx;
            }
            continue;
        }
        else if (temp != num_1 and temp == num_2) cout << 1 << endl;
        else if (temp == num_1 and temp != num_2) cout << 2 << endl;
        else cout << 3 << endl;

        while (idx <= case_val) {
            cin >> temp;
            ++idx;
        }
    }
 
    return 0;
}