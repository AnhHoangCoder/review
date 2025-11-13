//số hoàn hảo là (2*p-1) * (2*(p-1);
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

bool so_nt(ll n){
    if(n<2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5;i*i<=n;i+=6){
        if(n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

vector<ll> tao_pernum(ll n){
    vector<ll> perfect_nums;
    for(int p=2; ;p++){
        ll num_right = (1LL << p) - 1;
        ll num_perfect = (1LL << (p-1)) * num_right;
        if(num_perfect > n) break;
        if(so_nt(num_right)){
            perfect_nums.push_back(num_perfect);
        }
    }
    return perfect_nums;
}

bool check_perfectNum(ll n){
    vector<ll> prefect_num = tao_pernum(1e18);
    for(ll p : prefect_num){
        if(n==p){
            return true;
        }
    }
    return false;
}

void test_case(){
    ll n;
    cin >> n;
    if(check_perfectNum(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}