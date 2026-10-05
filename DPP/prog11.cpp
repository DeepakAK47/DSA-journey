// CSES Removing Digit problem
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int step = 0;
    while(num!=0){
        string str = to_string(num);
        int ans = INT_MIN;
        for(int i=0;i<str.size();i++){
            int val = str[i] - '0';
            if(val>ans){
                ans = val;
            }
        }
        num = num - ans;
        step++;
    }
    cout<<step;  
    return 0;
}