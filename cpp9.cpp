#include<iostream>
using namespace std;
int binDec(int x){
    int pow =1;
    int ans = 0;
    while(x > 0){
        int rem = x%2;
        x /= 2;
        ans = ans + rem*pow;
        pow *= 10;
    }
    return (ans);
}
int main (){
    int num ;
    cout << " Enter the number you want to convert into binary : ";
    
    cin >> num;
    cout << binDec (num) << endl;

    return 0;
}