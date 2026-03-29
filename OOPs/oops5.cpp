//  Array in object
#include<iostream>
using namespace std;
class Cricketer{
    public:
char name;
int age;
int noOfTestMatches;
int averageScore;
};
int main(){
Cricketer virat;
virat.name = 'V';
virat.age = 30;
virat.noOfTestMatches = 50;
virat.averageScore = 78;
Cricketer dhoni;
dhoni.name = 'D';
dhoni.age = 23;
dhoni.noOfTestMatches = 60;
dhoni.averageScore = 66;
Cricketer cricketers[2] = {virat,dhoni};
for(int i=0;i<2;i++){
    cout<<cricketers[i].name<<endl;
    cout<<cricketers[i].age<<endl;
    cout<<cricketers[i].noOfTestMatches<<endl;
    cout<<cricketers[i].averageScore<<endl;
}
    return 0;
}