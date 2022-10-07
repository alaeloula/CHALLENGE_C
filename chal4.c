#include <stdio.h>
#include <math.h>
void amst(int a){
	int c=a,t=0,r;
	int s=0,b=a;
	while(a>=0){
		a =a/10;
		t++;
	}
	while(c!=0){
		r=c/10;
		c=c/10;
		s+=pow(r,t);
	}
	//s+=pow(c,t+1);
	if(s==b){
		printf("true");
	}else{
		printf("false");
	}
	
}
int main(){
	amst(153);
	return 0;
}
