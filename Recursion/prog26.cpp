// Given number of the stairs and you can climb only one step ot two step at max
#include<iostream>
using namespace std;
int climb(int stair){
    if(stair==1)  return 1;
    else if(stair==2) return 2;
    return climb(stair-1) + climb(stair-2); // IMP
}
int main(){
    int stair;
    cout<<"Enter the number of the stairs : ";
    cin>>stair;
    int fin = climb(stair);
    cout<<"The number of the ways to climbing to the top of the stair is : "<<fin;
}