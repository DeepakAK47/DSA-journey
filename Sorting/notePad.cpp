// Note --> Fist listen the proble carefully then starts giving the answer

Q. What is the time complexity of the sort function?
ANS.Worst-Case: $O(N \log N)

Q What are the different types of the sorting?
1. Comparison-Based Sorting
These algorithms compare elements to decide their order.
a. Bubble Sort
Repeatedly swaps adjacent elements if they are in the wrong order.
Time Complexity: O(n²)
b. Selection Sort
Finds the smallest element and places it in the correct position.
Time Complexity: O(n²)
c. Insertion Sort(doubt)
Builds the sorted array one element at a time by inserting each element in its correct place.
Time Complexity: O(n²), but O(n) for nearly sorted data.
d. Merge Sort
Divides the array into halves, sorts them recursively, and merges them.
Time Complexity: O(n log n)
// Note --> It is based on the divide and conquer principle
e. Quick Sort(doubt)
Picks a pivot, partitions elements, and recursively sorts the partitions.
Time Complexity: O(n log n) on average, O(n²) in the worst case.
 

Q.Explain how the Selection sort is unstable?
ANS. Because the continous swapping does not occur here. Ex : 2 1 3b 3c  sortted form  is : 1 2 3b 3c 
 
| Sorting Algorithm  | Stable / Unstable | Reason                                                                                                           |
| ------------------ | ----------------- | ---------------------------------------------------------------------------------------------------------------- |
| **Bubble Sort**    | ✅ **Stable**      | It swaps **only adjacent elements** and does **not change the order of equal elements**.                         |
| **Insertion Sort** | ✅ **Stable**      | Equal elements are **inserted after existing ones**, so their original order is preserved.                       |
| **Merge Sort**     | ✅ **Stable**      | While merging, if elements are equal, the element from the **left sub-array is chosen first**, preserving order. |
| **Selection Sort** | ❌ **Unstable**    | It swaps the **minimum element with the first position**, which may change the order of equal elements.          |
| **Quick Sort**     | ❌ **Unstable**    | Partitioning causes **non-adjacent swaps**, so the relative order of equal elements may change.                  |



Q. what is the meaning of vetor<int>v(10,0)  ==> 10 is the size of the vector anf 0 is the each element of the vector.


Q. What are the drawbacks of merge sort?
ANS. too high space complexity

Q. Which sortting algorithm is used by the sort fnction?
ANS. Quick sort algorithm.  O(nlogn)


Q. What is the time and the space complexity of the qick sort?
ANS. T.C ==> O(nlogn)  && S.C ==>O(logn).

Q. What is the time and space complexity of the quick and the merge sort?
ANS. merge sort : T.C ==> O(nlogn)
                  S.C.==> O(n) // Merge Sort uses extra space to store the temporary arrays created during the merging process.
                  Stability : stable
quick sort      : T.C==>O(nlogn)
                  S.C==>O(logn) or O(1)                  
                Stability : unstable

Q. Which header file is used for using the swap function?
ANS. #include<algorithm>

// Note ---> When a function return then local variable get distroy.

Q. Write the syntax of the for each loop.
ANS.   int arr[] = {1,2,3,4,5};
    for(int ele : arr){
        cout<<ele<<" ";
    }  

Q. Write the syntax how we convert the datatype of the int and the string.
ANS.  int x = 6; ===> string s = to_string(x);
    string s = "1234";  ==>   int num = stoi(s);
// Note ==> string s = "abcd";  ==>   int num = stoi(s);// It is an invalid operation;

Q. Is the char and string both has same type?
ANS. No
// Note --> When we compare two char.Here the comparsion is done on the basis of their ASCII values.

Q. What is the difference the stoi and stoll?
ANS. stoi() ==> String to Integer
     stoll()==> String to Long Long

// Note -->We can apply push and the pop operation over the string.     

Q. What is the worst number of the swap in the cyclic sort?
ANS. (n-1)    

Q. What is the most important thing regarding the cyclic sort?
ANS. It is mainly used when we have given a vector in the range of [1,n] or [0,n];

Q. What is the principle of the insertion sort algo?
ANS. Insert each element into its correct position in an already sorted part of the array.

Q. Write the principle of quick sort algorithm?
ANS. Quick Sort works on the Divide and Conquer principle.

Core Idea
Choose a pivot element from the array (first, last, middle, or random).
Partition the array so that:
Elements smaller than the pivot go to the left
Elements greater than the pivot go to the right
Recursively apply the same steps to the left and right subarrays.
Stop when subarrays have 0 or 1 element (already sorted).

