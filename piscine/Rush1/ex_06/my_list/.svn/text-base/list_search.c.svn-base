/*
** list_search.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_search(const t_list *list, const void *reference, fcmp fcmp)
{
  int position;

  if (!list)
    return -1;
  position = 0;
  while (list)
    {
      if (!(*fcmp)(list->content, reference))
        return position;
      list = list->next;
      position++;
    }
  return -1;
}
