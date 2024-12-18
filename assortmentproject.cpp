#include <iostream>
using namespace std;

main () {
    // int n;
    // cout << "eneter the size of the array : ";
    // cin >> n;

    // int a[n];

    // cout << "enter the element of the array : " << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << "a[" << i << "] = ";
    //     cin >> a[i];
    // }

    // cout << "negative element in the array : " << " ";
    // int negativeelement = false;
    // for (int i = 0; i < n; i++) {
    //     if (a[i] < 0) {
    //         cout << a[i] << " , ";
    //         negativeelement = true;
    //     }
    // }

    // cout << endl;


    int n;
    
    cout << "enter the array row size : ";
    cin >> n;
    cout << "enter the aaray columns size : ";
    cin >> n;
    
    int a[n][n];
    cout << "eneter array element : " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    
    int largest = a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }
    
    cout << "the largest element is : " << largest << endl;

}