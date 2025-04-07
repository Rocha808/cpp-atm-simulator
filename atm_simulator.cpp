#include <iostream>
using namespace std;

// Function Prototypes
double checkBalance(double balance);
void deposit(double& balance, double amount);
void withdraw(double& balance, double amount);

int main() 
{
    // variables used
    int choice;
    double balance = 0.0, amount;
    bool exit = false;

    // Loop displays Menu with choices
    do {

        cout << " Welcome to the ATM" << endl;
        cout << "\n1. Check Balance \n2. Deposit Money \n3. Withdraw Money \n4. EXIT \n" << endl;

        cout << "Enter your choice: " << endl;
        cin  >> choice;
        cout << endl;
        
        // Input choice
        switch (choice)
        {

        // Check balance
        case 1:
            // call to check balance function
            cout << "Your current balance is: $" << checkBalance(balance) << endl;
            break;

        // Deposit Money
        case 2:
            cout << "Enter an amount to deposit: $";
            cin >> amount;
            cout << endl;

            // call to deposit money function
            deposit(balance, amount);
            break;

        // Withdraw Money
        case 3:
            cout << "Enter an amount to withdraw: $";
            cin >> amount;
            cout << endl;

            // call to withdraw money function
            withdraw(balance, amount);
            break;

        // Exit ATM
        case 4:
            cout << "Exiting the ATM. Thank you for using our service!" << endl;
            exit = true;
            break;

        // Menu input validation
        default:
            cout << "Invalid Option! Please choose a valid option." << endl;
        }
    
    // Do...While loop condition
    } while (exit == false);

return 0;
}

// Check balance function
double checkBalance (double balance) 
{
    return balance;
}

// deposit money function
void deposit(double& balance, double amount)
{
    if (amount > 0) {
        balance = balance + amount;
        cout << "Deposit Successful!" << endl;
    } else {
        cout << "Invalid Amount! Deposit must be positive." << endl;
    }
}


// withdraw money function
void withdraw (double& balance, double amount)
{
    if (amount <= 0) {
        cout << "Invalid Amount! Withdraw must be positive." << endl;
    } else if (amount > balance) {
        cout << "Insufficient Funds! Withdrawal Failed." << endl;
    } else {
        balance = balance - amount;
        cout << "Withdrawal Successful!" << endl;
    }
}