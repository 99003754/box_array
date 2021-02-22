#include "main.h"

int specific_color(struct box *ptr,char *Spec_Color)
{
int count = 0;
    
for(int k=0;k<=noOfRecords;k++)
{ 
    if(!strcmp(ptr->color,Spec_Color))
        {
        //printf("%d %f %f %f %s %f", *(ptr + j)->unique_id, *(ptr + j)->length,*(ptr+j)->breadth,*(ptr+j)->height,*(ptr+j)->color,*(ptr+j)->weight);
        count += 1;
        }
    ptr++;
}
printf("%d",count);
}

 

 