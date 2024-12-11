#include <iostream>
using namespace std;

int main(){
    // int n = 4;

    // for (int i = 0; i<n; i++) {
    //     char ch = 'A';
    //     for (int j = 0; j<n; j++){
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // int n = 3;
    // int num = 1;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 3;
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 5;
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << char( 'A' + i)  << " "; 
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= i + 1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;
    
    // for (int i=n; i>0; i--) {
    //     cout << i << endl;
    // }
    // return 0;

    // int n = 4;

    // for (int i=0; i<n; i++) {  
    //     for (int j=i+1; j>0; j--) {
    //         cout << j;
    //     }
    //     cout << endl; 
    // }
    // return 0;


    // int n = 4;
    // int num = 1;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j > 0; j--) {
    //         cout << char ( ch + j - 1) << " ";
    //     }
    //     cout << endl;
    // }


    // int n = 4;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++) {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }
    // return 0;


    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++) {
    //         cout << char (ch + i);
    //     }
    //     cout << endl;
    // }


    // int n = 4;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i + 1; j++) {
    //         cout << j;
    //     }

    //     for (int j = i; j > 0; j--) {
    //         cout << j;
    //     }

    //     cout << endl;
    // }


    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != n - 2) {
            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}