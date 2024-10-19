#include <iostream>
using namespace std;

int main() {
    int n = 56;
    cout<<"Prime numbers are: 2 ";
    for(int i = 3; i <=n; i++){
        bool isPrime = true;
        for(int num = 2; num < i; num++){
            if(i%num == 0){
                isPrime = false;
                break;}
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}
