 // Leetcode Problems : 84(L2 1h+40min),239(L3-20min),20(doubt),155(L3-1h,8min ),1944(Stack L3-2min)

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

// DOUBT
Q. Explain return 0, return -1,return 1?
ANS. return 0 --> Code executed successfully
     return anything  --> Something wrong  

//Doubt
Q. What is the problem here : vector<int>v; v[0] = 10;
ANS. The main problem here is the vector is empty and we are trying too put an element inside it.
-> This type of assignment possible only when we use push_back() function for this we have to first intialize the size of the vector.

 // Note --> stack is a linear data structure.
 // Note --> Deletion and insertion always occur from top.

Q. Explain Linear and non linear data structure.
ANS. Linear Data Structures: Elements arranged sequentially, one after another. Each element has a unique predecessor and successor (except first/last).
Examples: Array, Linked List, Stack, Queue.
Non-Linear Data Structures: Elements not arranged sequentially — they connect in a hierarchical or networked way. An element can have multiple connections.
Examples: Tree, Graph.

 Q. what is the formula for calculating number of sliding windows in an array?
 ANS. n-k+1  
 n => size of array
 k = size of sliding windows

// Note --> For finding the next greatest element in the array we have to start from last.

Q. Does higher priority operators have higher ASCII values?
ANS. No

Q. What is the ASCII range of 0-9 integers?
ANS. 48 to 57

Q. What are the step of for solving the postfix expression?
ANS. You can directly solve the postfix exression.

Q. Write is the methodology for solving prefix expression.
ANS. We move here from right to left.

-> st.pop() -> remove top most element of the stack
-> st.top() -> return the top most element of stack

Q. What are the kind of the problems are solved using the stack?
ANS. -> "Matching pairs" / "Valid parentheses/brackets" — anytime you see (), {}, [] matching or validity checks.
- Next greater/smaller element" — phrases like "find the next greater element to the right," "next warmer day," "daily temperatures."
 This is the classic monotonic stack pattern.
- "Undo" / "backtrack to previous state" — like browser history, undo operations, min/max stack tracking.
-  "Nested structure" / "recursive-looking but no recursion allowed" — decode strings like "3[a2[c]]", evaluate expressions, nested lists.
-  "Evaluate expression" — especially postfix/infix, calculator problems — RPN evaluation, basic calculator with + - * / ( ).
-  "Histogram" / "largest rectangle" / "trapping water" — anytime you need to look both left and right for boundaries efficiently,
   monotonic stack often applies.
-  "Remove adjacent duplicates" / "keep removing until stable" — repeatedly cancel out pairs.
-  DFS/iterative tree or graph traversal without recursion — explicit stack replaces the call stack.

