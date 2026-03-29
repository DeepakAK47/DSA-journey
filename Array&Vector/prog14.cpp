// Find the factorial of the large number 
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the required number : ";
    cin>>n;
    long long int fact = 1;
    for(int i = 1;i<=n;i++){
        fact =  fact *i;
    }
    cout<<"The required answer is : "<<fact;
    return 0;
}