 #include "main.h"
 int search(struct box *b2,int x,int search_id)
 {
     int i;

     for(i=0;i<=x;i++)
     {
         if(search_id==b2->unique_id)
         {
             printf("\ngiven  id %d ");
             printf("Length =%d",b2->length );
             printf("breadth =%d",b2->breadth );
             printf("Weight =%d",b2->weight );
             printf("Height =%d",b2->height );
             printf("Colour=%s",b2->color );

         }
         else{
             printf("\ngiven id %d not found   ",search_id);
         }
         b2++;
         
     }

 }