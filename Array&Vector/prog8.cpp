// Write a program to find the largest of three number of the given vector
// 1 2 3 4 5 6 7 8 9 10

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter all the element of the vector : ";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    int max1 = INT_MIN;   // Include the header file #include<math.h> for using this function.
    for(int i = 0;i<a;i++){
        if(v[i]>max1) max1 = v[i];
    }
    cout<<endl;
    cout<<"The maximum value of the vector is : "<<max1;
    cout<<endl;
    int max2 = INT_MIN;
    for(int i = 0;i<a;i++){
        if(v[i]>max2 && v[i]!=max1) max2 = v[i];
    }
    cout<<"The second maximum value of the vector is : "<<max2;
    cout<<endl;
    int max3 = INT_MIN;
    for(int i = 0;i<a;i++){
        if(v[i]>max3 && v[i]!=max1 && v[i]!=max2)  max3 = v[i];
    }
    cout<<"The third largest element of the vector is : "<<max3;
    return 0;
}