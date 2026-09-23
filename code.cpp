// // // #include <iostream>
// // // using namespace std;

// // // int main(){
// // //     cout << "****\n***\n**\n*" << endl;
// // //     int age ;
// // //     cin >> age;
// // //     cout << "Your age is: " << age << endl;
// // //     int a;
// // //     int b;
// // //     cin >>  a >> b;
// // //     cout << "The sum of a and b is: " << a + b << endl;


// // //     //write a program to get a number from the user and print weather it is negative, positive or zero
// // //     int num ;
// // //     cin >> num;
// // //     switch(num > 0){
// // //         case true: cout << "The number is positive" << endl;
// // //         break;
// // //         case false:            switch(num < 0){
// // //                 case true: cout << "The number is negative" << endl;
// // //                 break;
// // //                 case false: cout << "The number is zero" << endl;
// // //                 break; 
        
// // //     }}

// // //     return 0;
// // // }
// // #include <iostream> 
// // using namespace std;

// // int main () {

// //      int n = 9;
// //     bool isPrime = true;
// //     for (int i = 2; i < n ; i++) 
// //     {
// //         if (n % i == 0)
// //         {
// //             isPrime = false;
// //             break;
// //         }
// //         else
// //         {
// //             isPrime = true;
// //             cout << "The number is prime" << endl;
// //         }

// //     }

        
      
      
// //     return 0;
// // }
// #include <iostream>
// using namespace std;    

// int main (){
//     int n;
//     cin >> n;
//     int fact = 1;
//     for (int i = n; i >= 1; i-- ){
//         fact *=i;
//     }
//     cout << "The factorial of " << n << " ! is: " << fact << endl;

// return 0;
// }
#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    return 0;
}