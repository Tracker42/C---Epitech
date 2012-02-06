/*
** list_pop_to.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_pop_to(t_list **list, int position)
{
  const void *item;
  t_list *delete;

  if (!*list)
    return NULL;
  delete = *list;
  while (delete)
    {
      if (position == 0)
        {
          item = delete->content;
          if (delete->previous)
            delete->previous->next = delete->next;
          else
            *list = delete->next;
          if (delete->next)
            delete->next->previous = delete->previous;
          free(delete);
          return (void *) item;
        }
      position--;
      delete = delete->next;
    }
  return NULL;
}
