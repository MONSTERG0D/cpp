#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the number" << endl;
    for (int i=0;i<n;i++){
    cin >> arr[i];
    }
    int start =0;
    int end=n-1;
    while(start < end){
    swap(arr[start],arr[end]);
        start++;
        end--;
    }
     cout << "DISPLAYING ARRAY " << endl;
    
    for (int i=0;i<n;i++){
    cout << arr[i] << endl;
    }
    return 0;

}