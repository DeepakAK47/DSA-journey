// Finding the largest number in the given string
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "123 234 567 8976 334";
    vector<int>v;
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        long long x = stoll(temp);
        v.push_back(x);
    }
    int max  = v[0];

    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    cout<<max;
    return 0;
}