#include <iostream>
using namespace std;

int main (){
    int num ;
    cout << "Enter the number" << endl; 
    cin >> num;
    int pow =0;
    int base ;
    
     cout << "Enter the power to check for" << num << endl;
      cin >> base;
    int temp = 1;
    if (base == 0 ){
        cout << "1" <<endl;
        return 0;
    }
    if (base == 1 ){
        cout << num << endl;
        return 0;
    }
    if ( base <= 1){
        cout << "base must be at least 2";
        return 0;
    }

   
    while (base <=num){
        base = base*temp;
        temp ++;
        pow++;
        

       
       if (base == num){
       cout << num << "is power of " << base << endl;
       cout << "power" << pow <<endl;
       return 0;
       

       }else {
        cout << num << "is not power of " << base << endl;
       }
    

}
    return 0;
    }
