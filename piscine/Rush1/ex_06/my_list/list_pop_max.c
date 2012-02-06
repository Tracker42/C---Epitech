/*
** list_pop_max.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_pop_max(t_list** list, fcmp fcmp)
{
  t_list *tmp;
  t_list *max;
  const void *item;

  if (!*list)
    return NULL;
  max = *list;
  tmp = max->next;
  while (tmp)
    {
      if ((*fcmp)(tmp->content, max->content) > 0)
        max = tmp;
      tmp = tmp->next;
    }
  if (max->previous)
    max->previous->next = max->next;
  else
    *list = max->next;
  if (max->next)
    max->next->previous = max->previous;
  item = max->content;
  free(max);
  return (void *) item;
}
