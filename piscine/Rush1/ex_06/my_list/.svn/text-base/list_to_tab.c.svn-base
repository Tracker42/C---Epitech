/*
** list_to_tab.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

void **list_to_tab(const t_list *list)
{
  void **tab;
  int length;

  length = list_length(list);
  if (!length)
    return NULL;
  if (!(tab = malloc((length + 1) * sizeof(*tab))))
    return NULL;
  tab[length] = NULL;
  length = 0;
  while (list)
    {
      tab[length++] = (void *) list->content;
      list = list->next;
    }
  return tab;
}
