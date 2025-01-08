#include <iostream>
using namespace std;

class Student {
    public : 
        string name;
        int age;
        int gr_id;
        string city;

      Student(string n, int a, int g, string c){
        this->name=n;
        this->age=a;
        this->gr_id=g;
        this->city=c;
      }

        void setData () {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Gr_Id : " << gr_id << endl;
            cout << "City : " << city << endl;
        }
};

int main () {
  string n,c;
  int a,g;

 cout << "eneter name : ";
 cin >> n;
 cout << "enter age : ";
 cin >> a;
 cout << "enter gr_id : "; 
 cin >> g;
 cout << "enter city : " ;
 cin >> c;

  Student s1(n,a,g,c);

  s1.setData();
} 


// #include <iostream>
// using namespace std;

//    class teacher {
//        private :
//         double salary;
        
//        public :
//         string name;
//         string subject;
//         string dept;
        
        
//         void changedept (string newdept) {
//             dept = newdept;
//         }
//         string getdept () {
//             return dept;
//         }
//         void setsalary (double s) {
//             salary = s;
//         }
        
//         double getsalary () {
//             return salary;
//         }
//     };
      
// int main() {
//     teacher t1;
//     t1.name = "darshan";
//     t1.setsalary (25000);
//     t1.changedept ("bsc.it");
    
//     cout << "name : " << t1.name << endl;
//     cout << "salary : " << t1.getsalary() << endl;
//     cout << "dept : " << t1.getdept();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class student {
//     public :
//         string name;
//         double* cgpaptr;
    
//     student (string name, double cgpa) {
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
    
//     student (student &obj) {
//         this->name = obj.name;
//         this->cgpaptr = obj.cgpaptr;
//     }
    
//     void getinfo () {
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << *cgpaptr << endl;
//     }
// };
      
// int main() {
//      student s1 ("darshan",8.5);
//      student s2 (s1);
     
//      s1.getinfo();
//      *(s2.cgpaptr) = 9.2;
//      s1.getinfo();
         
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// // Class representing a bank account
// class BankAccount {
// private:
//     string accountHolder;
//     int accountNumber;
//     double balance;
//     double interestRate; // Annual interest rate (in percentage)

// public:
//     // Constructor to initialize account with interest rate
//     BankAccount(string holder, int accNumber, double initialBalance, double rate) {
//         accountHolder = holder;
//         accountNumber = accNumber;
//         balance = initialBalance;
//         interestRate = rate; // Set the interest rate
//     }

//     // Method to deposit money into account
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Deposited: " << amount << endl;
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }

//     // Method to withdraw money from account
//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         } else if (amount <= 0) {
//             cout << "Invalid withdrawal amount!" << endl;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }

//     // Method to calculate interest on the balance (Simple Interest)
//     void applyInterest() {
//         double interest = (balance * interestRate) / 100;
//         balance += interest;  // Add interest to balance
//         cout << "Interest Applied: " << interest << endl;
//     }

//     // Method to display the current balance
//     void checkBalance() {
//         cout << "Current Balance: " << balance << endl;
//     }

//     // Method to display account details
//     void displayAccountDetails() {
//         cout << "Account Holder: " << accountHolder << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Current Balance: " << balance << endl;
//         cout << "Annual Interest Rate: " << interestRate << "%" << endl;
//     }
// };

// int main() {
//     string holderName;
//     int accNumber;
//     double initialBalance, interestRate;
    
//     // User input to create a bank account
//     cout << "Enter account holder name: ";
//     getline(cin, holderName);

//     cout << "Enter account number: ";
//     cin >> accNumber;

//     cout << "Enter initial deposit amount: ";
//     cin >> initialBalance;

//     cout << "Enter annual interest rate (in %): ";
//     cin >> interestRate;

//     // Create a BankAccount object for the user
//     BankAccount account1(holderName, accNumber, initialBalance, interestRate);

//     int choice;
//     double amount;

//     do {
//         cout << "\nBanking System Menu:\n";
//         cout << "1. Display Account Details\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Check Balance\n";
//         cout << "5. Apply Interest\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 account1.displayAccountDetails();
//                 break;
//             case 2:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 account1.deposit(amount);
//                 break;
//             case 3:
//                 cout << "Enter withdrawal amount: ";
//                 cin >> amount;
//                 account1.withdraw(amount);
//                 break;
//             case 4:
//                 account1.checkBalance();
//                 break;
//             case 5:
//                 account1.applyInterest();
//                 break;
//             case 6:
//                 cout << "Exiting the system. Goodbye!" << endl;
//                 break;
//             default:
//                 cout << "Invalid choice, please try again." << endl;
//         }
//     } while (choice != 6);

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class bankaccount {
//     private :
//         string accountholdername;
//         int accountnumber;
//         double balance;
//         double interestrate;

//         public :
//             bankaccount (string name, int number, double initialbalance, double rate) {
//                 this->accountholdername = name;
//                 this->accountnumber = number;
//                 this->balance = initialbalance;
//                 this->interestrate = rate;
//             }

//             void deposit (double amount) {
//                 if (amount > 0) {
//                     balance += amount;
//                     cout << "deposit : " << amount << endl;
//                 } else {
//                     cout << "invalid deposit amount" << endl;
//                 }
//             }

//             void withdraw (double amount) {
//                 if (amount > 0 && amount <= balance) {
//                     balance -= amount;
//                     cout << "withdraw :" << amount << endl;
//                 } else if (amount <= 0) {
//                     cout << "invalid withdraw amount" << endl;
//                 } else {
//                     cout << "insufficient balance" << endl;
//                 }
//             }

//             void applyinterest () {
//                 double interest = (balance * interestrate) / 100;
//                 balance += interest;
//                 cout << "interest :" << interest << endl;
//             }

//             void checkbalance () {
//                 cout << "current balance : " << balance << endl;
//             }

//             void displayaccountinfo () {
//                 cout << "account holder name : " << accountholdername << endl;
//                 cout << "account number : " << accountnumber << endl;
//                 cout << "current balance : " << balance << endl;
//                 cout << "annual interest rate : " << interestrate << "%" << endl;
//             }
// };

// main () {
//     string name;
//     int number;
//     double balance, rate;

//     cout << "eneter account holder name : ";
//     cin >> name;

//     cout << "eneter account number : ";
//     cin >> number;

//     cout << "eneter deposit amount : ";
//     cin >> balance;

//     cout << "eneter annual interest rate : ";
//     cin >> rate;

//     bankaccount account1(name, number, balance, rate);

//     int choice;
//     double amount;

//     do {
//         cout << "\nBanking System Menu:\n";
//         cout << "1. Display Account Details\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Check Balance\n";
//         cout << "5. Apply Interest\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 account1.displayaccountinfo();
//                 break;
//             case 2:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 account1.deposit(amount);
//                 break;
//             case 3:
//                 cout << "Enter withdrawal amount: ";
//                 cin >> amount;
//                 account1.withdraw(amount);
//                 break;
//             case 4:
//                 account1.checkbalance();
//                 break;
//             case 5:
//                 account1.applyinterest();
//                 break;
//             case 6:
//                 cout << "Exiting the system. Goodbye!" << endl;
//                 break;
//             default:
//                 cout << "Invalid choice, please try again." << endl;
//         }
//     } while (choice != 6);

// }