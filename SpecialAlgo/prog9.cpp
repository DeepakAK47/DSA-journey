// WAP to find the number which are not repeating in the given nums
#include<iostream>
using namespace  std;
void helper(int nums[],int size){
    int res = 0;
    for(int i=0;i<size;i++){
        res = res^nums[i];
    }
    int temp = res;
    int k=0;
    // Finding the rigth most set bit
    while(true){
        if((temp & 1)==1){
            break;
        }
        temp = temp>>1;   //Right shift x>>1 ==> x/2, x>>2 ==> x/4 ... &&Left shift x<<1 ==> x*2,x<<2==>x*4
        k++;
    }
    int retVal = 0;
    for(int i=0;i<size;i++){
        int num = nums[i];
        if(((num>>k)&1)==1){
            retVal = retVal ^ num;
        }
    }
    cout<<retVal<<" ";
    res = retVal ^ res;
    cout<<res<<" ";
}

int main(){
    int nums[] = {1,2,1,3,2,5,5,9,8,8};
    int size = sizeof(nums)/sizeof(nums[0]);
    helper(nums,size);
    return 0;
}

// Note --> Try to dry run this maximum time for better understanding.