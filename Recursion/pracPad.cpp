// WAP to find all possible path to reach from bottom to top if steps allowed are : 1,2,3
#include<iostream>
using namespace std;
int climb(int noStairs){
    if(noStairs==1) return 1;
    else if(noStairs==2) return 2;
    else if(noStairs==3) return 4;
    return climb(noStairs-1) + climb(noStairs-2) + climb(noStairs-3);
}
int main(){
    int noStairs;
    cin>>noStairs;
    int p = climb(noStairs);
    cout<<p;
    return 0;
}