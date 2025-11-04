#include <iostream>
#include <fstream>
#include <vector>

using ll = long long;

std::vector<ll> fibo;

ll so_fibo(int n){
    if(n < 2) return 1;
    if(fibo[n] != 0) return fibo[n];
    ll result = so_fibo(n-1) + so_fibo(n-2);
    fibo[n] = result;
    return fibo[n];
}

void test_case(){
    int n;
    std::cin >> n;
    fibo.assign(n+1,0);
    std::cout << so_fibo(n) << "\n";
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    freopen("input.in" , "r" , stdin);
    freopen("output.in" , "w" , stdout);

    int t;
    std::cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}