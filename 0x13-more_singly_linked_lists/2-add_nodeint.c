/*
 * File: 2-add_nodeint.c
 * Auth: Haile2723
 */
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t
 * @head: A poiter to the address of the head of listeint_t
 * @n: The integer that the new node contain
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
