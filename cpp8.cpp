#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
    
    fact = fact * i;
    }
return fact;
}

int main () {
    int n = 13;
    int r = 3;
    int nr = n-r;
    int ncr = factorial(n)/(factorial(r)*factorial(nr));
    cout << ncr << endl;
    return 0;
}