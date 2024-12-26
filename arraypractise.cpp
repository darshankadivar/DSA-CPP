#include <iostream>
using namespace std;

main()
{
    // int size = 5;
    // int marks [size];

    // for (int i = 0; i < size; i++) {
    //     cout << "enter of element : ";
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < size; i++) {
    //     cout << marks[i] << endl;
    // }

    int nums [] = {13,12,10,-15,20};
    int size = 5;

    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for (int i = 0; i < size; i++) {
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout << "smallest : " << smallest << endl;
    cout << "largest : " << largest << endl;
}