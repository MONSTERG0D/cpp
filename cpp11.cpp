#include<iostream>
using namespace std;

int main (){
    int n[5];
    int num = sizeof(n)/sizeof(int);
    for (int j =0;j < num;j++){
        cout << "Enter the number" << endl;
        cin >> n[j];
    }
    int largest =INT_MIN;
    int smallest = INT_MAX;
    int larpos;
    int smapos;

    
    int i ;
    for (i=0;i<num;i++){
         if(largest < n[i]){
            largest = n[i];
            larpos = i;
         }
         if (smallest > n[i]){
            smallest = n[i];
            smapos = i;
         }
         
        
        
        

    }
    cout << "smallest " << smallest << endl;
    cout << "smallest index" << smapos << endl ;

    
        
    cout << "largest"  << largest << endl;
    cout << "largest index " << larpos << endl;

     return 0;
}