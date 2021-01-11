#include "stdio.h"
#include "stdard.h"

float avarage(int n_args){

va_list mylist; // define
va_start (mylist,n_args); // n_args stores in mylist

int muNumbers=va_arg(mylist,int);   // get next value
va_end(mylist)   // distriy our defination 

}
