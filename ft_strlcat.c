#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
   char dest[20] = "Une chaine";
   char src[] = "ceci est une chaine qui ne rentre pas dans dest";
 
   
   printf("%s\n", strncat(dest, src, 19));
 
   return 0;
}