/*
 * list.h
 *
 *  Created on: Sep 12, 2015
 *      Author: cuki
 */

#ifndef LIST_H_
#define LIST_H_

typedef struct node {
	int val;
	struct node * next;
} node_t;

extern void print_list(node_t * head);
extern void push_end(node_t * head, int val);
extern void push_beginning(node_t ** head, int val);
extern int pop(node_t ** head);
extern int remove_last(node_t * head);
extern int remove_by_index(node_t ** head, int n);

#endif /* LIST_H_ */
