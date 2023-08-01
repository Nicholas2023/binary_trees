# Binary Trees Tasks :wink:
This repository contains solutions to various tasks related to binary trees. Each task is implemented as a separate C file along with a main file to test the functionality.

## Task List
[New Node]()
[Insert Left]()
[Insert Right]()
[Delete]()
[Is Leaf]()
[Is Root]()
[Pre-order Traversal]()
[In-order Traversal]()
[Post-order Traversal]()
[Height]()
[Depth]()
[Size]()
[Leaves]()
[Nodes]()
[Balance Factor]()
[Task Descriptions]()

### 1. New Node
Write a function that creates a binary tree node.

Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

### 2. Insert Left
Write a function that inserts a node as the left-child of another node.

Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`

### 3. Insert Right
Write a function that inserts a node as the right-child of another node.

Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`

### 4. Delete
Write a function that deletes an entire binary tree.

Prototype: `void binary_tree_delete(binary_tree_t *tree);`

### 5. Is Leaf
Write a function that checks if a node is a leaf.

Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`

### 6. Is Root
Write a function that checks if a given node is a root.

Prototype: `int binary_tree_is_root(const binary_tree_t *node);`

### 7. Pre-order Traversal
Write a function that goes through a binary tree using pre-order traversal.

Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

### 8. In-order Traversal
Write a function that goes through a binary tree using in-order traversal.

Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

### 9. Post-order Traversal
Write a function that goes through a binary tree using post-order traversal.

Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

### 10. Height
Write a function that measures the height of a binary tree.

Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`

### 11. Depth
Write a function that measures the depth of a node in a binary tree.

Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`

### 12. Size
Write a function that measures the size of a binary tree.

Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`

### 13. Leaves
Write a function that counts the leaves in a binary tree.

Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`

### 14. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree.

Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`

### 15. Balance Factor
Write a function that measures the balance factor of a binary tree.

Prototype: `int binary_tree_balance(const binary_tree_t *tree);`

## How to Use
To compile and test the code for each task, use the provided main files along with the required source files.

### Example:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```
Each compiled program will print the results of the corresponding task.

Feel free to explore and test the binary tree functions!
