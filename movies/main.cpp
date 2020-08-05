#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
  	Movies my;
	  my.display_m();
	  my.add_Movie("Hero","PG",2);
	  my.add_Movie("Gravity","PG",3);
	  my.add_Movie("Wanted","PG13",4);
	  my.noofmembers();
	  my.display_m();
	  return 0;
}
