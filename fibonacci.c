#include <stdio.h>

void fibonacci(int size)
{
   unsigned long long array[size];
   array[0] = 0;
   array[1] = 1;
   int i;
   if(size < 3)
   {
      printf("The %dth number of fibonacci sequence is %llu\n", size, array[size-1]);
   }
   else
   {
      for(i=2; i<size; i++)
      {
         array[i] = array[i-2] + array[i-1];
	 if(i == size - 1)
	 {
     		 printf("The %dth number of fibonacci sequence is %llu\n", i+1, array[i]);
	 }
      }
      //debug only
      /*for(i=0; i<size; i++)
      {
	      if(i == size-1)
	      {
         		printf("The %dth number of fibonacci sequence is %llu\n", i+1, array[i]);
	      }
      }*/
      //printf("The %dth number of fibonacci sequence is %llu\n", i+1, array[i]);
   }
}

int main() 
{
   int n;
   printf("Enter the sequence of number :\n");
   scanf("%d", &n);
   fibonacci(n);
   return 0;
}

