// Modification in the name
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
s.name = "Singh";
cout<<"Student Name is : "<<s.name<<endl;
    return 0;
}