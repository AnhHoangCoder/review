#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int random_int(int min , int max){
    return min + rand() % (max - min + 1);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    freopen("input.in" , "r" , stdin);
    freopen("output.in" , "w" , stdout);

    srand(time(0));
    int t = 3;
    int sum = 0;
    while(t--){
        int min , max;
        std::cin >> min >> max;
        sum += random_int(min,max);
    }
    std::cout << sum << "\n";
}