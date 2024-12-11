#include <iostream>
using namespace std;

int main () {
    // int a [5] = {7,4,9,5,2};

    // int b [5] = {1,3,1,7,3};

    // int c [5];

    // for (int i = 0; i < 5 ; i++){
    //     c [i] = a [i] + b [i];
    //     cout << c [i] << ",";
    // }

    int n,value;
    cout << "enter array size : ";
    cin >> n;

    for (int i=0; i < n; i++){
        cout << "a[" << i <<"] = ";
        cin >> value;
    }
    cout << "length of array : " << n;
    
}