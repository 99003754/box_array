#include "main.h"

float max_height(struct box *ptr)
{
float max=ptr->height;
for(int k=0;k<=noOfRecords;k++)
{
    if((ptr->height) > max)
    {
        max = ptr->height;
    }
    ptr++;
    }
    printf("%f",max);
}
}