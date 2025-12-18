#include <iostream>
using namespace std;
void findMax(int* max, int a){
    if(*max < a) *max = a;
}
int main(){
    int* max;
    *max = 10;
    findMax(max, 5);
    cout << *max;
}