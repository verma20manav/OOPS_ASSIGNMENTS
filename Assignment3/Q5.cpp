/*5. Create a class BankAccount with: 
    Private data members:
         accountNo
         balance  
    Static data member: 
         totalAccounts
    Implement:
         A constructor to initialize the account details.  
         A friend function to display the private account details.  
         A static member function to display the total number of accounts created. 
Create at least three objects and demonstrate both the friend function and static member function. 
    */
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    double balance;
    static int totalAccounts;
public:
    BankAccount(int accNo, double bal)
    {
        accountNo = accNo;
        balance = bal;
        totalAccounts++;
    }
    friend void displayAccountDetails(BankAccount &ba)
    {
        cout << "Account Number: " << ba.accountNo << endl;
        cout << "Balance: " << ba.balance << endl;
    }
    static void displayTotalAccounts()
    {
        cout << "Total number of accounts created: " << totalAccounts << endl;
    }
};
int BankAccount::totalAccounts = 0;

int main() {
    BankAccount ba1(1001, 5000.0);
    BankAccount ba2(1002, 7500.0);
    BankAccount ba3(1003, 10000.0);

    displayAccountDetails(ba1);
    displayAccountDetails(ba2);
    displayAccountDetails(ba3);

    BankAccount::displayTotalAccounts();

    return 0;
}