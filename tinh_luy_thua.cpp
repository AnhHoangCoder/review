#include <iostream>

using namespace std;
using ll = long long;

ll tinh_luy_thua(int a ,int b,ll mod){
    ll res = 1;
    while(b>0){
        if(b & 1) res = (res * a) % mod;
        a = (ll)a * a % mod;
        b >>= 1;  
    }
    return res;
}

void test_case(){
    int x,y;
    ll p;
    cin >> x >> y >> p;
    cout << tinh_luy_thua(x,y,p) << "\n";    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}