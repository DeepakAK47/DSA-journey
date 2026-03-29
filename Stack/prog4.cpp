// (*)
// WAP to insert an element at any index in the exiting stack
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int sizeOfst = st.size(); 
    int n;
    cout<<"Enter the index for to enter the new element : ";
    cin>>n;
    int val;
    cout<<"Enter the value : ";
    cin>>val;
    if(n==sizeOfst){
        st.push(n);
    }
    vector<int>v;
    while(st.size()!=n){           // This is the most important step here.
        v.push_back(st.top());
        st.pop();
    }
    v.push_back(st.top());
    st.pop();
    st.push(val);
    for(int i=v.size()-1;i>=0;i--){
        st.push(v[i]);
    }
    while(st.size()!=0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

