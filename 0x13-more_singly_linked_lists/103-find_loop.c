/*
 * File: 103-find_loop.c
 * Auth: Haile2723
 */
#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in the llists
 * @head: A pointer to the head of the lists
 * Return: If there is no loop - NULL, Otherwise the address of the node 
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *dog, *cat;
if (head == NULL || head->next == NULL)
{
return (NULL);
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
dog = dog->next;
cat = cat->next;
}
return (dog);
}
dog = dog->next;
cat = (cat->next)->next;
}
return (NULL);
}
