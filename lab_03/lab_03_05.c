#include <stdio.h>
int main(void)
{
   int x;
   printf("Dwse enan akeraio\n");
   scanf("%d",&x);
   if( (x>>1)%2==0 && (x>>3)%2==0 && (x>>5)%2==0 && (x>>7)%2==0 )
      {  
         printf("0\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2==0 && (x>>5)%2==0 && (x>>7)%2!=0 )
      {  
         printf("1\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2==0 && (x>>5)%2!=0 && (x>>7)%2==0 )
      {  
         printf("1\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2==0 && (x>>5)%2!=0 && (x>>7)%2!=0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2!=0 && (x>>5)%2==0 && (x>>7)%2==0 )
      {  
         printf("1\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2!=0 && (x>>5)%2==0 && (x>>7)%2!=0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2!=0 && (x>>5)%2!=0 && (x>>7)%2==0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2==0 && (x>>3)%2!=0 && (x>>5)%2!=0 && (x>>7)%2!=0 )
      {  
         printf("3\n");
      }  
   else if( (x>>1)%2!=0 && (x>>3)%2==0 && (x>>5)%2==0 && (x>>7)%2==0 )
      {  
         printf("1\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2==0 && (x>>5)%2==0 && (x>>7)%2!=0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2==0 && (x>>5)%2!=0 && (x>>7)%2==0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2==0 && (x>>5)%2!=0 && (x>>7)%2!=0 )
      {  
         printf("3\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2!=0 && (x>>5)%2==0 && (x>>7)%2==0 )
      {  
         printf("2\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2!=0 && (x>>5)%2==0 && (x>>7)%2!=0 )
      {  
         printf("3\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2!=0 && (x>>5)%2!=0 && (x>>7)%2==0 )
      {  
         printf("3\n");
      }
   else if( (x>>1)%2!=0 && (x>>3)%2!=0 && (x>>5)%2!=0 && (x>>7)%2!=0 )
      {  
         printf("4\n");
      }

   return 0;
}
