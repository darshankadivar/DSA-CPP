#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    
    cout << "Enter your score: ";
    cin >> score;

    
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 20) ? 'D' : 'F';

    
    cout << "Your grade is " << grade << endl; 
    

    switch (grade){
        case 'A':
            cout << " Your grade is A. Excellent work! You are eligible for the next level" << endl;
            break;
        case 'B':
            cout << "Your grade is B. well done ! You are eligible for the next level" << endl;
            break;
        case 'C':
            cout << "Your grade is c. Good job! You are eligible for the next level" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }

    return 0;
}