/*
 * File: 5-free_listint2.c
 * Auth: Haile2723
 */

#include "lists.h"

/**
 * free_listint2 - frees a listint2 list
 * @head: A pointer to the address of the head of the listint_t list
 * Description: Set the head to NULL
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head ++ NULL)
{
return;
}
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
