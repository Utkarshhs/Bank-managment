#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;

void showbalance(double balance)
{
    cout << "your balance is " << std::setprecision(2) << std::fixed << balance << " $\n";
}
double deposit()
{
    double ammount;
    cout << "enter the ammout you want to deposit\n";
    cin >> ammount;
    if (ammount > 0)
    {
        cout << "your deposit of ammount " << ammount << " was successful\n";
    }
    else
    {

        cout << "your deposit was not successful\n";
    }

    return ammount;
}
double withdraw(double balance)
{
    double ammount = 0;
    cout << "enter the ammout you want to withdraw\n";
    cin >> ammount;
    if (ammount > balance)
    {
        cout << "your transaction of ammount " << ammount << " was successful\n";
    }
    else if (ammount < 0)
    {

        cout << "your transaction was not successful\n";
    }
    else
    {

        return ammount;
    }
}

int main()
{

    double balance = 199;
    int choice;

    do
    {

        cout << " ENTER YOUR CHOICE \n";
        cout << "1: SHOW BALANCE\n";
        cout << "2: DEPOSIT MONEY\n";
        cout << "3: CASH WITHDRAW\n";
        cout << "4: BACK\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showbalance(balance);

            break;
        case 2:
            balance += deposit();
            showbalance(balance);

            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);

            break;
        case 4:
            cout << "please visit us again\n";

            break;

        default:
            cout << "invalid output\n";
            break;
        }
    } while (choice != 4);
}