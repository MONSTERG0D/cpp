#include<iostream>
using namespace std;

int main (){
    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout << " ";
        }
                    cout << "*";
        if ( i != 0){
        for(int k=0;k<2*i-1;k++){
            cout << " ";
            
        }
        cout << "*" ;
    }
    
    cout << endl;
}
for(int p = 0;p<n-1;p++){
for (int m = 0;m<p+1;m++){
    cout << " ";

}
cout << "*";
for (int o = 1;o<=2*(n-p)-5;o++){
    cout << " ";

}
if (p < n-2){
cout << "*" ;

}
cout << endl;
}



    return 0;   
}