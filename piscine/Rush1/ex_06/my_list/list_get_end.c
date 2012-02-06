/*
** list_get_end.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_get_end(const t_list *list)
{
  if (!list)
    return NULL;
  while (list->next)
    list = list->next;
  return (void *) list->content;
}
