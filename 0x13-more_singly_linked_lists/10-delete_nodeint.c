/*
 * File: 10-delete_nodeint.c
 * Auth: Haile2723
 */
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: A pointer to the address of the head of the list
 * @index: The index of the node to be delated - ndices start at 0.
 * Return: On success - 1, on failer - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;
if (copy == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
{
return (-1);
}
copy = copy->next;
}
tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
