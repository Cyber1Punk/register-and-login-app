//Load all required header files
#include <iostream>
#include <string>
#include "header.h"
using namespace std;

//Global variables
int spaces = 0;

//Function that checks for spaces for a specified string
void checkForSpaces(string userUsername) {
    int length = userUsername.length();

    for (int i = 0; i < length; i++) {
        int c = userUsername[i];
        if (isspace(c))
            spaces++;
    }
}

int main()
{
    while (true) {
        //Makes user input command (either register or login)
        string command;
        cout << "Command: ";
        cin >> command;

        //What to do if command is register:
        if (command == "register") {
            //Makes user input a username
            string inputUsername;
            cout << "Username: ";
            cin.ignore();
            getline(cin, inputUsername);

            //Calls out checkForSpaces function and checks for any spaces within inputed username
            checkForSpaces(inputUsername);

            //If there are spaces:
            if (spaces > 0) {
                cout << "Usernames cannot contain spaces" << endl;
            }
            //If there aren't spaces:
            else {
                //Calls registerUser function
                registerUser(inputUsername);
            }
            spaces = 0;
        }
        //What to do if command is login:
        else if (command == "login") {
            //Makes user input a username
            string inputUsername;
            cout << "Username: ";
            cin >> inputUsername;
            //Calls loginUser function
            loginUser(inputUsername);
        }
    }
    return 0;
}
