#include<bits/stdc++.h>
using namespace std;
int A[1000005];
int main(){
    int n,k,s;
   
    cin >> n >> k >> s;
    int x = k*s;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A,A+n);
    int sum =0;
    int count = 0;
    for(int i=n-1;i>=0;i--){
        sum += A[i];
        count++;
        if(sum>= x){
            break;
        }
    }
    cout<<count<<endl;
}