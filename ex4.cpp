#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
bool isSphenic(int n){
    int count = 0;
    int temp = n;
    for(int i = 2; i*i < n; i++){
        if(isPrime(i)){
            if(temp % i == 0){
                count ++;
                temp /= i;
                if(temp%i == 0) return false;
            }
        }
        if(count == 3) break;
    }
    if(temp > 1) count++;
    return count == 3;
}

bool isSphenic1(int n){
    int count = 0;
    int temp = n;
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            if(temp % i == 0){
                count ++;
                temp /= i;
                if(temp%i == 0) return false;
            }
        }
        if(count == 3) break;
    }
    return count == 3;
}

int main(){
    cout << isSphenic(66);
}