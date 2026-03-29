Leetcode -> 1700, 232,239 
// Note --> Last lecture is pending
Q. Write the working principle of queue data structure.
ANS. FIFO

Q. Expalin front and rear position in the queue data structure.
ANS.Front → Remove, Rear → Insert

Q. What are the different type of the functions used in queue?
ANS. 1. enqueue(x) — Insert
2. dequeue() — Delete
3. front() / peek()
4. back()
5. isEmpty()
6. isFull()
7. size()
8. clear()

Q. What is the difference between the push and enqueue syntax?
ANS. | Operation | Used in | Insert Position | Principle                 |
| --------- | ------- | --------------- | ------------------------- |
| Enqueue   | Queue   | Rear            | FIFO (First In First Out) |
| Push      | Stack   | Top             | LIFO (Last In First Out)  |

Q.     cout<<q.back()<<" ";
    cout<<q.rear()<<" ";
ANS. cout<<q.rear() -> It is a wrong syntax for printing the last element.

Q. Does queue is passed as pass by reference in the functions?
ANS. YES

// doubt
Q. Does the implementation of queue is possible using vecctor and you are not allowed to used array here?
ANS. Yes

Q. Does we need to add #include<vector> header file for using vector?
ANS. Yes

Q. What is the difference the return and return x?
ANS. return --> It is used with void functions 
return x -> It is used with non void functions

// Note -> return 0 --> successful execution of code
// Note -> return x --> Not successful execution of code

Q. Explain the use of delete keyword in LinkdList.
ANS. Node* temp = head;
delete(head) --> This delete keyword removes the temp Node from the memory.
