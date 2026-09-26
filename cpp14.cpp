#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> data= {1,12,34,532,14,111,};
    cout << "size " << data.size() << endl;
    data.push_back(25);
    for ( int val : data){
    cout << val << endl;
    }
    data.pop_back();
    for ( int val : data){
    cout << val << endl;
    }
    cout << data.front() << endl;
    cout << data.at(2);
    return 0;
}