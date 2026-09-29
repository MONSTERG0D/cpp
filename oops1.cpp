#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float CGPA  ;
    int age;



    Student(string s,int r,float g , int a)
{
    name =s;
    rno = r;
    CGPA = g;
    age = a;
}
Student(){};
};

int main(){
    Student s1;
    s1.name = "the tweet";
    s1.CGPA = 8.2;
    s1.rno = 60;
    s1.age = 12;


    int n;
    Student s2;
    s2.name = "the shadow";
    s2.CGPA = 7.2;
    s2.rno = 40;
    s2.age = 13;


    cout << s1.name <<" " << s1.CGPA << " " << s2.rno << "  " << s2.age << endl;
    
    Student s3("the cloud",78,8.0,14);
    cout << s3.name <<" " << s3.CGPA << " " << s3.rno << "  " << s3.age << endl;




    return 0;
}