#include<iostream>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    string str1 = "123456";
    string str2 = "876534";
    string ans  = min(str1,str2);
    cout<<ans;
    return 0;
}