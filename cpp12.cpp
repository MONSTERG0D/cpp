#include<iostream>
using namespace std;
int linSearch (int arr[],int& size,int& target){
    for (int i =0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    int target;
    cout << "enter the size for your array" << endl;
    cin >> size;
    int arr[size];
    for(int i =0;i<size;i++){
        cout << "Enter the number to put on index" << i << endl ;
    cin >> arr[i];
    }
    cout << "enter the number of which you want to find index of " << endl ;
    cin >> target;
    int linSrch = linSearch (arr ,size,target);
    cout << target << " is on index " << linSrch << endl;

    return 0;
}