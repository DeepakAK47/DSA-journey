// Check whether the given vector is sortted or not
// 1 2 3 4 5
// 5 4 3 2 1
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
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the entries of the vector : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    for(int i =0;i<a;i++){
        for(int j = i+1;j<a;j++){
            if(v[i]>v[j]){
                flag = false;
                break;
            }
        }
    }
            if(flag==false) cout<<"The given vector is not in the sortted form."<<endl;
        if(flag==true)  cout<<"The given vector is in sortted form.";
    return 0;
}

// Note -> Try to use bool in the conditional statements.