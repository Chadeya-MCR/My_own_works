#include <stdio.h>
 
int main () {

   /* an array with 3 rows and 3 columns*/
   int marks[3][3]=
   {
	   {70,60,48},
	   {37,63,84},
	   {82,80,51}
   };
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 3; i++ ) 
   {

      for ( j = 0; j < 3; j++ ) 
      {
         printf("marks[%d][%d] = %d\n", i,j, marks[i][j] );
      }
   }
   
   return 0;
}
