/*
 * File: 4-free_listint.c
 * Auth: Haile2723
 */

#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: a pointer to the head of the listint_t list to freed
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
