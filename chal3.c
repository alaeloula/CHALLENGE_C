#include <stdio.h>
int* aaaa(int a,int b){
	int tab[100],n,i;
	if(a>b){
		for(i=2;i<=a/2;i++){
			if(a%i==0 && b%i==0){
				tab[n]=i;
				n++;
			}
		}
	}
	if(a<b){
		for(i=2;i<=b/2;i++){
			if(a%i==0 && b%i==0){
				tab[n]=i;
				n++;
			}
		}
	}
	return tab;
}
int main(){
	int *tab,i;
	tab=aaaa(24,18);
	for(i=0;i<3;i++){
      printf("%d \t",tab[i]);
  }
	
}
