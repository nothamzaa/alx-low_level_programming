#include "lists.h"

/**
 * print_listint - prints all elements of a singly linked list to stdout
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 **/
size_t print_listint(const listint_t *h)
{
  const listint_t *temp;
  unsigned int count = 0;

  temp = h;
  while (temp != NULL)
    {
      _putchar(temp->n + '0');
      _putchar('\n');
      count++;
      temp = temp->next;
    }

  return (count);
}
