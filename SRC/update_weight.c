//CHANGING WEIGHT
int increment;
int change_weight(struct box* b2 , int id, float new_weight)
{
  int x=increment;
 
 
 int i;
 for(i=0;i<x-1;i++)
 {
 if(id==b2->unique_id)
 {
   b2->weight=new_weight;
   return 1;
    
 }
 b2++;
 }
 return 0;
}
