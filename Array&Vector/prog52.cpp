//  Q2. Input a string of length n and count all the consonants in the given string.
//  Input : "pwians"
//  Output : 4
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    string str = "deepak";
    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++){
        int x = (int)str[i];
        if((x==97 || x==101 || x==105 || x==111 || x==117)){
            count++;
        }
    }
    cout<<count;
    return 0;
}
