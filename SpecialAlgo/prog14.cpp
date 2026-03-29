// WAP to determine whether the given array can be divided into cts array of equal sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum  = 0;
    vector<int>v;
    bool flag = false;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
        v.push_back(sum);
    }
    int idx;
    for(int i=0;i<size;i++){
        if(v[i]==(v[size-1]-v[i])){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==true){
        cout<<"Yes this array can be divided into two cts part of equal sum and the at the idx "<<idx;
    }
    else {
        cout<<"This arr can not be divided into parts so that the sum of the cts part of the array is equal";
    }
    return 0;
}

T.C ==> O(n)
S.C ==> (1)


// Method 2 :

// Step1 : Find the sum of all array
// step2 : Find the half of sum value
// step3 : sum each vakue of array continuosly if the su comes equal to the half value of the sum which is calculated above then it is our required answer.

