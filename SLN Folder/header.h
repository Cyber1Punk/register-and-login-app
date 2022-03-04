#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> users;

void registerUser(string username) {
	if (find(users.begin(), users.end(), username) != users.end()) {
		cout << "Username already in use" << endl;
	}
	else {
		users.push_back(username);
		cout << "Account created" << endl;
	}
}

void loginUser(string username) {
	if (find(users.begin(), users.end(), username) != users.end()) {
		cout << "Signed in as " << username << endl;
	}
	else {
		cout << "Username not found" << endl;
	}
}
