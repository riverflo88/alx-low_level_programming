#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H

void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);


#endif
