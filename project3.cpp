#include <iostream>
using namespace std;

int main()
{
    // QUS-1 -------------------------------------------------------

    // int n = 5;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 41; j < 41 + i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;

      // QUS-2 -------------------------------------------------------

    // int n = 4;
    // int number = 11;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << number << " ";
    //         number++;
    //     }
    //     cout << endl;
    // }

    // QUS-3 -------------------------------------------------------

    // int rows = 5;

    // for (int i = rows; i >= 1; --i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {
    //         cout << (j % 2) << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;

    // QUS-4 -------------------------------------------------------

    // int rows = 5;

    // for (int i = 1; i <= rows; ++i)
    // {
    //     for (int j = 1; j <= rows - i; ++j)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = rows - i + 1; j <= rows; ++j)
    //     {
    //         cout << j << " ";
    //     }

    //     for (int j = rows - 1; j >= rows - i + 1; --j)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    // return 0;

    // QUS-5 -------------------------------------------------------

    int n = 5;

    for (int i = 1; i <= n; ++i)
    {
        cout << i << " ";
    }

    for (int i = n; i >= 1; --i)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
