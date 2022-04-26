// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends
/*struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }};*/
Node* findIntersection(Node* head1, Node* head2)
{
    Node* r1=head1;
    Node* r2=head2;
    vector<int>r;
    while(r1 && r2){
        if(r1->data==r2->data){
            r.push_back(r1->data);
            r1=r1->next;
            r2=r2->next;
        }
        else if(r1->data<r2->data){
            r1=r1->next;
        }
        else{
            r2=r2->next;
        }
    }
    Node* q=new Node(r[0]);
    Node* j=q;
    for(int i=1;i<r.size();i++){
        j->next=new Node(r[i]);
        j=j->next;
    }
    return q;
}