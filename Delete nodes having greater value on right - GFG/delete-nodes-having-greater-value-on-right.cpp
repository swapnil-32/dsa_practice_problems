//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
       Node* reverse(Node *  head){
        Node* prev=NULL;
        Node* curr=head;
        
        while(curr){
        Node* next = curr->next;
        curr->next  = prev;
        prev = curr;
        curr=next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // Node*temp=head->next;
        // Node*prev=head;
        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        // Node*a=head;
        // while(temp!=NULL){
        //   // a=prev;
        //     if(temp->data>prev->data){
        //         delete(prev);
        //         a->next=temp;
        //         prev=temp;
        //         temp=temp->next;
        //         a=prev;
        //     }
        //     else{
        //         prev=prev->next;
        //         temp=temp->next;
        //     }
            
        // }
        // return head->next;
          Node* k = reverse(head);
        Node* o = k;
        int max = k->data;
        while(k->next){
            if(k->next->data>=max){
                max=k->next->data;
                k=k->next;
            }
            else{
               k->next=k->next->next;
                // continue;
            }
            
        }
        // k=reverse(k);
        return reverse(o);
        // your code goes here
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends