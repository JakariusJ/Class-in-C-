#include <iostream>
using namespace std;

class Bank
{
private:
    double bal;

public:
    Bank()
    {
        bal = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            bal += amount;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= bal)
        {
            bal -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displaybal()
    {
        cout << "Current Balance: " << bal << endl;
    }
};

int main()
{
    Bank acc1;

    acc1.deposit(500);
    acc1.displaybal();

    acc1.withdraw(200);
    acc1.displaybal();

    acc1.withdraw(1000);

    return 0;
}