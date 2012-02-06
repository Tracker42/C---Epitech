/*
** list_get_min.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_get_min(const t_list* list, fcmp fcmp)
{
  const t_list *min;

  if (!list)
    return NULL;
  min = list;
  list = list->next;
  while (list)
    {
      if ((*fcmp)(list->content, min->content) < 0)
        min = list;
      list = list->next;
    }
  return (void *) min->content;
}
