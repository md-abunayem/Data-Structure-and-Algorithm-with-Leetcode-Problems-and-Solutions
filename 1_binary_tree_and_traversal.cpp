#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// node class => create node
class Node
{
public:
    Node *left;
    int data;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    };
};

// build tree => create
static int idx = -1;
Node *buildTree(vector<int> preorder)
{ // TC: O(n)
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }

    // create node
    Node *root = new Node(preorder[idx]);

    // call for left and right sub-tree
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Traversal
// 1. pre-order traversal => root, left, right
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; // print curr root data

    preorder(root->left);  // call for left sub-tree
    preorder(root->right); // call for right sub-tree
}

// 2. inorder traversal => left, root, right
void inorder(Node *root)
{ // TC: O(n)
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);       // call for left sub-tree
    cout << root->data << " "; // print data
    inorder(root->right);      // call for right sub-tree
}

// 3. post-order traversal
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// 4. level-order traversal
void levelOrder(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (q.size() > 0)
    {
        Node *curr = q.front();
        cout << curr->data << " ";
        q.pop();

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

//print level order traversal data as (level wise)=>
// 1
// 2  3
// 4  5

void levelOrderPrintLevelWise(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

}

int main()
{
    vector<int> pre = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // preorder data

    Node *root = buildTree(pre);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    cout << "Level traversal (BFS): ";
    levelOrder(root);

    cout << "Level traversal (BFS) with level format print: \n";
    levelOrderPrintLevelWise(root);
}