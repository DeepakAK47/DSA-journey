//  Q4. Input a string of even length and reverse the second half of the string.
//  Input : str = "abcdefgh"
//  Output : abcdhgfe
//  Input : str = "pwians"
//  Output : pwisna
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.size();
    int y = n/2;
    reverse(str.begin()+y,str.end());
    cout<<str;
    return 0;
}