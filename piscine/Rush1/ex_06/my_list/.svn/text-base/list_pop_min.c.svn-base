/*
** list_pop_min.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_pop_min(t_list** list, fcmp fcmp)
{
  t_list *tmp;
  t_list *min;
  const void *item;

  if (!*list)
    return NULL;
  min = *list;
  tmp = min->next;
  while (tmp)
    {
      if ((*fcmp)(tmp->content, min->content) > 0)
        min = tmp;
      tmp = tmp->next;
    }
  if (min->previous)
    min->previous->next = min->next;
  else
    *list = min->next;
  if (min->next)
    min->next->previous = min->previous;
  item = min->content;
  free(min);
  return (void *) item;
}
