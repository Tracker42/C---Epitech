/*
** list_reverse.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void list_reverse(t_list **list)
{
  t_list *current;
  t_list *next;

  if (list_length(*list) < 2)
    return;
  current = *list;
  next = current->next;
  while (current)
    {
      current->next = current->previous;
      current->previous = next;
      current = next;
      if (next)
        next = next->next;
    }
}
