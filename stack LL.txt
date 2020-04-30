#include <stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek(); 
struct node
{
    int elem;
    struct node *next;
};
struct node *newnode,*top=0,*temp; 
int con=1,ch,c,d;
int main()
{
    while(con==1)
    {
        printf("Enter the choice :1.push 2.pop 3.display 4.peek");
        scanf("%d",&ch);
        printf("\nThe choice you entered is %d",ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
            break;
        }
       
        scanf("%d",&con);
         printf("\nWhether u should continue(0/1) :%d\n",con);
    }

    return 0;
}
void push()
{
    scanf("%d",&d);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->elem=d;
    newnode->next=top;
    top=newnode;
    printf("\n%d is pushed into the stack",d);
}
void pop()
{
    printf("\nThe poped element is %d",top->elem);
    newnode=top;
    if(newnode!=0)
    {
        top=newnode->next;
        free(newnode);
    }
    else
    printf("stack already empty");
}
void display()
{
    newnode=top;
    printf("\nDisplaying elements in the stack:\n");
    while(newnode!=0)
    {
        printf("%d ",newnode->elem);
        newnode=newnode->next;
    }
}
void peek()
{
    printf("\nThe top element of stack is %d",top->elem);
}


input:

1
5
1
3
1
1
4
1
1
3
1
1
6
1
3
1
2
1
3
1
4
0

output:

Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 1
5 is pushed into the stack
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 3
Displaying elements in the stack:
5 
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 1
4 is pushed into the stack
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 1
3 is pushed into the stack
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 1
6 is pushed into the stack
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 3
Displaying elements in the stack:
6 3 4 5 
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 2
The poped element is 6
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 3
Displaying elements in the stack:
3 4 5 
Whether u should continue(0/1) :1
Enter the choice :1.push 2.pop 3.display 4.peek
The choice you entered is 4
The top element of stack is 3
Whether u should continue(0/1) :0
