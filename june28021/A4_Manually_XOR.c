/*5. Do exclusive OR for 20,20,40,40,13,13,11,88,88,98,99,11,11 Manually.*/

#include<stdio.h>

int main()
{
  int arr[13]={20,20,40,40,13,13,11,88,88,98,99,11,11};
  int i;
  printf("Oddly repeated numbers are: \n"); 
  for(i=0; i<13; i=i+2)
  {
     if(arr[i]^arr[i+1]){
       printf("%d\n",arr[i]);
       --i;
      }
  }  
 return 0;
}

#if(0)

output:
Oddly repeated numbers are: 
11
98
99

#endif
