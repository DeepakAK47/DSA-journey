// Leetocde : 237,876,19,141,142,61,83,2326(Doubt),21,23,148,86,328,206,234,92,143,725,2058(doubt),2057,2074(doubt),138(doubt),430(doubt), 
// Note --> continue from 


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp  = head;
        if(head==NULL || head->next==NULL) return head;
        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};

Q. What are constructors?
ANS. A constructor is a special function in a class that runs automatically when an object is created. Its main purpose is to initialize the object (give starting values to its data).
A constructor has the same name as the class.
It has no return type (not even void).

Q. Why do we use constructor?
ANS. It is used to initialize data members.
Example :
class Student {
public:
    int roll;
    string name;

    // Constructor
    Student() {
        roll = 1;
        name = "John";
    }
};

int main() {
    Student s; // Constructor is called automatically
}

Types of Constructors
Default Constructor – no parameters.
Parameterized Constructor – takes parameters to give custom values.

// Note --> All the integer values/vector are used as pass by reference while array is pass by value .

Q. IS their any problem if I use *ptr instead of * ptr?
ANS. No.


Q. What are the limitations of array and vector over LinkedList?
ANS. 
| Feature            | Array      | Vector     | LinkedList     |
| ------------------ | ---------- | ---------- | -------------- |
| Size               | Fixed      | Dynamic    | Dynamic        |
| Insertion/Deletion | Slow       | Slow       | Fast           |
| Memory             | Contiguous | Contiguous | Non-contiguous |
| Thread Safety      | No         | Yes        | No             |

Q. What is the meaning of the thread safety?
ANS. Thread safety means that a program, method, or data structure can be safely used by multiple threads at the same time without causing incorrect results or data corruption.

Q. Explain thread.
ANS. A process is a running program (e.g., a browser).
A thread is a part of that process.
Multiple threads inside the same process share memory and resources.

Q. Define LinkedList.
ANS. Idea of Linking two non contiguous memory locations.

Note ---> (*ptr) == ptr-> Both are the same things.

// Note -> The printing of LinkedList in the reverse order can be done easily using recursion
// here [this->]  ==> this is a derefrence operator.

Q. When leetcode shows time limit exceeded error?
ANS. 👉 Your solution is correct, but it is too slow.

// Note --> If you want to check whether the t->next is NULL or not ypu have to first check whether the temp is not NULL. You can not find tenp->next if the temp is already NULL.

Q. What is the difference the (fast!=NULL && fast->next!=NULL) and (fast->next!=NULL && fast!=NULL)?
ANS.  if temp is NULL then second condition is wrong.
Reason --> In && operator is the first operator is false then it will not check the second

// Note tempA == tempB --> This is comapring these are comparing the two different node.


// Note --> Continue after 40 minutes.

Q. What is the differnce between the temp1>temp2   and temp1->val > temp2->val?
ANS. first is comparing address of node while second is comparing the value of node.

Q. What is the difference ListNode temp and ListNode* temp. If ListNode datatype is already declared?
ANS. struct ListNode {
    int val;
    ListNode* next;
};
1. ListNode temp; → Object (actual node)
temp is a real ListNode object
Memory for the whole node is allocated immediately
You access members using dot (.)

2. ListNode* temp; → Pointer to a node
temp is a pointer that stores the address of a ListNode
Does not create a node by itself
You access members using arrow (->)

ListNode* temp;
temp = new ListNode();   // now it points to a node
temp->val = 10;
temp->next = NULL;
 
Q. WAP for reversing LinkedList.(***)
ANS. 
 // Note --> This is the itrative way of soving this problem
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* prev = NULL;
//         ListNode* next = NULL;
//         ListNode* curr = head;
//         while(curr!=NULL){
//             next = curr->next;
//             curr->next  = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

Q. Can we create a dummy LinkedList of the original LinkedList?
ANS. Yes

Q. Write the code for creating the deep copy of LinkedList?
ANS.         ListNode* c = new ListNode(0);
        // deep List
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp!=NULL){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c = c->next;

// Note ==> If you are stuck in a problem and dry run it 3times then do not try to find bug rewrite the whole solution again.        


###(Doubly LinkedList) :

Q. What are the benefits of the doubly LinkedList?
ANS. We can easily print the reverse of the given LinkedList.
If we have access of any listNode then we can traverse entire LinkedList

Q. What are the different types of LinkLists?
ANS. 1. Single LinkList
     2. doubly LinkedList
     3. circular singular LinkList
     4. circular doubly LinkList