// 1-2+3-4+5-6+7-8......
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1;i<=n;i++){
    if(i%2==0)  sum1 = sum1 + i;
    else sum2 =  sum2 + i;
    }
    cout<<"The sum of the series is : "<<sum2-sum1;
    return 0;
}