/*
** list_length.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

int list_length(const t_list *list)
{
  int length;

  if (!list)
    return 0;
  length = 1;
  while ((list = list->next))
    length++;
  return length;
}
