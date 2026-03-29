 // Leetcode Problems : 84,1944,239,20(doubt),155

 Q. Explain st.top().
 ANS. It returns only the top most element

 Q. Explain LIFO.
 ANS. Stack works over LIFO principle or FILO.

 Q. Explain st.size().
 ANS. It will return the size of stack.

 Q. Can we pass stack as pass by value?
ANS. No, we pass stack as pass by reference.

Q. Explain vector<int>v(5,0).
ANS. 5 is the side of the vector and 0 is the assign to all index of elements

Q. Explain return 0, return -1,return 1?
ANS. return 0 --> Code executed successfully
     return anything  --> Something wrong
// Note -> This condition is true only in the main function.     

//Doubt
Q. What is the problem here : vector<int>v; v[0] = 10;
ANS. The main problem here is the vector is empty and we are trying too put an element inside it.
-> This type of assignment possible only when we use push_back() function for this we have to first intialize the size of the vector.

 // Note --> stack is a linear data structure.
 // Note --> Deletion and insertion always occur from top.

 Q. what is the formula for calculating number of sliding windows in an array?
 ANS. n-k+1  
 n => size of array
 k = size of sliding windows

 //doubt
Q. int nums.size();
   int arr[size]; What is the problem with this code?
ANS. In C++ we can not declare this because it a variable size?
-> For solving this issue use vector

// Note --> For finding the next greatest element in the array we have to start from last.

Q. Does higher priority operators have higher ASCII values?
ANS. No

Q. What is the ASCII range of 0-9 integers?
ANS. 48 to 57

Q. What are the step of for solving the postfix expression?
ANS. You can directly solve the postfix exression.

Q. Write is the methodology for solving prefix expression.
ANS. We move here from right to left.

Q.