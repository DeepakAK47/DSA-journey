//  Q5. Input a string of length less than 10 and convert it into integer without using builtin function.
//  Input : "3244"
//  Output : 3244
//  Input : "12"
//  Output : 12
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.size();
    for(int i=0;i<n;i++){
        int y = str[i] - '0';
        cout<<y;
    }
}