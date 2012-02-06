/*
** list_add_to.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_add_to(t_list **list, const void *item, int position)
{
  t_list *node;
  t_list *previous;
  int i;

  if (!*list)
    return -1;
  if (position == 0)
    list_add_begin(list, item);
  else
    {
      previous = *list;
      i = position;
      while (previous->next && --i > 0)
	previous = previous->next;
      if (!i)
	{
	  node = list_create(item);
	  node->previous = previous;
	  if (previous->next)
	    {
	      node->next = previous->next;
	      previous->next->previous = node;
	    }
	  previous->next = node;
	}
    }
  return position;
}
