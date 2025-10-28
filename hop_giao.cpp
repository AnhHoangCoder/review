#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream in("input.in");
ofstream out("output.in");

void nhap(vector<int> &a , int n){
    for(int i=0;i<n;i++){
        in >> a[i];
    }
}

void test_case(){
    int n,m;
    in >> n >> m;
    vector<int> a(n) , b(m);
    nhap(a,n);
    nhap(b,m);
    int up = 0 , down = 0;
    vector<int> uni , inter;
    while(up < n && down < m){
        if(a[up] == b[down]){
            uni.push_back(a[up]);
            inter.push_back(a[up]);
            up++;down++;
        }
        else if(a[up] < b[down]){
            uni.push_back(a[up]);
            up++;
        }
        else{
            uni.push_back(b[down]);
            down++;
        }
    }
    while(up < n) uni.push_back(a[up++]);
    while(down < m) uni.push_back(b[down++]);
    for(auto x : uni){
        out << x << " ";
    }
    out << endl;
    for(auto x : inter){
        out << x << " ";
    }
    out << endl;
}

int main(){
    int t;
    in >> t;
    while(t--){
        test_case();
    }    
    return 0;
}