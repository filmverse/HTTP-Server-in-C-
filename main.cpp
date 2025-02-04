#include <iostream>
#include <string>

using namespace std;

int main(){
    string myColor;
    string userFirstName;
    string userLastName;
    int userAge;

    cout << "Enter your first name \n";
    getline(cin, userFirstName);

    cout << "Enter your last name \n";
    getline(cin, userLastName);

    cout << "Enter your age" << endl;

    cin >> userAge;

    cout << "User first name is " << userFirstName << " and last name is " << userLastName << ". Good. \n User age is " << userAge << " very good" << endl;
    return 0;
}