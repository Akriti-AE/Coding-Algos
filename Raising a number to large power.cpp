#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int n;
    int x;
    long int p = 1;
    cout<<"Required enter number and power";
    cin>>x>>n;
    int d[n];
    while(n != 0){
        if(n%2 == 0){
            d[i] = 0;
        }
        else{
            d[i] = 1;
        }
        i++;
        n = n/2;
    }
    for(int j = i-1; j>=0; j--){
        if(d[j] ==0){
            p = p*p;
        }
        else{
            p = p*p*x;
        }
        //cout<<p<<" ";
    }
    cout<<p;
    return 0;
}
