// Find the value of that element which is not duplicated i the given vector
// 1 2 3 1 2 3 5
// Answer - > 5
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    bool flag = false;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the entries of the vector : ";
    for(int i =0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the entries of the vector are : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<a;i++){
        int count = 0;
        for(int j = i+1;j<a;j++){
            if(v[i]==v[j]) count++;
        }
        if(count==0){ 
         cout<<"The element which is not duplicated in the given vector is : "<<v[i];
         flag = true;
         break;
    }
}
   if(flag==false) cout<<"All the element of the given vector are duplicated.";
    return 0;
}

// Doubt