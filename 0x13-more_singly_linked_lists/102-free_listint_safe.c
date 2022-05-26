/*
 * File: 102-free_listint_safe.c
 * Auth: Haile2723
 */
#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes in a looped listint
 * @head: A pointer to the head
 * Return: If the list is not looped - 0, Otherwise - the no. of unique nodes.
 */
size_t looped_listint_count(listint_t *head)
{
listint_t *dog, *cat;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
{
return (0);
}
dog = head->next;
cat = (head->next)->next;
while (cat)
{
if (dog == cat)
{
dog = head;
while (dog != cat)
{
nodes++;
dog = dog->next;
cat = cat->next;
}
dog = dog->next;
while (dog != cat)
{
nodes++;
dog = dog->next;
}
return (nodes);
}
dog = dog->next;
cat = (cat->next)->next;
}
return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head of the listint_t lists.
 * Return: The size of the list that was freed.
 * Description: The function set the thead to NULL
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
size_t nodes, index;
nodes = looped_listint_count(*h);
if (node == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
}
else
{
for (index = 0; index < nodes; index++)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
*h = NULL;
}
h = NULL;
return (nodes);
}
