//(*******)
// WAP to find the prev greatest element
// WAP to next greater element of an array if it does not exit then places -1 at(Solve this using stack data structure)
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>st;
    int arr[] = {1,4,2,8,4,9,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // print the array arr
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[size];
    brr[0] = -1;
    st.push(arr[0]);  
    for(int i = 1;i<size;i++){
        while(st.size()!=0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            brr[i] = -1;
            st.push(arr[i]);
        }
        else{
        brr[i] = st.top();
        st.push(arr[i]);
    }
}
// Printing the values brr 
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}