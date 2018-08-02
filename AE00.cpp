#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int result = 0;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        result+= ((n/i) - i + 1);
    }
    cout<<result<<endl;
}