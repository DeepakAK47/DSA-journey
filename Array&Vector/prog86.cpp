// Use of the substr function
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);
cout<<str<<endl;
cout<<str.substr(2,5);
    return 0;
}