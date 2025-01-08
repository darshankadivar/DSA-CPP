#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int gr_id;
    string city;

    void SetData()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Gr_Id : ";
        cin >> gr_id;
        cout << "Enter City : ";
        cin >> city;

        cout << endl;
    }

    void getData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gr_Id : " << gr_id << endl;
        cout << "City : " << city << endl;
    }
};

int main()
{
    Student arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i].SetData();
        arr[i].getData();

        cout << endl;
    }
}