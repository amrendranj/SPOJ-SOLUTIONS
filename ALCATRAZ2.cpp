#include<bits/stdc++.h>
using namespace std;

pair<bool,int> valid(int A[8],bool X[8], vector<pair<int,int> > v){
    int sum=0;
    for(int i=0;i<8;i++){
        if(X[i]){
            sum+=A[i];
        }
    }
    for(int i=0;i<v.size();i++){
        if(X[v[i].first] && X[v[i].second])
            return make_pair(false,sum);
    }
    return make_pair(true,sum);
}

int main(){
    int A[8];
    bool X[512][8];
    for(int i=0;i<8;i++)
        cin>>A[i];
    vector<pair<int,int> > v;
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        v.push_back(make_pair(a-1,b-1));
    }

    int result = 0;
    for(int i=0;i<512;i++){
        for(int j=1;j<=8;j++){
            if(i & (1<<(j-1)))
                X[i][j-1]=true;
            else
                X[i][j-1]=false;
        }
    }
    for(int i=0;i<512;i++){
        pair<bool,int> val = valid(A, X[i], v);
        if(val.first ){
            result = max(val.second, result);
        }
    }
    cout<<result<<endl;
}