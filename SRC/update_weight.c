//CHANGING WEIGHT

int change_weight(struct box* b1 , int id, float new_weight)
{
  
 
 
 int i;
 for(i=0;i<num;i++)
 {
 if(id==b1->unique_id)
 {
   b1->weight=new_weight;
   return 1;
    
 }
 
 }
 return 0;
}
