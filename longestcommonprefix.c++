#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cout<<"enter size of strting";
    cin >> n;

    vector<string> str(n);

    for(int i=0;i<n;i++){
        cin >> str[i];
    }

    sort(str.begin(),str.end());

    string first=str[0];
    string last=str[n-1];

    string ans=" ";

    for(int i=0;i<first.length();i++){
        if(first[i]==last[i]){
        ans=ans+first[i];
    } 
    else{
        break;
    }
}
    cout<<"longest"<<ans;
}