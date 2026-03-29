// Declaration with initialization of the LinkedList(Use of this->)
#include<iostream>
using namespace std;
class Student{
    public :
string name;
int rollNo;
int score;
//Constructor
Student(string name,int rollNo,int score){
this->name = name;  
this->rollNo = rollNo;
this->score = score;
}
};
int main(){
Student s("Deepak",49,78);
cout<<"Student Name is : "<<s.name<<endl;
cout<<"Student rollNo is : "<<s.rollNo<<endl;
cout<<"Student score is : "<<s.score<<endl;
    return 0;
}

// this-> It is a pointer