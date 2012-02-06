/*
** list_pop_begin.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void *list_pop_begin(t_list **list)
{
  const void *item;
  t_list *delete;

  if (!*list)
    return NULL;
  delete = *list;
  item = delete->content;
  if (delete->next)
    {
      delete->next->previous = NULL;
      *list = delete->next;
    }
  else
    *list = NULL;
  free(delete);
  return (void *) item;
}
