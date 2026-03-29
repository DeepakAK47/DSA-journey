// Take input of the string and reverse it from the position 2 to 5 using inbuilt function
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<"Our original string is : "<<str<<" "<<endl;
    reverse(str.begin()+1,str.end());
    cout<<str;
    return 0;
}