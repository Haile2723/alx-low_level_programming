/*
 * File: 3-add_nodeint_end.c
 * Auth: Haile2723
 */

#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of the listint_t 
 * @head: A pointer to the address of the head of the listint_t
 * @n: The integer that the new node contain
 * Return: If the function fails - NULL
 *         Otherwise - The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
}
return (*head);
}
