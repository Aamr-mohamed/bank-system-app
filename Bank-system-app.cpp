#include <iostream>
using namespace std;
string username, address, gender, birth_yr;
int phone_number, password, ipt_num;
int check_username, check_password;
double account_bal, new_bal, draw_bal;
void wlc_page();
void registration();
// void login();
void show_data();
int main()
{

    wlc_page();
}
void wlc_page()
{

    cout << "welcome to the bank \n";
    cout << "Enter 1 to login \n"
            "Enter 2 to register \n"
            "Enter 0 to exit the program\n";
    cin >> ipt_num;
    if (ipt_num == 1)
    {
        // login();
        cout << "m4 4a8ala y5oia e5tar 7aga tanya\n"; // login function doesnt work yet :'(
        wlc_page();
    }
    else if (ipt_num == 2)
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

    cout << "please enter ur name \n"; // if username is not a string it exits (same for other functions)
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
    cin >> account_bal;
    cout << "To exit enter 0\n"
            "To show ur data enter 1\n";
    cin >> ipt_num;
    if (ipt_num == 0)
    {
        cout << "GoodBye";
    }
    else if (ipt_num == 1)
    {
        show_data();
    }
}
/*void login()
{

    cout << "please enter ur Username";
    cin >> check_username;
    cout << "please enter ur Password";
    cin >> check_password;
    if (check_username == username && check_password == password)
    {
        cout << "welcome back";
        show_data();
    }
    else
        cout << "wrong password or username";
    cout << "To exit enter 0";
    cin >> ipt_num;
    if (ipt_num == 0)
    {
        cout << "Goodbye";
    }
    else
    {
        login();
    }
}*/
void show_data()
{

    cout << "enter the number 1 to show ur account data \n";
    cout << "enter the number 2 to add new balance\n";
    cout << "enter the number 3 to withdraw from ur balance \n";
    cout << "enter the number 0 to logout and exit";
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
            cout << "Goodbye";
        }
        else if (ipt_num == 1)
        {
            show_data();
        }
        else
        {
            cout << "please enter a valid number";
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
