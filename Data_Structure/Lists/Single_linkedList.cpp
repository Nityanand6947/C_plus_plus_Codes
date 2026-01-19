#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void Insert_at_Beginning(){}
void Insert_at_End(){}

Node *CreateLinkedList(int arr[],int index,int size){
    //Base Case
    if(index==size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);

    return temp;
}

int main()
{  
    Node *Head = NULL;

    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr,0,5);
   //Insertion node at particular position

    int x = 3;
    int value = 20;

    Node *temp = Head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    //print the value
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }











    /*
    Node *Head;
    // Head = new Node(4);
    Head = NULL;

    // cout << Head->data << endl;
    // cout << Head->next << endl;

    // Insertion the node at beginning

    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        // Linked List doesn't exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        // Linked List exist(insertion on head)
        else
        {
            Node *temp; //This is temporary node 
            temp = new Node(arr[i]); 
            temp->next = Head;
            Head = temp; //Here making temp as head
        }
    }

    // print the value
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
*/
/*
    // Insertion the node at end
    Node *Head = NULL;
    Node *tail = NULL;

    int arr[] = {12, 13, 14, 15, 16};

    for (int i = 0; i < 5; i++)
    {
        // Linked List doesn't exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail=Head;
        }
        // Linked List exist(insertion on head)
        else
        {
            //Node *tail = Head;
            tail->next = new Node(arr[i]);
            tail = tail->next;
            // while (tail->next != NULL)
            // {
            //     tail = tail->next; //Here when tail will find the null the tail will pointing to the null
            // }
            //     tail->next = new Node(arr[i]); //Here the node will get added to the tail where the pointer is pointing
        }
    }
    // print the value
    Node *current = Head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
*/
}
