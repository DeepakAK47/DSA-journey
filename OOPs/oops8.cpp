// Use of inheritance
#include<iostream>
using namespace std;
class Vechile{
public:
int tyreSize;
int engineSize;
int lights;
string companyName;
};
class Car : public Vechile{
public:
int steeringSize;
}
class Bike : public Vechile{
    int habdleSize;
};
int main(){
    return 0;
}