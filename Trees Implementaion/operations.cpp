#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree{
    private:

    Node* root;

    void preOrder(Node* node){
        if(node == nullptr){
            return;
        }else{
            cout << node -> data << " ";
            preOrder(node -> left);
            preOrder(node -> right);
        }
    }

    void inOrder(Node* node){
        if(node == nullptr){
            return;
        }else{
            inOrder(node -> left);
            cout << node -> data << " ";
            inOrder(node -> right);
        }
    }

    void postOrder(Node* node){
        if(node == nullptr){
            return;
        }else{
            postOrder(node -> left);
            postOrder(node -> right);
            cout << node -> data << " ";
        }
    }

    int size(Node* node){
        if(node == nullptr){
            return 0;
        }else{
            return 1 + size(node -> left) + size(node -> right);
        }
    }
    
    Node* insert(Node* node, int val){
        if(node == nullptr){
            return new Node(val);
        }
        if(val < node -> data){
            node -> left = insert(node -> left, val);
        }else if(val > node -> data){
            node -> right = insert(node -> right, val);
        }
        return node;
    }

    Node* findMin(Node* node){
        while(node -> left != nullptr){
            node = node -> left;
        }
        return node;
    }

    Node* Delete(Node* node, int val){
        if(node == nullptr){
            return nullptr;
        }

        if (val < node -> data){
             node -> left = Delete(node -> left, val);
            }else if(val > node -> data){
                node->right = Delete(node->right, val);
            }
            else{
                if(node -> left == nullptr && node -> right == nullptr){
            node = nullptr;
             }else if(node -> left == nullptr){
                node = node -> right;
            }else if(node -> right == nullptr){
                node = node -> left;
            }else{
                Node* temp = findMin(node -> right);
                node -> data = temp -> data;
                node -> right = Delete(node -> right, temp -> data);
            }
         }
        return node;
    }

    public:

    BinaryTree(){
        root = nullptr;
    }

    bool empty(){
        if(root == nullptr){
            return true;
        }else{
            return false;
        }
    }

    int size(){
        return size(root);
    }

    void preOrder(){ 
        preOrder(root);  cout << endl; 
    }
    void inOrder(){
        inOrder(root);   cout << endl;
    }
    void postOrder(){
        postOrder(root); cout << endl;
    }

    void getRoot(){
        if(root == nullptr){
            cout << "Tree is empty" << endl;
        }else{
            cout << "Root: " << root -> data << endl;
        }
    }

    void insert(int val){
        root = insert(root, val);
    }
    
    void deleteNode(int val){
        root = Delete(root, val);
    }

};

int main(){
    BinaryTree tree;
    
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(9);

    cout << boolalpha;

    cout << "Tree is empty: " << tree.empty() << endl;
    cout << "Size: " << tree.size() << endl;

    cout << "PreOrder:  "; tree.preOrder();
    cout << "InOrder:   "; tree.inOrder();
    cout << "PostOrder: "; tree.postOrder();

    tree.deleteNode(3);

    cout << "InOrder after deleting 3: "; tree.inOrder();
    cout << "Size after deleting 3: " << tree.size() << endl;



    return 0;
}