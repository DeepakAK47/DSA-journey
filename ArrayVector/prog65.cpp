// Finding the most occurence character of the given string --> Method 2
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    vector<int> v(26,0);
    int n = str.size();
    for(int i=0;i<n;i++){
        char ch = str[i];
        int ASCII = (int)ch;
        v[ASCII-97]++;
    }

    int max = 0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max = v[i];
    }
    
    for(int i=0;i<26;i++){
        if(v[i]==max){
            cout<<(char)(i+97)<<" "<<max<<" ";
        }
    }
    return 0;
}