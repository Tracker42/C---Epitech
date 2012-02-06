/*
** list_clear.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_clear(t_list **list)
{
  t_list *next;
  t_list *delete;
  int i;

  if (!*list)
    return 0;
  i = 0;
  next = *list;
  while (next)
    {
      delete = next;
      next = next->next;
      free(delete);
      i++;
    }
  return i;
}
