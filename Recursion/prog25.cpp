// Find the number of the ways to climb on the stair if 1 or 2 or 3 jumps are allowed
#include<iostream>
using namespace std;
int climb(int stair){
    if(stair==1) return 1;
    else if(stair==2) return 2;
    else if(stair==3) return 4;
    return climb(stair-1) + climb(stair-2) + climb(stair-3);  // IMP

}
int main(){
    int stair;
    cout<<"Enter the number of the stairs : ";
    cin>>stair;
    int p = climb(stair);
    cout<<"The numbers of the ways to reaching at the top od the stair is : "<<p;
}