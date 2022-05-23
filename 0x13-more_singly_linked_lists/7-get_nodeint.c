/*
 * File: 7-get_nodeint.c
 * Auth: Haile2723
 */
#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked lists
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node to locate - 0 indicate start
 * Return: If the node doesn't exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
