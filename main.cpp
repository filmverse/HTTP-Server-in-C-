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

    cout << "Also enter your favorite color" << std::endl;
    getline(cin, myColor);
    
    cout << "Enter your age" << endl;
    cin >> userAge;

    // Whenever using getline after cin always use it like this "getline(cin >> ws, name);" because "getline()" function does not ignore leading white space characters.

    cout << "User first name is " << userFirstName << " and last name is " << userLastName << ". Good. \nUser age is " << userAge << " very good. \nUser favourite color is " << myColor << ". Nice, good job." << endl;
    return 0;
}