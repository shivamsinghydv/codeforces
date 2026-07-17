#include<iostream>

using namespace std;

struct node_of_a_linked_list 
{
    int data;
    struct node_of_a_linked_list *next_node_of_the_linked_list;
};


class Node {
    public:
        int data;
        Node* next;
        Node(int x) {
            data = x;
            next = nullptr;
        }
};

int main() 
{
    Node* New_node = new Node(1);
    cout << New_node->data << endl;
    delete New_node;

}
