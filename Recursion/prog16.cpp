// Printing all the pemutation of the string
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permu(string ans, string str){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    for(int i = 0; i < str.length(); i++){
        string newStr = str.substr(0, i) + str.substr(i + 1);  //VVIMP
        permu(ans + str[i], newStr);
    }
}
int main(){
    string str = "abc";
    permu("", str);
    return 0;
}



// Dry run
// permu("", "abc")
// So ans = "", str = "abc"

// Step 1 — Pick each letter one by one:

// Pick 'a' → remaining "bc" → call permu("a", "bc")

// Pick 'b' → remaining "ac" → call permu("b", "ac")

// Pick 'c' → remaining "ab" → call permu("c", "ab")

// Let’s go inside each one:
// ➤ 1. permu("a", "bc")

// Pick each letter from "bc":

// Pick 'b' → remaining "c" → call permu("ab", "c")

// Pick 'c' → remaining "" → print "abc"

// Pick 'c' → remaining "b" → call permu("ac", "b")

// Pick 'b' → remaining "" → print "acb"

// So this gives:
// ✅ abc, acb

// ➤ 2. permu("b", "ac")

// Pick each letter from "ac":

// Pick 'a' → remaining "c" → call permu("ba", "c")

// Pick 'c' → print "bac"

// Pick 'c' → remaining "a" → call permu("bc", "a")

// Pick 'a' → print "bca"

// So this gives:
// ✅ bac, bca

// ➤ 3. permu("c", "ab")

// Pick each letter from "ab":

// Pick 'a' → remaining "b" → call permu("ca", "b")

// Pick 'b' → print "cab"

// Pick 'b' → remaining "a" → call permu("cb", "a")

// Pick 'a' → print "cba"

// So this gives:
// ✅ cab, cba

// Final printed output:
// abc
// acb
// bac
// bca
// cab
// cba
