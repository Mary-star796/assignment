//for whileloop
#include<stdio.h>
int main(){
	int i=1,sum=i;//start
	while(i<=50){//stop
		printf("%d\n",i*i);
		i++;//step
		sum=sum+i;
	}
	{printf("the sum  is %d",sum);}
	return 0;
}