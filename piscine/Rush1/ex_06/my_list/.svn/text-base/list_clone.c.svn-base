/*
** list_clone.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

t_list *list_clone(const t_list *list)
{
  t_list *clone;
  t_list *current;

  if (!list)
    return NULL;
  current = list_create(list->content);
  clone = current;
  list = list->next;
  while (list)
    {
      current->next = list_create(list->content);
      current = current->next;
      list = list->next;
    }
  return clone;
}
