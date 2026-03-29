// Change the name of the student using the function using pass by reference
// !important 
#include<iostream>
using namespace std;
class Student{
    public:
string name;
int rollNo;
int score;
Student(string name,int rollNo,int score){
    this->name = name;
    this->rollNo = rollNo;
    this->score = score;
}
};
void change(Student *s){
s->name = "Raghav";
}
int main(){
Student s("Deepak",49,78);
cout<<s.name<<endl;
change(&s);
cout<<s.name<<endl;
    return 0;
}
// Note => Remember this.