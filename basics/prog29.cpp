// WAP for finding whether n is prime or compositive number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the number : ";
    cin>>n;
    bool flag = true;
    for(int i = 2;i<n;i++){
        if(n%i==0)  flag = false;
        break;
    }
    if(n==1  || n==0)  cout<<n<<" : is neither prime nor composite number.";
    else if(flag==true)  cout<<n<<" : is a prime number.";
    else cout<<n<<" : is a composite number.";
    return 0;
}
