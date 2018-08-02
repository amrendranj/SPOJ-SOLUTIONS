#include<bits/stdc++.h>
using namespace std;
int reverse(int a){
    int result = 0;
    while(a>0){
        result *= 10;
        result += a%10;
        a /= 10;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    int a,b;
    while(t--){
        cin >> a >> b;
        std::cout << reverse(reverse(a) + reverse(b)) << '\n';
    }
}