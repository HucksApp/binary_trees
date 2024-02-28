# Binary Trees


## TREES

A tree is a non-linear abstract data type (node) that are connected via links in a hierarchy-based structure.<img width="511" alt="Screenshot 2024-02-28 at 5 22 29 AM" src="https://github.com/HucksApp/binary_trees/assets/58187974/56d187da-ab38-44a6-93d8-9ac0726782bb">

## General Terms

 Terms                     |      Description 
 --------------------------|---------------------
 Path                      | Path refers to the sequence of nodes along the edges of a tree.
 Root                      | The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.
 Parent                    | Every node that points to another node (starting from the root) is the parent of the child node it points to
 Child                     | Every node that is pointed to by another node (starting from the root) is the child of the parent node pointing to it
 Leaf                      | The node which does not have any child node 
 Traversing                | Traversing means passing through nodes in a specific order
 Levels                    | Generations of a node 


 ## Types of Trees

* General Trees
* Binary Trees
* Binary Search Trees


Trees                     |      Description 
--------------------------|---------------------
 General Trees            | Unordered tree data structures where the root node has minimum 0 or maximum ‘n’ subtrees
 Binary Trees             | General trees in which the root node can only hold up to maximum 2 subtrees: left subtree and right subtree
 Binary Search Trees      | Is a *Binary Tree* where the data is always stored in such a way that the values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node, i.e. `left subtree < root node ≤ right subtree`


## Types of Binary Trees

Trees                     |      Description 
--------------------------|---------------------
Full Binary Tree          | A binary tree type where every node has either 0 or 2 child nodes 
Complete Binary Tree      | A binary tree type where all the leaf nodes must be on the same level. However, root and internal, all nodes must either have 0, 1 or 2 child nodes
Perfect Binary Tree       | A binary tree type where all the leaf nodes are on the same level and every other node except leaf nodes have 2 children

