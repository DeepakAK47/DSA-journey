// Sortting the given vector using bubble sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
for(int i=0;i<5;i++){
    bool flag = true;
    for(int j=0;j<5-i;j++){
        if(v[j]>v[j+1]){
            int temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
            flag = false;
        }
        if(flag==true) break;
    }
    if(flag==true) break;
}
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}
    return 0;
}