 #include "main.h"
 int increment;
 int search(struct box *b2,int search_id)
 {
    int x=increment;
     int i;

     for(i=0;i<x-1;i++)
     {
         if(search_id==b2->unique_id)
         {
             //printf("\ngiven  id %d ");
             //printf("Length =%d",b2->length );
             //printf("breadth =%d",b2->breadth );
             //printf("Weight =%d",b2->weight );
             //printf("Height =%d",b2->height );
             //printf("Colour=%s",b2->color );
             return 1;

         }
         else{
             printf("\ngiven id %d not found   ",search_id);
             
         }
         b2++;
         
     }
     return 0;

 }