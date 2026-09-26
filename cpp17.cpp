#include<iostream>
using namespace std;

int main (){
    int n;
    int idx;
    int maxi = INT_MIN;
    int curSum = 0;
    cout << "enter the size of the array. : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "enter the element : ";
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        curSum += arr[i];
        maxi = max(curSum, maxi);
        
        if (curSum <0){
            curSum = 0;
        }
        
    }
    cout << "maximimum sum of sub array : " << maxi << endl;
    return 0;
}