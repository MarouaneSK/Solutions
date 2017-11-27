Node* insert(Node *head,int data)
{
    Node*new=malloc(data*sizeof(*new));
    
    if (head == NULL)
    {
        head = new;
        new->data=data;
    }
    else
     {
        Node*h= head;
        while(h->next)    
        {
            h = h->next;

        }
        
        h->next = new ;
        new->data=data;
    }
    return head;
}
