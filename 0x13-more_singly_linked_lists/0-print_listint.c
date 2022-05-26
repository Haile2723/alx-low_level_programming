/*
 * File: 0-print_listint.c
 * Auth: Haile2723
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t lists.
 * @h: A pointer to the head of the list_t.
 * Return: The number of node in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
