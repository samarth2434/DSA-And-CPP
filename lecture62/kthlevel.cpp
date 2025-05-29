#include <iostream> // For input/output operations (cout)
#include <vector>   // For using std::vector
#include <queue>    // For potentially building tree using level order, but preorder is given

// Define the structure for a Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build a Binary Tree from a preorder traversal with -1 representing NULL
// This function will consume elements from the vector sequentially
Node* buildTree(const std::vector<int>& preorder, int& index) {
    // Base case: If index is out of bounds or current element is -1 (NULL)
    if (index >= preorder.size() || preorder[index] == -1) {
        index++; // Move to the next element for the parent's other child
        return NULL;
    }

    // Create a new node with the current data
    Node* newNode = new Node(preorder[index]);
    index++; // Move to the next element

    // Recursively build left and right subtrees
    newNode->left = buildTree(preorder, index);
    newNode->right = buildTree(preorder, index);

    return newNode;
}

// Function to print nodes at the K-th level of a Binary Tree
void kthLevel(Node* root, int k) {
    // Base Case 1: If the current node is NULL, we can't go further.
    if (root == NULL) {
        return;
    }

    // Base Case 2: If we have reached the K-th level (current level is 1 relative to k)
    if (k == 1) {
        std::cout << root->data << " "; // Print the data of the node at this level
        return;
    }

    // Recursive Step: Traverse left and right subtrees, decrementing k
    // We are looking for the (k-1)th level in the subtrees
    kthLevel(root->left, k - 1);
    kthLevel(root->right, k - 1);
}

int main() {
    // Preorder traversal representation with -1 for NULL
    // 1 (root)
    // 2 (left of 1)
    // 7 (left of 2)
    // -1 (left of 7)
    // -1 (right of 7)
    // -1 (right of 2)
    // 3 (right of 1)
    // 4 (left of 3)
    // -1 (left of 4)
    // -1 (right of 4)
    // 5 (right of 3)
    // -1 (left of 5)
    // -1 (right of 5)
    std::vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    int index = 0; // Index to keep track of the current position in the preorder vector
    Node* root = buildTree(preorder, index); // Build the tree

    // Print nodes at the 3rd level
    std::cout << "Nodes at level 3: ";
    kthLevel(root, 3);
    std::cout << std::endl;

    // Example for level 1
    std::cout << "Nodes at level 1: ";
    kthLevel(root, 1);
    std::cout << std::endl;

    // Example for level 2
    std::cout << "Nodes at level 2: ";
    kthLevel(root, 3);
    std::cout << std::endl;

    // Remember to deallocate memory to prevent memory leaks in real applications
    // For this simple example, we'll omit complex tree deallocation,
    // but in a production setting, you'd implement a destructor or a helper function.

    return 0;
}