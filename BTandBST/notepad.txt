Q. What is leaf Node?
ANS. A node which has no child.

Q. What is size?
ANS. Number of Nodes is equal to size.

Q. Explain Number of edges, heights.
ANS. Edge ->  size-1

Q. What are types of trees?
ANS. 1. General Tree : A node having 0 or more number of children are called general tree.
2. Binary Tree :
Each node has at most two children.
Types of Binary Tree
(a) Full Binary Tree : A tree having 0 children or two children. No node is allowed having 1 children.
(b) Complete Binary Tree : All levels are completely filled except possibly the last. Last level is filled from left to right.
(c) Perfect Binary Tree :  All leaf nodes are at the same level.
(d) Balanced Binary Tree : Height difference between left and right subtree is minimal (usually ≤ 1).
(e) Degenerate (Skewed) Tree : Each node has only one child.

🌳 3. Binary Search Tree (BST)
Left subtree contains values less than root.
Right subtree contains values greater than root.
Used for fast searching.
// Note -> duplicate values are not allowed in BST.

🌳 4. AVL Tree :
Self-balancing BST.
Balance factor = height(left) − height(right).
Balance factor ∈ {−1, 0, 1}.

Q. Which header file should add for using INT_MIN/INT_MAX function?
ANS. include climit

Q. Which header file used for determining the datatype of a variable?

ANS.%%  #inlcude typeinfo %%
Ex. int x = 5;
 cout<<type.id(x).name();

Q. Write the syntax for the conversion of int to string and vice versa.
ANS. Integer → String Conversion :
    int num = 123;
    string str = to_string(num);
String → Integer Conversion
    string str = "456";
    int num = stoi(str);

Q. What are the type of traveesal in binary tree?
ANS. BFS(Breadth First Search)
     DFS(Depth First Search)
-> DFS and BFS are two ways to traverse (visit) all nodes of a binary tree.
-> DFS explores a tree deep into one branch first, then backtracks.

📌 Types of DFS Traversal

1️⃣ Preorder (Root → Left → Right)
2️⃣ Inorder (Left → Root → Right)
3️⃣ Postorder (Left → Right → Root)

BFS explores the tree level by level.
It is also called:
🔹 Level Order Traversal

Note -> preOrder -> first time visit TreeNode
        inOrder -> Second time visit the treeNode
        postorder -> third time visit the TreeNode
// Note -> for the proper visualization draw the null node of each Node as well

  

Q. What is the time and spcace complexity of the balanced binary tree?
ANS. 

Q. Drive how we get the height of the binary is O(logn).
ANS. n = 1 + 2 + 2^2 + 2^3 + ... + 2^h

#NOTE :  #include algorithm header file is used for using reverse function in C++
function : reverse(v.begin(),v.end())

