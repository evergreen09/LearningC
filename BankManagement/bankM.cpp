#include <iostream>
#include <stdlib.h>

using namespace std;

int m = 0;

void new_acc() {
    cout << "Creates a new customer account\n";
}

void view_list() {
    cout << "View customer's banking info\n";
}

void edit() {
    cout << "Change account info of a particular account\n";
}

void transact() {
    cout << "Change address or phone number of a particular account\n";
}

void erase() {
    cout << "Deletes a customer account\n";
}

void acc_detail() {
    cout << "Shows an account information\n";
}

void menu() {

    int option;
    

    cout << "Welcome to BullShit Bank~!\n" << "Please select one of the menu below to proceed.\n";
    cout << "1) Create an account.\n";
    cout << "2) Account Info\n";
    cout << "3) Account Info Update\n";
    cout << "4) Wire Transfer\n";
    cout << "5) Account Deletion\n";
    cout << "6) Bank Account inquiry\n";
    cout << "7) EXIT\n";

    cin >> option;


    if (option > 0 && option < 8) {
        switch(option) {
        case 1:
            new_acc();
            break;
        case 2:
            view_list();
            break;
        case 3:
            edit();
            break;
        case 4:
            transact();
            break;
        case 5:
            erase();
            break;
        case 6:
            acc_detail();
            break;
        case 7:
            abort();
        }
    } else if (m < 1) {
        m++;
        cout << "Please Enter a Valid Option or Program will terminate!\n";
        menu();
        cin >> option;
    } else {
        abort();
    }
}



int main() {

    menu();

    return 0;
}