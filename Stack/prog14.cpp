// (***)
// WAP for stock span problem
// arr[] = {100,80,60,70,60,75,85}
// output brr[] = {1,1,1,2,1,4,6}

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // determing the number of time stock prices is greter than the previous values
    stack<int>st;
    int brr[size];
    brr[0] = 1;
    st.push(0);
    for(int i=1;i<size;i++){
        while(st.size()!=0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        brr[i] = st.size()==0 ? (i+1) : (i-st.top());                 // !IMPORTANT
        st.push(i);  
    }
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
