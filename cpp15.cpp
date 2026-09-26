#include<iostream>
using namespace std;

int main (){
    int n;
    
    cout << "Enter the size of the array  : " ;
    cin >> n;
    int arr[n];
    for (int i =0; i<n;i++){
        cout << "the array element : ";
        cin >> arr[i];
    }
    for(int j=0;j<n;j++){
        
        for (int k=j;k<n;k++){
            cout << "subarray : (";
            for(int l=j;l<=k;l++){
            cout << arr[l] << "," ;
            }
            cout << ") ";
        }
        cout << endl;
    }
    return 0;
}