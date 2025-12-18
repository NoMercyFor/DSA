#include <iostream>
using namespace std;
int power(int a,int b){
    if(b == 0) return 1;
    return a * power(a,b-1);
}
int powerTest(int a, int b){
    int prod = 1;
    for(int i = 1; i <= b; i++){
        prod *= a;
    }
    return prod;
}
int powerTest2(int a, int b){
    int prod = 1;
    while(b!=0){
        prod *= a;
        b--;
    }
    return prod;
}
int main(){
    // int n;
    // cin >> n;
    // int m = n;
    // int count = 0;
    // int lastNum = n % 10;
    // while(m != 0){
    //     m /= 10;
    //     count++;
    // } 
    // int firstNum = n / power(10,count - 1);
    // int middleNum = (n  % power(10,count - 1 )) / 10;    
    
    
    
    
    
    cout << powerTest2(4,3);
}
