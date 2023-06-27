//Given two linked lists, your task is to complete the function makeUnion(), that returns the union list of two linked lists. This union list should include all the distinct elements only and it should be sorted in ascending order.
 struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        struct Node* result=new Node(0);
        struct Node* temp=new Node(0);
        set<int>s;
        while(head1){
            s.insert(head1->data);
            head1=head1->next;
        }
         while(head2){
            s.insert(head2->data);
            head2=head2->next;
        }
        result=temp;
        for(auto x:s){
            struct Node* newnode=new Node(x);
            temp->next=newnode;
            temp=temp->next;
        }
        result=result->next;
        return result;
    }

Using sets in C++ || T.C : O((M+N)log(M+N)) and S.C: O(M+N)

The function first creates an empty set s to store the unique elements of both linked lists. It then iterates over both linked lists and inserts each element into the set. The set ensures that only unique elements are stored.

After that, it creates a new linked list newList with a dummy node containing a large value (1e8). It then iterates over the set and appends each element to the end of the new linked list.

The function then returns the next node after the dummy node of newList, which is the head of the new linked list containing all unique elements from both input linked lists in sorted order.