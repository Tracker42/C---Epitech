/*
** list_add.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_add(t_list **list, const void *item, t_order order)
{
  if (order == LIST_BEGIN)
    return list_add_begin(list, item);
  else if (order == LIST_BEGIN)
    return list_add_end(list, item);
  else
    return 0;
}
