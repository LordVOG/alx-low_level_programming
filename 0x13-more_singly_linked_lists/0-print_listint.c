#include "lists.h"

/**
  * print_listint - print all elements in list
  * @h: element pointer
  *
  * Return: all elements
  */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
