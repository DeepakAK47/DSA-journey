// Finding the last occurence of the target
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sizeOfVector;
    cout<<"Enter the size of the vector : ";
    cin>>sizeOfVector;
    vector<int>v;
    cout<<"Enter the entries of vector : ";
    for(int i=0;i<sizeOfVector;i++){
        int inputDigit;
        cin>>inputDigit;
        v.push_back(inputDigit);
    }
    int targetValue;
    cout<<"Enter target value : ";
    cin>>targetValue;
    int lowerValue = 0;
    int upperValue = sizeOfVector - 1;
    while(lowerValue <= upperValue){
        int midValue = (lowerValue + upperValue)/2;
        if(v[midValue]==targetValue){
            targetValue  = midValue;
            lowerValue = midValue + 1;
        }
        else if(v[midValue]>targetValue){  
            upperValue = midValue - 1;
        }
        else lowerValue = midValue + 1;
    }
   cout<<"The last occurence of the target value in the given array is : "<<targetValue;
    return 0;
}
