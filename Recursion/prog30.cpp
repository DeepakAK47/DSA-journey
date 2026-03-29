// // Print all the subset of the given string(if string contains the duplicate elemnts also)
// ***
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void subset(string ans, string original, vector<string>& v, bool flag){
    if(original.length() == 0){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length() == 1){
        subset(ans, original.substr(1), v, true);
        subset(ans + ch, original.substr(1), v, true);
    }
    else {
        char dh = original[1];
        if(ch == dh){
            if(flag == true) subset(ans, original.substr(1), v, true);
            subset(ans + ch, original.substr(1), v, false);
        }
        else if(ch != dh){
            if(flag == true) subset(ans, original.substr(1), v, true);
            subset(ans + ch, original.substr(1), v, true);
        }
    }
}
int main(){
    vector<string> v;
    string str = "deepak";
    sort(str.begin(), str.end());
    subset("", str, v, true);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}


// Note --> It is a goood problem. I have 3hours on this question.
