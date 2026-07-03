// Finding the most occurence charcter of the given string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.size();
    int max = 0;
    for(int i=0;i<n;i++){
        char ch = str[i];
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i]==ch) count++;
        }
        if(count>max) max = count;
    }
    
    for(int i=0;i<n;i++){
        char ch = str[i];
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i]==ch) count++;
        }
        if(count==max) cout<<ch<<" "<<max<<endl;
    }
    return 0;
}