/*
** list_get_max.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_get_max(const t_list* list, fcmp fcmp)
{
  const t_list *max;

  if (!list)
    return NULL;
  max = list;
  list = list->previous;
  while (list)
    {
      if ((*fcmp)(list->content, max->content) > 0)
        max = list;
      list = list->next;
    }
  return (void *) list->content;
}
