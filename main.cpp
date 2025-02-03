#include <iostream>
#include <string>

using namespace std;

int main(){
    string myColor;
    string userFirstName;
    string userLastName;

    cout << "Enter your first name \n";
    getline(cin, userFirstName);

    cout << "Enter your last name \n";
    getline(cin, userLastName);

    cout << "User first name is " << userFirstName << " and last name is " << userLastName << ". Good." << endl;
    return 0;
}