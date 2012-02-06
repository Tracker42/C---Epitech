/*
** list_create.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_extract(const t_list *list, const void *reference, fcmp fcmp)
{
  while (list)
    {
      if ((*fcmp)(list->content, reference) == 0)
        return (void *) list->content;
    }
  return NULL;
}
