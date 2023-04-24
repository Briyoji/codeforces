#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 
    // Number of test Cases
    int test_cases;
    cin >> test_cases;

    // Looping for Each Test Case
    for (int test_case = 0; test_case < test_cases; test_case++) {
        int len;
        cin >> len;

        // int arr[len];
        int temp, max;
        double sum;


        cin >> temp;
        max = temp;
        sum = temp;

        for (int idx = 1; idx < len; idx ++) {
            cin >> temp;
            if (temp > max) max = temp;
            sum += temp;
        }
        
        cout << std::fixed << std::setprecision(9) <<  max + (sum-max)/(len-1) << endl; 

    }
 
    return 0;
}
