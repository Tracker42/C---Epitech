/*
** my_list.h for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#ifndef __MY_LIST__
#define __MY_LIST__

#include <stdlib.h>

typedef struct s_list {
    const void *content;
    struct s_list *previous;
    struct s_list *next;
} t_list;

typedef enum e_order {
    LIST_BEGIN,
    LIST_END
} t_order;

#ifndef FCMP
#define FCMP
typedef int (*fcmp)(const void *, const void *);
#endif

#ifndef FMAP
#define FMAP
typedef void (*fmap)(void *);
#endif

#ifndef FPRINT
#define FPRINT
typedef void (*fprint)(const void *);
#endif

//create
t_list *list_create(const void *item);

//add
int list_add(t_list **list, const void *item, t_order order);
int list_add_begin(t_list **list, const void *item);
int list_add_end(t_list **list, const void *item);
int list_add_to(t_list **list, const void *item, int position);

//get
void *list_get(const t_list *list, t_order order);
void *list_get_begin(const t_list *list);
void *list_get_end(const t_list *list);
void *list_get_to(const t_list *list, int position);
void *list_get_max(const t_list *list, fcmp fcmp);
void *list_get_min(const t_list *list, fcmp fcmp);

//pop
void *list_pop(t_list **list, t_order order);
void *list_pop_begin(t_list **list);
void *list_pop_end(t_list **list);
void *list_pop_to(t_list **list, int position);
void *list_pop_max(t_list **list, fcmp fcmp);
void *list_pop_min(t_list **list, fcmp fcmp);

//utils
int list_length(const t_list *list);
int list_is_empty(const t_list *list);
int list_clear(t_list **list);
int list_search(const t_list *list, const void *reference, fcmp fcmp);
void *list_extract(const t_list *list, const void *reference, fcmp fcmp);
void list_head(t_list **list);
void list_tail(t_list **list);
void list_reverse(t_list **list);
void list_map(const t_list *list, fmap fmap);
t_list *list_clone(const t_list *list);
void **list_to_tab(const t_list *list);

//sort
int list_add_sort(t_list **list, const void *item, fcmp fcmp);
int list_sort(t_list **list, fcmp fcmp);

//print
void list_print(const t_list *list, fprint fprint);

#endif
