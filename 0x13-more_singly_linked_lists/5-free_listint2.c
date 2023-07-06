#include "lists.h"

/**
  * free_listint2 - frees list
  * @head: head of list pointer
  *
  * Return: return head NULL
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
