// Sort the string in decreasing order after the removal of the value smaller than X
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "TFVREGYXXXYYYZYZYZYZ";
    string s = "";
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
    // for(int i=0;i<s.length();i++){
    //     cout<<s[i]<<" ";
    // }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        bool flag = true;
        for(int j=0;j<s.size()-i;j++){
            if(s[j+1]>s[j]){
                swap(s[j],s[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}