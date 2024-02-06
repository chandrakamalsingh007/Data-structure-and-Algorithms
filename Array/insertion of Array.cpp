#include<bits/stdc++.h>
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
void insert_position(int arr[], int &n) {
    int pos, num;
    cout << "Enter the number to be inserted: ";
    cin >> num;

    cout << "Enter the position at which the number is inserted: ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos] = num;

    // Increase the size of the array
    n++;

    displayArray(arr, n);
}




int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n]; // Dynamic-sized array is allowed since C++11

    createArray(arr, n);
    insert_position(arr,n);
    

    return 0;
}