// Use of constructor
#include<iostream>
using namespace std;
class Bike{
public:
static int noOfBikes;
int tyreSize;
int enginePower;
// default constructor
Bike (int tyreSize,int enginePower){
    this->tyreSize = tyreSize;
    this->enginePower = enginePower;
    cout<<"Hey! I am a construcotr"<<endl;
}
~Bike(){
    cout<<"Distructor is called"<<endl;
}
};
int Bike :: noOfBikes = 110;
int main(){
Bike KTM(100,101);
Bike Honda(1001,1002);
Bike TVS(1003,1004);

cout<<KTM.tyreSize<<" "<<KTM.enginePower<<endl;
cout<<Honda.tyreSize<<" "<<Honda.enginePower<<endl;
cout<<TVS.tyreSize<<" "<<TVS.enginePower<<endl;
cout<<KTM.noOfBikes<<endl;
cout<<Honda.noOfBikes<<endl;
cout<<TVS.noOfBikes<<endl;
    return 0;
}
// Note --> When you define object then constructor is called.
// Note --> Copy constructor are always called by refernce.

