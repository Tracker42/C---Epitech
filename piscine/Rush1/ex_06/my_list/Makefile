##
## Makefile for my_list in /home/epitech/c/my_list
##
## Made by claude ramseyer
## Login   <ramsey_c@epitech.net>
##
## Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
## Last update mon Oct 31 10:00:01 2011 claude ramseyer
##

LIB=	libmy_list.a
LIBDIR=	../
HEAD=	my_list.h
HEADDIR=../
CC=	gcc
CFLAGS=
LDFLAGS=
RM=	rm -f
CP=	cp
OBJ=	$(SRC:.c=.o)
SRC=	list_add.c \
	list_add_begin.c \
	list_add_end.c \
	list_add_sort.c \
	list_add_to.c \
	list_clear.c \
	list_clone.c \
	list_create.c \
	list_extract.c \
	list_get.c \
	list_get_begin.c \
	list_get_end.c \
	list_get_max.c \
	list_get_min.c \
	list_get_to.c \
	list_head.c \
	list_is_empty.c \
	list_length.c \
	list_map.c \
	list_pop.c \
	list_pop_begin.c \
	list_pop_end.c \
	list_pop_max.c \
	list_pop_min.c \
	list_pop_to.c \
	list_print.c \
	list_reverse.c \
	list_search.c \
	list_sort.c \
	list_tail.c \
	list_to_tab.c

all: $(LIB) install

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

install:
	$(CP) $(LIB) $(LIBDIR)
	$(CP) $(HEAD) $(HEADDIR)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)
