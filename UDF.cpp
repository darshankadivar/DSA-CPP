#include <iostream>
using namespace std;

void cube() {
    int a;
    cout  << "eneter number : ";
    cin >> a;

    cout << "cube : " << a*a*a; 
}

int num() {
    int b;
    cout << "eneter number : ";
    cin >> b;

    if (b%3==0,b%5==0) {
        cout << " is divisible by both 3 & 5 both"
    }
}

main() {
    cube();
}