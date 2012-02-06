/*
** list_add_begin.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_add_begin(t_list **list, const void *item)
{
  t_list *node;
  t_list *begin;

  node = list_create(item);
  begin = *list;
  node->next = begin;
  if (begin)
    begin->previous = node;
  *list = node;
  return 0;
}
