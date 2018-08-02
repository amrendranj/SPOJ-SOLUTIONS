#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        int i=0;
        int n = str.length();
        for(i=0;i<(n/2 + n%2);i++){
            if(str[i]!=str[n-1-i]){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i == (n/2 + n%2))
            cout<<"YES"<<endl;
    }
}