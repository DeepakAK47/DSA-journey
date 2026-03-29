//  Q6. You have n coins and you want to build a staircase with these coins. The staircase consists of k 
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete. 
// Given the integer n, return the number of complete rows of the staircase you will build.

// Input: n = 5 
// Output: 2 
// Explanation: Because the 3rd row is incomplete, we return 2. 
// Example 2: 
// Input: n = 8 
// Output: 3 
// Explanation: Because the 4th row is incomplete, we return 3.

#include<iostream>
using namespace std;
int main(){
    int inputCoins;
    cout<<"Enter the number of the input coins : ";
    cin>>inputCoins;
    int lowerValue = 0;
    int upperValue = inputCoins;
    bool flag  = false;
    while(lowerValue<=upperValue){
        int midValue = (lowerValue + upperValue)/2;
        if((midValue*(midValue+1))/2 == inputCoins){
            cout<<midValue<<" : rows can be completed by using these coins";
            flag = true;
            break;
        }
        else if((midValue*(midValue+1))/2 >inputCoins){
            upperValue = midValue - 1;
        }
        else lowerValue = midValue + 1;
    }
    if(flag==false){
        cout<<upperValue<<" rows can be fully occupied by using these coinns";
    }
    return 0;
}