// #include <iostream>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for(int i = 0; i < str.length(); i++) {

//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
//            str[i]=='o' || str[i]=='u' ||
//            str[i]=='A' || str[i]=='E' || str[i]=='I' ||
//            str[i]=='O' || str[i]=='U') {

//             str.erase(i, 1);
//             i--;
//         }
//     }

//     cout << "After removing vowels: " << str;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    string vowels = "aeiouAEIOU";
    string result="";
    for(int i=0;i<text.length();i++){
        if(vowels.find(text[i]==string::npos)){
            result+=text[i];
        }
    }
    cout<<result;
} 