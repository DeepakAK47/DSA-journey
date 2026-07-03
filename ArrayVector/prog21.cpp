// Finding the last occurence index of the particular element in the vector.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Enter the elements of the vector : ";
    for(int i = 0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<10;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int y;
    cout<<"Enter the desire number : ";
    cin>>y;
    for(int i = 10;i>0;i--){
        if(v[i]==y){
            cout<<"The last occurence of the y is at the index of : "<<i;  
            break;
        }
    }
    return 0;
}
Note : The best approach is start searching the ele from the last