#include <stdlib.h>
#include <stdio.h>
#include "sll_node.h"

#define FALSE 	0
#define TRUE 	1

int
sll_insert( Node* current, int new_value)
{
	Node *pre;
	Node *new;
	
	/*
 	* 找到相应位置
 	* */
	while ( current->value < new_value ) {
		pre = current;
		current = current->link;		
	}	
	new = (Node *)malloc(sizeof( Node ));
	if (new == NULL)
		return FALSE;	
	new->value = new_value;
	new->link = current;
	pre->link = new;
	return TRUE;
}

int
main()
{
	Node node1, node2;
	node1.value = 12;
	node1.link  = &node2;
	node2.value = 24;
	node2.link  = NULL;	
	int result = sll_insert(&node1,20);
	printf("结果：%d\n",result);
	return 0;
}
