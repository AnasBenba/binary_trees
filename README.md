# C - Binary Trees

## What is a binary tree?

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. The first node in the tree is called the root, and it does not have a parent node. All other nodes have one parent node, except for leaf nodes (nodes with no children). A binary tree can be empty (i.e., a NULL tree) if it has no nodes.

## What is the difference between a binary tree and a Binary Search Tree (BST)?

The main difference between a binary tree and a Binary Search Tree (BST) lies in the ordering of the nodes. In a binary tree, there are no specific rules for the arrangement of nodes, and they can be inserted in any order. However, in a Binary Search Tree (BST), the nodes follow a specific ordering property:

1. The left child of a node contains a value that is less than the value of the node.
2. The right child of a node contains a value that is greater than or equal to the value of the node.
Due to this ordering property, a BST enables efficient searching, insertion, and deletion of elements in O(log n) time complexity on average. In contrast, searching in a regular binary tree takes O(n) time in the worst case.

## What is the possible gain in terms of time complexity compared to linked lists?

The main advantage of using binary trees compared to linked lists is the potential improvement in time complexity for certain operations. In a linked list, the time complexity for searching an element is O(n) since you have to traverse the list from the beginning to find the desired node. However, in a balanced Binary Search Tree (BST), the time complexity for searching, insertion, and deletion is O(log n) on average.

The logarithmic time complexity in BST is achieved due to its hierarchical nature, which allows for efficient binary search operations. As the number of nodes in a balanced BST grows, the height of the tree remains logarithmic, leading to faster search times compared to linear data structures like linked lists.

## What are the depth, the height, the size of a binary tree?

- The depth of a node in a binary tree is the number of edges from the node to the root. The depth of the root node is 0.
- The height of a node in a binary tree is the number of edges on the longest path from the node to a leaf. The height of a leaf node is 0.
- The size of a binary tree is the total number of nodes in the tree, including both internal nodes and leaf nodes.

## What are the different traversal methods to go through a binary tree?

There are three common methods to traverse a binary tree:

1. In-order traversal: In this method, we visit the left subtree, then the current node, and finally the right subtree. The result is a sorted list of elements for a BST.

2. Pre-order traversal: In this method, we visit the current node first, then the left subtree, and finally the right subtree.

3. Post-order traversal: In this method, we visit the left subtree first, then the right subtree, and finally the current node. This method is commonly used for memory deallocation in a binary tree.

## What is a complete, a full, a perfect, a balanced binary tree?

- A complete binary tree is a binary tree in which all levels are fully filled except possibly the last level, which is filled from left to right. In a complete binary tree, all nodes are as far left as possible on their respective levels.

- A full binary tree is a binary tree in which every node has either zero or two children. No node has only one child.

- A perfect binary tree is a binary tree in which all internal nodes have exactly two children, and all leaf nodes are at the same level. It means the tree is both full and complete.

- A balanced binary tree is a binary tree in which the left and right subtrees of every node have heights that differ by no more than one. This property ensures that the tree remains reasonably well-balanced, leading to more efficient operations compared to unbalanced trees.
