/*
 * File: 1-listint_len.c
 * Auth: Haile2723
 */
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in the linked list_t
 * @h: A pointer to the head of the listint_t list
 * Return: The number of element in the listint_t lists
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
