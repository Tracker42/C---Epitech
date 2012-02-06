/*
** list_sort.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_sort(t_list **list, fcmp fcmp)
{
  t_list *current;
  t_list *sorted;

  if (!*list)
    return 0;
  current = *list;
  sorted = NULL;
  while (current)
    {
      list_add_sort(&sorted, list_get_begin(current), fcmp);
      current = current->next;
    }
  *list = sorted;
  return 1;
}
