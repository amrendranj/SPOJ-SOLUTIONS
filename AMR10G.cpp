#include<bits/stdc++.h>
using namespace std;
int A[1000000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A,A+n);
        int result = 1000000000;
        for(int i=k-1;i<n;i++){
            result = min(result, (A[i]-A[i-k+1]));
        }
        cout<<result<<endl;
    }
}
