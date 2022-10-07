#include <stdio.h>
int decomposer(int A){
	int s=0;
	while (A!=0){
	 s+=A%10;
	 A/=10;
	}
 if(s/10 != 0){
return decomposer(s);
 }
	 
	return s;
}

int main(){
	int n;
	//printf("%d",7/10);
	n=decomposer(513682);
	//n=decomposer(25);
/*	while(n/10!=0){
		n=decomposer(513682);
	}*/
	printf("%d",n);
}
