#include <iostream>
using namespace std;
string username, address, gender, birth_yr, check_username,
    password, check_password, phone_number;
int ipt_num;
double account_bal, new_bal, draw_bal;
void wlc_page();
void registration();
void login();
void show_data();
int main()
{

    wlc_page();
}
void wlc_page()
{

    cout << "welcome to the bank \n";
    cout << "Enter 1 to register \n"
            "Enter 0 to exit the program\n";
    cin >> ipt_num;
    if (ipt_num == 1)
    {
        registration();
    }
    else if (ipt_num == 0)
    {
        cout << "Goodbye";
    }
    else
    {
        cout << "please enter a right number \n";
        wlc_page();
    }
}
void registration()
{

    cout << "please enter ur name \n";
    cin >> username;
    cout << "please enter ur phone number \n";
    cin >> phone_number;
    cout << "please enter ur address \n";
    cin >> address;
    cout << "please enter ur gender \n";
    cin >> gender;
    cout << "please enter ur password \n";
    cin >> password;
    cout << "please enter ur birth year \n";
    cin >> birth_yr;
    cout << "please enter ur account balance \n";
    cin >> account_bal; // if the account balance(and any new balance and the withdraw too) is not a number or double it enters an infinity loop in all the app
    cout << "To exit enter 0\n"
            "To login enter 1\n";
    cin >> ipt_num;
    if (ipt_num == 0)
    {
        cout << "GoodBye";
    }
    else if (ipt_num == 1)
    {
        login();
    }
}
void login()
{

    cout << "please enter ur Username\n";
    cin >> check_username;
    cout << "please enter ur Password\n";
    cin >> check_password;
    if (check_username == username && check_password == password)
    {
        cout << "welcome back\n";
        show_data();
    }
    else if (check_username != username || check_password != password)
    {
        cout << "wrong password or username\n"
                "To exit enter 0\n"
                "To login enter 1\n";
        cin >> ipt_num;
        if (ipt_num == 0)
        {
            cout << "Goodbye\n";
        }
        else if (ipt_num == 1)
        {
            login();
        }
    }
}
void show_data()
{

    cout << "enter the number 1 to show ur account data \n";
    cout << "enter the number 2 to add new balance\n";
    cout << "enter the number 3 to withdraw from ur balance \n";
    cout << "enter the number 0 to logout and exit\n";
    cin >> ipt_num;
    if (ipt_num == 1)
    {
        cout << "Your Name:" << username << endl;
        cout << "Your Phone number:" << phone_number << endl;
        cout << "Your address:" << address << endl;
        cout << "Your Gender:" << gender << endl;
        cout << "Your Birth year:" << birth_yr << endl;
        cout << "Enter 0 to exit\n"
                "Enter 1 to go back\n";
        cin >> ipt_num;
        if (ipt_num == 0)
        {
            cout << "Goodbye\n";
        }
        else if (ipt_num == 1)
        {
            show_data();
        }
        else
        {
            cout << "please enter a valid number\n";
            show_data();
        }
    }
    else if (ipt_num == 2)
    {
        cout << "please enter ur money\n";
        cin >> new_bal;
        account_bal += new_bal;
        cout << "Your new account balance:" << account_bal << endl;
        show_data();
    }
    else if (ipt_num == 3)
    {
        cout << "please enter the amount u want to withdraw\n";
        cin >> draw_bal;
        account_bal -= draw_bal;
        cout << "Your new account balance:" << account_bal << endl;
        show_data();
    }
    else if (ipt_num == 0)
    {
        cout << "Goodbye\n";
    }
    else
    {
        cout << "please enter a valid number\n";
        show_data();
    }
}
