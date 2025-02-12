#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    // Print Sorted Array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Search using Linear Search\n";
        cout << "2. Search using Binary Search\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;
                int found = -1;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        found = i;
                        break;
                    }
                }
                if (found != -1)
                    cout << "Element found at index " << found << endl;
                else
                    cout << "Element not found\n";
                break;
            }
            case 2: {
                int key;
                cout << "Enter element to search: ";
                cin >> key;
                int left = 0, right = n - 1;
                int found = -1;
                while (left <= right) {
                    int mid = left + (right - left) / 2;
                    if (arr[mid] == key) {
                        found = mid;
                        break;
                    }
                    if (arr[mid] < key)
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
                if (found != -1)
                    cout << "Element found at index " << found << endl;
                else
                    cout << "Element not found\n";
                break;
            }
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
