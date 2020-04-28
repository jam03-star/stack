#include <stdio.h>
void push();
void pop();
void display();
void Topelem();
void reverse();
#define MAX 10
int n,top=-1,b[MAX],i;
int main()
{
    printf("Enter choice 1.push 2.pop 3.top 4.display");
    int con=1,ch;
    while(con==1)
    {
        scanf("%d",&ch);
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
            Topelem();
            break;
            case 5:
            reverse();
            break;
        }
        scanf("%d",&con);
        printf("\nwhether u should continue(0/1) : %d",con);
    }
    return 0;
}
void push()
{
    int elem;
    scanf("%d",&elem);
    if(top>MAX)
    {
        printf("\noverflow");
    }
    else
    top=top+1;
    b[top]=elem;
    printf("\nThe element %d is inserted into the stack at the index %d",b[top],top);
}
void pop()
{
    if(top==-1)
    {
        printf("empty");
    }
    else
    {
        printf("\nThe poped element is : %d",b[top]);
        top=top-1;
    }
}
void display()
{
    int i=top;
    printf("\nThe number of elements in the stack is : %d",top+1);
    printf("\ndisplaying elements in the stack : \n");
    while(i!=-1)
    {
        printf("%d ",b[i]);
        i=i-1;
    }
}
void Topelem()
{
    printf("\nThe top element in the stack is %d",b[top]);
}
void reverse()
{   
    printf("\nDisplaying reversed stack elements :\n");
    int i=0;
    while(i<=top)
    {
        printf("%d ",b[i]);
        i++;
    }
}


input:

1
5
1
1
6
1
1
7
1
1
8
1
1
9
1
2
1
3
1
4
1
5
0

output:

Enter choice 1.push 2.pop 3.top 4.display
The element 5 is inserted into the stack at the index 0
whether u should continue(0/1) : 1
The element 6 is inserted into the stack at the index 1
whether u should continue(0/1) : 1
The element 7 is inserted into the stack at the index 2
whether u should continue(0/1) : 1
The element 8 is inserted into the stack at the index 3
whether u should continue(0/1) : 1
The element 9 is inserted into the stack at the index 4
whether u should continue(0/1) : 1
The poped element is : 9
whether u should continue(0/1) : 1
The number of elements in the stack is : 4
displaying elements in the stack : 
8 7 6 5 
whether u should continue(0/1) : 1
The top element in the stack is 8
whether u should continue(0/1) : 1
Displaying reversed stack elements :
5 6 7 8 
whether u should continue(0/1) : 0
