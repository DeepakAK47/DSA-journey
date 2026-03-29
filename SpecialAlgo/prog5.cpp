// WAP to find the maximum power of 2 which is less than the given decimal value
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int target = 32;
    int x =  2;
    int y = 0;
    int ans = pow(x,y);
    while(ans<target){
    y++;
    ans = pow(x,y);
    }
    cout<<"the maximum power of 2 which has the value less then the given target value is : "<<(y-1)<<endl;
    cout<<"The target ans is : "<<ans;
    return 0;
}