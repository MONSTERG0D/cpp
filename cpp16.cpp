#include<iostream>
using namespace std;

int main (){
    int maxi=INT_MIN;
    int curSum =0;
    int n;
    cout << "enter the size of the array : " ;
    cin >> n ;
    int arr[n];
    for (int l=0;l<n;l++){
        cout << "Enter the element : ";
        cin >> arr[l];

    }

    for(int i=0;i<n;i++){
         curSum =0;
        for (int j=i;j<n;j++){
            curSum += arr[j];
            maxi = max(curSum,maxi);

        }
    }
    cout << maxi << endl;
    return 0;
}