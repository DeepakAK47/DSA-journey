// find the difference of the sum of elements at the even indecies and the odd indices of the vector
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the entries of the vector : ";
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All he entries of the vector is : ";
    for(int i=0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<a;i = i+2){
        sum1 = sum1 + v[i];
    }
    for(int i = 1;i<a;i = i+2){
        sum2 = sum2+v[i];
    }
    cout<<"The difference of the sum of even and the odd places of the given vector is : "<<sum1-sum2;
    return 0;
}
