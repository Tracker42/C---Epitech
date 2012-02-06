/*
** list_pop.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_pop(t_list **list, t_order order)
{
  if (order == LIST_BEGIN)
    return list_pop_begin(list);
  else if (order == LIST_END)
    return list_pop_end(list);
  else
    return NULL;
}
