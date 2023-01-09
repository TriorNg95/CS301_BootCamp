#include <iostream>
using namespace std;

int main() {

    cout << "Enter your information \n -----------------------------" << endl;
    string FirstName, LastName;
    cout << "First and Last Name:";
    cin >> FirstName >> LastName;
    cin.ignore();
    string Hobbies;
    cout <<"Hobbies: ";
    getline(cin, Hobbies);

    string PNumber;
    cout <<"Phone Number: " << endl;
    getline(cin, PNumber);

    cout << "Here is your information \n ------------------------" << endl;
    cout << "First Name: " << FirstName << endl;
    cout << "Last Name: " << LastName << endl;
    cout << "Your hobby: " << Hobbies << endl;
    cout << "Your phone number: " << PNumber << endl;

}