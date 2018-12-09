void floydstr(int rows) {
  int i,  c, a = 1;
  for (i = 1; i <= rows; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
}


