#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    bool foundDuplicate = false;
    cout << "Duplicate elements in the array are: ";

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            if (!foundDuplicate) {
                cout << arr[i];
                foundDuplicate = true;
            } else {
                cout << ", " << arr[i];
            }
        }
    }

    if (!foundDuplicate) {
        cout << "None";
    }

    cout << endl;

    return 0;
}
