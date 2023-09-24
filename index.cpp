#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int calco()
{
    int Number1;
    int Number2;

    char op;

    cout << "Enter Your First Number ";
    cin >> Number1;
    cout << "Enter Your second Number ";
    cin >> Number2;

    cout << "Which opetator do you need  (+,/,-,*)" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum of " << Number1 << " and " << Number2 << " = " << Number1 + Number2;
        break;
    case '/':
        cout << "Divison" << Number1 << " and " << Number2 << " = " << Number1 / Number2;
        break;
    case '-':
        cout << "subtraction of " << Number1 << " and " << Number2 << " = " << Number1 - Number2;
        break;
    case '*':
        cout << "Product of " << Number1 << " and " << Number2 << " = " << Number1 * Number2;
        break;

    default:
        cout << "You did not Choose any operator";
        break;
    }
};

int main()

{

string myText = "\033[33m"
"               .__                  .__            __                  \n"
                    "  ____  _____   |  |    ____   __ __ |  |  _____  _/  |_  ____ _______  \n"
                    "_/ ___\\ \\__  \\  |  |  _/ ___\\ |  |  \\|  |  \\__  \\ \\   __\\/  _ \\\\ _  __ \\\n"
                    "\\  \\___  / __ \\_|  |__\\  \\___ |  |  /|  |__ / __ \\_|  | (  <_> )|  | \\/ \n"
                    " \\___  >(____  /|____/ \\___  >|____/ |____/(____  /|__|  \\____/ |__|    \n"
                    "     \\/      \\/            \\/                   \\/                      ";

    cout << myText << endl;
    char ans;
  Sleep(2000);
    do
    {
        calco();
        cout << endl;
        cout << "Do you want to try again (y,n) ";
        cin >> ans;

    } while (ans == 'y');

    if (ans == 'n')
    {
        cout << "\033[31mThanks For using calculater!\033[0m";
    }

    return 0;


}