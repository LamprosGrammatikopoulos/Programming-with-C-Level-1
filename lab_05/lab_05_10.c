#include <stdio.h>

#define rows 3
#define cols 4

int main(void)
{
   int x[rows][cols],i,j;
   
   for(i=0; i<rows; i=i+1)
      {
         for(j=0; j<cols; j=j+1)
            {
               printf("Dwste to stoixeio x[%d][%d]: \n",i,j);
               scanf("%d",&x[i][j]);
            } 
      }

   printf("\n");
   
   for(i=0; i<rows; i=i+1)
      {
         for(j=0; j<cols; j=j+1)
            {
               printf("x[%d][%d] : %d\n",i,j,x[i][j]);
            } 
      }

   printf("\n");
   
   if(x[0][0]>=x[0][1] && x[0][0]>=x[0][2] && x[0][0]>=x[0][3])
      {
         x[0][1]=x[0][0];
         x[0][2]=x[0][0];
         x[0][3]=x[0][0];
      }
   
   else if(x[0][1]>=x[0][0] && x[0][1]>=x[0][2] && x[0][1]>=x[0][3])
      {
         x[0][0]=x[0][1];
         x[0][2]=x[0][1];
         x[0][3]=x[0][1];
      }

   else if(x[0][2]>=x[0][0] && x[0][2]>=x[0][1] && x[0][2]>=x[0][3])
      {
         x[0][0]=x[0][2];
         x[0][1]=x[0][2];
         x[0][2]=x[0][2];
      }

   else if(x[0][3]>=x[0][0] && x[0][3]>=x[0][1] && x[0][3]>=x[0][2])
      {
         x[0][0]=x[0][3];
         x[0][1]=x[0][3];
         x[0][2]=x[0][3];
      }
   
   if(x[1][0]>=x[1][1] && x[1][0]>=x[1][2] && x[1][0]>=x[1][3])
      {
         x[1][1]=x[1][0];
         x[1][2]=x[1][0];
         x[1][3]=x[1][0];
      }
   
   else if(x[1][1]>=x[1][0] && x[1][1]>=x[1][2] && x[1][1]>=x[1][3])
      {
         x[1][0]=x[1][1];
         x[1][2]=x[1][1];
         x[1][3]=x[1][1];
      }

   else if(x[1][2]>=x[1][0] && x[1][2]>=x[1][1] && x[1][2]>=x[1][3])
      {
         x[1][0]=x[1][2];
         x[1][1]=x[1][2];
         x[1][2]=x[1][2];
      }

   else if(x[1][3]>=x[1][0] && x[1][3]>=x[1][1] && x[1][3]>=x[1][2])
      {
         x[1][0]=x[1][3];
         x[1][1]=x[1][3];
         x[1][2]=x[1][3];
      }
   
   if(x[2][0]>=x[2][1] && x[2][0]>=x[2][2] && x[2][0]>=x[2][3])
      {
         x[2][1]=x[2][0];
         x[2][2]=x[2][0];
         x[2][3]=x[2][0];
      }
   
   else if(x[2][1]>=x[2][0] && x[2][1]>=x[2][2] && x[2][1]>=x[2][3])
      {
         x[2][0]=x[2][1];
         x[2][2]=x[2][1];
         x[2][3]=x[2][1];
      }

   else if(x[2][2]>=x[2][0] && x[2][2]>=x[2][1] && x[2][2]>=x[2][3])
      {
         x[2][0]=x[2][2];
         x[2][1]=x[2][2];
         x[2][2]=x[2][2];
      }

   else if(x[2][3]>=x[2][0] && x[2][3]>=x[2][1] && x[2][3]>=x[1][2])
      {
         x[2][0]=x[2][3];
         x[2][1]=x[2][3];
         x[2][2]=x[2][3];
      }


   for(i=0; i<rows; i=i+1)
      {
         for(j=0; j<cols; j=j+1)
            {
               printf("x[%d][%d] : %d\n",i,j,x[i][j]);
            } 
      }

   printf("\n");

   return 0;
}