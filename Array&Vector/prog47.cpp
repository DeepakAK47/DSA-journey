 // Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.size();
    int x = stoi(str);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v.push_back(str[i]- '0');
    };
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

// Doubt
