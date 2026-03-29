// Problem solved related to this topic on leetcode are : 1480,238,2483,1402,209,1052,1493,713,2614,507,(204)Try,2507
Q. When time limit exceeded is show in the leetcode?
ANS.When LeetCode shows “Time Limit Exceeded (TLE)”, it means your program is taking more time than the maximum allowed time for that problem.

Q. When run time error is shown by the leetcode compiler?
ANS. When index is out of bound

Q. When compiler error comes?
ANS When their is an syntax error.

Q. What is the time comlexity of the given code?
ANS. class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer;
        int size = nums.size();
        int product = 0;
        while(product<size){
            int proVal = 1;
            for(int i=0;i<size;i++){
                if(i==product) continue;
                else if(i!=product){
                    proVal = proVal*nums[i];
                }
            }
            product++;
            answer.push_back(proVal);
        }
        return answer;
    }
};

T.C ==> O(n*n)
S.C ==> O(n)

Q. What is the difference between i=0 and i==0?
ANS. i=0 ==> this is an assign operator and i==0 this is an comparison operator.


Q. Explain subsequence in array.
ANS.  A subsequence of an array is a sequence that can be formed by removing zero or more elements from the array without changing the order of the remaining elements.
A = [1, 2, 3]
[], [1], [2], [3],
[1, 2], [1, 3], [2, 3],
[1, 2, 3]
[1, 3] is a subsequence (we removed 2 but kept order).
[2, 1] ❌ is not a subsequence (order changed).

Q. what are subarrays?
ANS. A subarray is a contiguous (continuous) part of an array — meaning the elements appear next to each other in the original array and keep the same order.
A = [1, 2, 3]
[1]
[2]
[3]
[1, 2]
[2, 3]
[1, 2, 3]
❌ [1, 3] is not a subarray because 2 was skipped — it breaks continuity. 


Q. what the condition for using sliding window or how you determine where you have to apply sliding window?
ANS. In case of subarray,subsequence,Largest/Smallest sum ==> prefix sum ? slidding window

Q. Write the slidding window algo.
ANS.    for(int i=0;i<k;i++){
        prevSum = prevSum + arr[i];
    }
    int maxSum = 0;
    int maxIdx = -1;
    int i = 1;
    int j = k;
    while(j<size){
    int currSum = prevSum + arr[j] - arr[i-1];
    if(maxSum<currSum){
        maxSum = currSum;
        maxIdx = i;
    }
        prevSum = currSum;
        i++;
        j++;
    }

// Note --> Here we are using two pointer which is pointing the previous and the next value of the window. We are using these and calculating the next required value.   
// Note ==> If we apply sort in the subarray problem then the respective position of all the elelmnts will distorded.


###(Bitwise Operator)


Q. What are basic bitwise operators?
ANS. AND,OR,NOT,XOR

Q. What is the difference between the logical and bitwise operator?
ANS. Logical operators work over boolean input like as(a<y),(a==y) etc alse here we apply operation directly over the given expression while
bitwise operation firts we convert the given operator in bitwise form after we apply operation bitwise.

Q. What is the representation of the different types of operators?
ANS. AND ==> &
OR  ==> |
XOR ==> ^
NOT ==> ~

Q. What is the symbol of the left and rigth shift operator?
ANS. left shift(<<)  and right shift (>>)

Q. Explain what is the meaning of set bit.
ANS. Number of one's in the given binary operation are call set bit.

Q. Which built in function is used for calculating the number of set in the given integer?
Ans. __builtin_popcount(x) if x = 304 or any decimal value.

Q. Which header file is used for using the pow function?
ANS. #include<math.h>

Q. What is the value of 0 XOR 4?
ANS. 4

Q. Write the properties of XOR.
ANS. Properties are : commutative,Associative,self inverse(a^a==> 0),Identity(a^a==>0)

Q. Which headerfile is used for using INT_MIN and INT_MAX?
ANS. #include<climits> 

Q. Which headerfile is used for using sqrt funtion.
ANS #include<math.h>

Q. What is the time complexity of sqrt function?
ANS. O(1)

Q. Write the syntax to determine the numeber of row and column in 2D array and 2D vector?
ANS. Array : rows => int rows = sizeof(arr) / sizeof(arr[0]); & column => int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
Vector : Rows =>  int rows = matrix.size(); & column => int cols = matrix[0].size();

Q. Write the logic fro checking whether the given number is prime or not?
ANS.     for(int j=2;j<=sqrt(i);j++){  // Note --> Here equal to sign is important.
        if(i%j==0) return false;
    }
    return true;
 
Q. What is the time comlexity of sieve function?
ANS. void fillSieve(vector<bool>&sieve){
    int n = sieve.size()-1;
    // T.C O(n) almost
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j=j+i){
            sieve[j]=0;
        }
    }
} 
// Almost T.C O(n)    

// Note ==> Continue after 1hours