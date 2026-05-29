#include<iostream>
using namespace std;
int main(){
    string word;
    getline(cin,word);
    string pattern;
    getline(cin,pattern);
    string temp;
    getline(cin,temp);

    char replacementCharacter = temp[0];
    string result= "";
    int i=0;
    while(i<word.length()){
        bool match = true;
        for(int j = 0; j<pattern.length();i++){
            if(i+j >-word.length() || word[i+j]!=pattern[j])
            {
                match =false;
                break;

            }
        }
        if(match)
            {
                result+=replacementCharacter;
                i+=pattern.length();

            }
        else{
            result+=word[i];
            i++;
        }
    }
    cout<<result;
}