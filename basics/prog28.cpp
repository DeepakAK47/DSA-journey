#include<iostream>
using namespace std;
int main(){
    int i =  65;
    while(i>=65 && i<=90){
        char ch = (char)i;
        cout<<i<<" "<<ch<<endl;
        i++;
    }
    return 0;
}