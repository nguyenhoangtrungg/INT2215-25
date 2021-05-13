#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct Node
{
    char* Data;
    Node* Next;
    Node* After;

    Node()
    {
        Data = '\0';
        Next = NULL;
        After = NULL;
    }

    Node(char* Data_)
    {
        Data = Data_;
        Next = NULL;
        After = NULL;
    }

    ~Node()
    {
        Data = '\0';
        Next = NULL;
        After = NULL;
    }
};

struct LinkedList
{
    Node* Head;
    Node* Tail;
    
    void CreatLinkedList()
    {
        Head = NULL;
        Tail = NULL;
    }

    void PrintLinkedList()
    {
        Node* node_ = Head;
        while(node_ != NULL)
        {
            cout << node_->Data<<' ';
            node_ = node_->Next;
        }
        cout << endl;
    }

    void AddFirst(Node* node_)
    {
        if(Head == NULL)
        {
            Head = node_;
            Tail = node_;
        }
        else
        {
            node_->Next = Head;
            Head->After = node_;
            Head = node_;
        }
    }

    void AddLast(Node* node_)
    {
        if(Head == NULL)
        {
            Head = node_;
            Tail = node_;
        }
        else
        {
            Tail->Next = node_;
            node_->After = Tail;
            Tail = node_;
        }
    }

    void RemoveFirst()
    {
        if(head == NULL)
        {
            return;
        }
        Head = Head->Next;
        Head->After = NULL;
    }

    void RemoveLast()
    {
        if(Head == NULL) 
        {
            return;
        }
        Tail = Tail->After;
        Tail->Next = NULL;
    }
    
    void Destructor()
    {
        while(Head != NULL) RemoveFirst();
    }

    void insertAfter(Node* p, const char* s) 
    {
        Node* New;
        New->Data  s;
        New->Next = p->Next;
        New->After = p;
    }

    const char* Remove(Node* p)
    {
        (p->After)->Next = (p->Next);
        (p->Next)->After = (p->After);
        p->Next = NULL;
        p->After = NULL;
        return p->Data;
    }

};

int main()
{
    ifstream cin("test.txt");
    int n; 
    LinkedList Demo;
    Node* Input;

    Demo.CreatLinkedList();

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        char** x;
        cin >> x;
        //Input = CreatNode(x);
        Input = new Node(x);
        Demo.AddLast(Input);
    }

    return 0;
}