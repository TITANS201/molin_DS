include<stdio.h>
#include<stdio.h>
struct node
{
    int data;
    struct node*next;};
    struct node *init(intx)
{struct node*temp=(struct node*)
    malloc(sizeof(struct node))
    temp->data=x;
    temp->next=null;
    return temp;
}
void display (struct node*head)
{
    struct node*c=head;
    while(c!=null)
    {
        printf("%d",c->data);
        c=c->next;

    }
    printf("\n");
}
struct node*insert_beg(struct node*head,intx)
{
    struct node *temp=init(x);
    if (head==null) {
        return tmp;

    }
    struct node*c=head;
    while(c->next;)
}
{c=c->nect;
}
c->next=temp;
return head;
struct node*insert_pos(struct node*head,intx,int pos)
struct node*temp=init(x);
if (head ==null)
{
    return temp;

}
struct node*c=head;
for (inti=1;i<=pos-2:i++)
{
    c=c->next;
}
temp->next =c->next;
c-<next=temp;
return head ;
int main()
{
    struct node*head,*irst,*second,*third;
    head=init(10);
    first=init(20)
    ;second=init(30)
    third=init(40);
    head->next=first;
    second->next=third;
    display(head);
    head=insert_beg (head,50);
    display(head);
    head =insert_last(head,60);
    display(head);
    head=insert_pos(head,100,3);
    display(head);
}