// Change the name of the student using pointer.
#include<iostream>
using namespace std;
class Student{
    public :
string name;
int rollNo;
int score;
//Constructor
Student(string str,int r,int s){
    name = str;
    rollNo = r;
    score = s;
}
};
int main(){
Student s("Deepak",49,78);
cout<<"Student Name is : "<<s.name<<endl;
Student *ptr = &s;  // Important line
// (*ptr).name = "Raghav";
//      or
ptr->name = "Raghav";
cout<<"Student Name is : "<<s.name<<endl;
    return 0;
}
// here [this->]  ==> this is a derefrence operator.