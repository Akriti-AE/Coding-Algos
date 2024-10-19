#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int q = n;
    cout<<"Factors are:";
    while (q%2 ==0){
        q = q/2;
        cout<<2<<" ";
    }
    for(int i = 3; i <=n; i+=2){
        while(q%i==0){
            q = q/i;
            cout<<i<<" ";
        }
    }
    return 0;
}
