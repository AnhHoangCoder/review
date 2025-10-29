#include <iostream>

bool so_nt(int n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

void test_case(){
    int n;
    std::cin >> n;
    if(so_nt(n)){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        test_case();
    }    
    return 0;
}