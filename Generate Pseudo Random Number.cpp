#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 7; //Initial value
    int m = 16; //equal to length of random numbers
    int a = 5; //a-1 multiple of m
    int c = 9; //between 0 and m
    
    for(int i = 0; i<n; i++){
        x = (a*x+c)%m;
        cout<<x<<" ";
    }
    return 0;
}
