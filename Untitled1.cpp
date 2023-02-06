#include<stdio.h>
int main(){
//	int a=5;
//	int d=++a;
//	int b=5;
//	char c=(char)b;
//	&& id AND operator || is OR gate and ! is NOT gat
//++a first increment then use the value and a++ id first use the original value then increment same with --a and a--
//	printf("%d\n",sizeof(a));
//	printf("%d\n",c);
//	printf("%d\n%d",d,a);
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}
