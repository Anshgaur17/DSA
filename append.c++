#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string fullName;
    string id;

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter ID: "; 
    getline(cin, id);

    // Convert lowercase to uppercase
    for(int i = 0; i < fullName.length(); i++) {
        if(fullName[i] >= 'a' && fullName[i] <= 'z') {
            fullName[i] = fullName[i] - 32;
        }
    }

    stringstream ss(fullName);

    string word;
    string firstname = "", lastname = "";
    bool firstWordFound = false;

    // Extract words
    while(ss >> word) {
        if(!firstWordFound) {
            firstname = word;
            firstWordFound = true;
        }
        lastname = word;
    }

    string username = firstname + "_" + lastname + id;

    cout << username;

    return 0;
}