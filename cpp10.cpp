#include <iostream>
using namespace std;

int main (){
    int num = 64;
    int pow =1;
    int ans=2;
    while (ans <=num){
        ans = ans*2;
        pow++;
        

       
       if (ans == num){
       cout << num << "is power of 2" << endl;
       cout << "power" << pow <<endl;
       return 0;
       

       }else {
        cout << num << "is not power of 2" << endl;
       }
    

}
    return 0;
    }
