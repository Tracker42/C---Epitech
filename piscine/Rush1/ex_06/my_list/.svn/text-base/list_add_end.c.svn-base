/*
** list_add_end.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_add_end(t_list **list, const void *item)
{
  t_list *node;
  t_list *end;
  int position;

  if (!*list)
    return list_add_begin(list, item);
  end = *list;
  position = 0;
  while (end->next)
    {
        end = end->next;
        position++;
    }
  node = list_create(item);
  node->previous = end;
  end->next = node;
  return position;
}
