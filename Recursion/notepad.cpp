Recursion is function calling itself or Recursion is the replacement of the loop.
Note -->when we use the return then it will return that function which call this function. It do not return the whole code.(VVIMP)
Iterative function has better time complexity then recursive function.
The time complexity in the problem of the power determining question is O(b) stack frames.



Note -> Use of the  display  function after cout and vice versa both are the two different things.The difference in this case that if we use the cout function first then it will print the value from 1 to n in the reverse order but when we use the cout function after the calling function then it will print the value not in the reverse order.(The above answer is provided in the referrence when we have to print the values from 1 to n). 




Q. Which function has the better time complexity iterative function or the recursive function?
ANS. Iterative functions generally have better time complexity than recursive functions for most problems. This is because recursion often adds overhead due to function calls and stack usage, while iteration uses simple loops and less memory. However, for some problems (like divide and conquer), recursion can be more efficient or easier to implement.



Q. Which function has the better space complexity iterative or the recursive function?
ANS.Iterative functions usually have better space complexity than recursive functions.

Iterative: Uses constant space, typically O(1), since it only needs loop variables.
Recursive: Uses extra space for each function call on the call stack, often O(n) for n recursive calls.
So, recursion generally uses more memory




Q. What is the time complexity of fibonacci nth term if we are finding  the nth term of the fibonacci by using the recursion method?
ANS. 2^n(It is an exponential time complexity).



Note --> In all the  recursive problems the base case condition is very important.



Q. Can we use [arr.size()]  this  for finding the size of the array?
ANS. No use sizeof(arr)/sizeof(arr[0]);



Q. Which header file is used for using the INT_MIN/INT_MAX?
ANS. #inlcude<climits>




Q. Which header file is used for using the sort function?
ANS. #inlcude<algorithm>



Q. What substr(i) actually does?
ANS. str.substr(i) does NOT remove the element at index i.

It returns a substring starting FROM index i to the end.


// Note -->>     vector<string>str;
    str = "abc";  this is wrong way of assigning value of the vector.
    // Note --> The correct approach for this is :
    #include<iostream>
#include<vector>
#include<string>
using namespace std;

// Fix: Pass by constant reference (const vector<string>&) to save time/memory
void helper(const vector<string>& str){
    string ch = "qbc";
    
    cout << ch; 
    
    // Loop to concatenate all elements
    for (const string& element : str) {
        cout << element;
    }
    // Newline for clean output
    cout << endl; 
}

int main(){
    // Fix: Corrected syntax for initializer list
    helper({"abs"}); 
    // Output: qbcabs
    
    helper({"x", "y", "z"}); 
    // Output: qbcxyz

    return 0;
}


Q. string newStr = str.substr(0, i) + str.substr(i + 1);  Explain ?
ANS. first coordinated decides the staring point of extracting element and the second coordinate defines the length of the extracting array.


Q.What is the difference between subsequence and subset?
ANS. Na


Q. What is subarray?
ANS. subarray must in the sequence form. 
Example : 
Subarrays of [1,2,3,4,5]:
A subarray is a contiguous portion of an array. Here are all possible subarrays:

Subarrays must be contiguous!

✅ [1,2,3] is a subarray
❌ [1,3,5] is NOT a subarray (elements not adjacent)



Q.What is the subarrays?
ANS. All those subsequence which are continous are called subarray.



Q int n = str.size() --> This is out of bound index
Q int n = str.size()-1 --> this gives the last index of the array.
// Note --> In C++ string array vector these starts from the index zero.



Q. Can we apply push and the pop operation in the string?
ANS. Yes



// Note --> (Conversion of int to string)
int freq = 1
int ztr = (to_string(freq)+ch);







































































































































































































































































































































































Note -->  Always apply Natasa's mam rule

Note -- Dry run is the way for finding the error in DSA.