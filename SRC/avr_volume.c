double avr_volume(struct box *b3,int x)
{
  int i=0;
  double volume=0;
  for(i=0;i<=x;i++)
  {
    volume=volume+((b3->length)*(b3->breadth)*(b3->height));
    b3++;
  }
  return (volume/x+1);
}
