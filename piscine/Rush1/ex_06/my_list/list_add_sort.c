/*
** list_add_sort.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_add_sort(t_list **list, const void *item, fcmp fcmp)
{
  t_list *next;
  t_list *previous;
  t_list *node;
  int position;

  node = list_create(item);
  if (!*list)
    return !(*list = node);
  next = *list;
  previous = NULL;
  position = 0;
  while (next && (*fcmp)(next->content, item) < 0)
    {
      previous = next;
      next = next->next;
      position++;
    }
  node->previous = previous;
  node->next = next;
  if (previous)
    previous->next = node;
  else
    *list = node;
  if (next)
    next->previous = node;
  return position;
}
