// Finding the subset of the string by recursion
#include<iostream>
using namespace std;
void printSubset(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return ;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}
int main(){
    string str = "aba"; 
    printSubset("",str);
}


 
// Code Analysis
// Function Purpose: printSubset(string ans, string original) generates all subsets by making two choices at each character - include it or exclude it.

// Step-by-Step Execution Trace
// Let me show you the complete execution tree:

// Initial Call: printSubset("", "abc")
// Step 1: printSubset("", "abc")

// original != "" so we continue
// ch = 'a'
// Make two recursive calls:
// printSubset("a", "bc") (include 'a')
// printSubset("", "bc") (exclude 'a')
// Branch 1: Include 'a'
// Step 2: printSubset("a", "bc")

// original != "" so we continue
// ch = 'b'
// Make two recursive calls:
// printSubset("ab", "c") (include 'b')
// printSubset("a", "c") (exclude 'b')
// Step 3: printSubset("ab", "c")

// original != "" so we continue
// ch = 'c'
// Make two recursive calls:
// printSubset("abc", "") (include 'c')
// printSubset("ab", "") (exclude 'c')
// Step 4: printSubset("abc", "")

// original == "" so print "abc" and return
// Step 5: printSubset("ab", "")

// original == "" so print "ab" and return
// Step 6: printSubset("a", "c")

// original != "" so we continue
// ch = 'c'
// Make two recursive calls:
// printSubset("ac", "") (include 'c')
// printSubset("a", "") (exclude 'c')
// Step 7: printSubset("ac", "")

// original == "" so print "ac" and return
// Step 8: printSubset("a", "")

// original == "" so print "a" and return
// Branch 2: Exclude 'a'
// Step 9: printSubset("", "bc")

// original != "" so we continue
// ch = 'b'
// Make two recursive calls:
// printSubset("b", "c") (include 'b')
// printSubset("", "c") (exclude 'b')
// Step 10: printSubset("b", "c")

// original != "" so we continue
// ch = 'c'
// Make two recursive calls:
// printSubset("bc", "") (include 'c')
// printSubset("b", "") (exclude 'c')
// Step 11: printSubset("bc", "")

// original == "" so print "bc" and return
// Step 12: printSubset("b", "")

// original == "" so print "b" and return
// Step 13: printSubset("", "c")

// original != "" so we continue
// ch = 'c'
// Make two recursive calls:
// printSubset("c", "") (include 'c')
// printSubset("", "") (exclude 'c')
// Step 14: printSubset("c", "")

// original == "" so print "c" and return
// Step 15: printSubset("", "")

// original == "" so print "" (empty string) and return
// Output Order:
// Key Concepts:
// Base Case: When original is empty, print the current ans and return
// Recursive Case: For each character, make two choices:
// Include it in the subset (ans + ch)
// Exclude it from the subset (just ans)
// substr(1): Removes the first character, moving to the next position
// Binary Tree Structure: Each call branches into exactly 2 recursive calls
// The algorithm explores all 2^n possible combinations where n is the length of the string, generating all possible subsets!

// Claude Sonnet 4 • 1x