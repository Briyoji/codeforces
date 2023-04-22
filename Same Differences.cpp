#include <iostream>
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
        }

        int counter = 0;
        
        // looping once.
        for (int i = 0; i < length; i++) {
            for (int j = i+1; j < length; j++) {
                if (arr[j] - arr[i] == j - i) counter ++;
            }
        }

        // Output
        cout << counter << endl;
    }
 
    return 0;
}
