// WAP to print the nth fibonacci number 
// 1 1 2 3 5 8 13 21 34
#include<iostream>
using namespace std;
int fibo(int num){
    if(num==1 || num==2) return 1;
    return fibo(num-1) + fibo(num-2);   // Multiple recursion call are done here.
}
int main(){
    int num;
    cout<<"Enter the term you required : ";
    cin>>num;
    int fin = fibo(num);
    cout<<"The nth fibonacci term of the given series is : "<<fin;
}

// method : 2

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    ans.push_back(1);
    ans.push_back(1);
    for(int i=3;i<=n;i++){
        int sum  = ans[ans.size()-1] + ans[ans.size()-2];
        ans.push_back(sum);
    }
    cout<<ans[ans.size()-1];
    return 0;
}