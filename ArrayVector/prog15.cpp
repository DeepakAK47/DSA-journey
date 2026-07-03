// Finding the first non repeating number in the vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v;
    int n;
    bool flag = false;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the element of the vectors : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the vctor are : ";
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(i!=j && v[i]==v[j]){
                count++;
                break;
            }
        }
        if(count==0){
            flag = true;
            cout<<v[i]<<" is the first non repeating number in the vector.";
        }
    }
    if(flag==false){
        cout<<"All the element of the vector are repeating";
    }
    return 0;
}