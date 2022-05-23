/*
 * File: 8-sum_listint.c
 * Auth: Haile2723
 */
#include "lists.h"
/**
 * sum_listint - calculate the sum of the data (n) of a listint_t list
 * @head: A pointer to the head of the listint_t list
 * Return: If the list is empty - 0. Otherwise - The sum of the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
