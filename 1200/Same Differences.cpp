#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    
    // Number of test Cases
    int test_cases;
    cin >> test_cases;

    // Looping for Each Test Case
    for (int test_case = 0; test_case < test_cases; test_case++) {
        int length;
        cin >> length;

        int arr[length];

        for (int idx = 0; idx < length; idx++) {
            cin >> arr[idx];
            arr[idx] -= idx;
        }

        int counter = 0;
        
        // CRUX

        unordered_map <int, int> dict ;
        for (int idx = 0; idx < length; idx ++) {
            if 
        }

        // Output
        cout << counter << endl;
    }
 
    return 0;
}
