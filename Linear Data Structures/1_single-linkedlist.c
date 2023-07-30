/*Program to create a single linked list */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<alloc.h>

struct link      /*Declaration of structure that defines list entries */
{
    int number;
    struct link *next;
} start , *node; /* start acts as header node */
/**
 * start --> structure type variable
 * node --> pointer to structure type variable
*/

void main()
{
    int i, count=0;
    start.next=NULL;
    node = &start; 
    printf("\n * single linked list \n\n");
    for( ; ; )
    {
        printf("%2d. enter the number (-999t to exit):", ++count);
        scanf("%d", &i);
        if(i==-999)
        break;
        node -> next=(struct link*)malloc(sizeof(struct link));
        node= node -> next;
        node->number=i;
        node->next=NULL;
    }
    printf("\n\n * currenty the list si as follows: \n\n");
    for(node=start.next, count =0; node; node=node->next)
    {
        printf("\t %2d -> %5d\n", ++count, node->number);
    }
    if(!count)
    printf("\t empty \n");
    printf("\n * total number of nodes: %d \n", count);
}
