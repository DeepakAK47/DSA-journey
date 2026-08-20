// Given a sorted array. Find the number of the one in the given array of the time complexity is O(logn);
#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(int sizeOfVector,vector<int>&v,int targetValue){
    int lowerValue = 0;
    int upperValue = sizeOfVector - 1;
    int requiredLowerIndex = -1;
    while(lowerValue<=upperValue){
        int midValue = (lowerValue + upperValue)/2;
        if(v[midValue]==targetValue){
            requiredLowerIndex = midValue;
            upperValue = midValue - 1;    // It is the most important part of code
        }
        else if(v[midValue]>targetValue){
                upperValue = midValue-1;
        }
        else {
            lowerValue = midValue+1;
        }
    }
    return requiredLowerIndex;

}


int lastOccurence(int sizeOfVector,vector<int>&v,int targetValue){
    int lowerValue = 0;
    int upperValue = sizeOfVector - 1;
    int requiredUpperIndex = -1;
    while(lowerValue<=upperValue){
        int midValue = (lowerValue + upperValue)/2;
        if(v[midValue]==targetValue){
            requiredUpperIndex = midValue;
            lowerValue = midValue+1;   // It is also very important part of the code.
        }
        else if(v[midValue]>targetValue){
                upperValue = midValue-1;
        }
        else {
            lowerValue = midValue+1;
        }
    }
    return requiredUpperIndex;

}


int main(){
    int sizeOfVector;
    cout<<"Enter the size of the vector : ";
    cin>>sizeOfVector;
      vector<int>v;
    cout<<"Enter the entries of the vector : ";
    for(int i=0;i<sizeOfVector;i++){
        int inputElement;
        cin>>inputElement;
        v.push_back(inputElement);
    }
    cout<<"All the entries of the vector are : ";
    for(int i=0;i<sizeOfVector;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int targetValue;
    cout<<"Enter the target value : ";
    cin>>targetValue;
    int firstIndex = firstOccurence(sizeOfVector,v,targetValue);
    int lastIndex = lastOccurence(sizeOfVector,v,targetValue);
    int answer = lastIndex - firstIndex + 1;
    cout<<"The number of occurence of the target value is : "<<answer;
    return 0;
}