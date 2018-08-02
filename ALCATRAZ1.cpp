#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string str;
    while(t--){
        cin>>str;
        int result = 0;
        for(int i=0;i<str.length();i++){
            result += (str[i]-'0');
        }
        cout<<result<<endl;
    }
}