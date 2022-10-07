// Online C compiler to run C program online
#include <stdio.h>

int *trie (int *tab, int n)
{
  int index,i,j,tmp;
  for (i=0; i < (n-1); i++)
  {
    index = i;
   
    for (j=i + 1; j < n; j++)
    {
      if (tab[index] > tab[j])
        index = j;
    }
    if (index != i)
    {
      tmp = tab[i];
      tab[i] = tab[index];
      tab[index] = tmp;
    }
  }
  return tab;
}

int main ()
{
  int tab[5] = { 3, 1, 5, 7, 9};
  int *tab2,i;
  tab2=trie(tab,5);
  for(i=0;i<5;i++){
      printf("%d \t",tab2[i]);
  }
  return 0;
}
