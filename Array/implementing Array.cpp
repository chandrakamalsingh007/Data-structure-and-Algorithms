#include <iostream>
using namespace std;

void createArray(int arr[], int n) {
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << " = ";
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n) {
    cout << "Elements are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n]; // Dynamic-sized array is allowed since C++11

    createArray(arr, n);
    displayArray(arr, n);

    return 0;
}