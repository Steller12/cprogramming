#include<stdio.h>
#include<math.h>
//int main(){
//	int a=5;
//	int d=++a;
//	int b=5;
//	char c=(char)b;
//	&& is AND operator || is OR gate and ! is NOT gat
//++a first increment then use the value and a++ id first use the original value then increment same with --a and a--
//10<<2 is left shift and 10>>2 is right shift
//	printf("%d\n",sizeof(a));
//	printf("%d\n",c);
//	printf("%d\n%d",d,a);
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("%d\n",a);
//	printf("%d",b);
//	int a=9;
//	int c=--a - a--;
//	printf("%d %d",c,a);
//
//	scanf("%s",&a);
//	printf("Hello world!\n%s",a)
//	int a=(1,2,3,4,5);
//	double b;
//	printf("%d",a);
//	printf("%d,%d\n",sizeof(a),sizeof(b));
//	float pi=3.14;
//	int c=(int)pi;
//	printf("%d",c);
//	char ch;
//	char s[100];
//	char sen[100];
//	scanf("%c",ch);
//	scanf("\n");
//	scanf("%s",s);
//	scanf("\n");
//	gets(sen);
//	printf("%c\n%s\n%s",ch,s,sen);
//	int a;
//	int b;
//	int c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	scanf("%d",&c);
//	if(a>b && a>c)
//	if(b>c)
//	printf("%d is second largest",b);
//	else
//	printf("%d is second largest",c);
//	else if(b>a && b>c)
//	if(a>c)
//	printf("%d is second largest",a);
//	else
//	printf("%d is second largest",c);
//	else
//	if(a>b)
//	printf("%d is second largest",a);
//	else
//	printf("%d is second largest",c);
//	int a=84,b=34,c=97,d=58,e=64;
//	int f=(a+b+c+d+e)/5;
//	if (f>=80 && a<=100)
//	printf("A");
//	else if(f>=60 && f<=79)
//	printf("B");
//	else if(f>=40 && f<=59)
//	printf("C");
//	else
//	printf("D");
//	int a=5;
//	a%2==0?printf("even"):printf("odd");
//int a;
//scanf("%d",&a);
//switch(a)
//{
//	case 1:
//		printf("jan");
//		break;
//	case 2:
//		printf("feb");
//		break;
//	case 3:
//		printf("march");
//		break;
//	case 4:
//		printf("april");
//		break;
//	case 5:
//		printf("may");
//		break;
//	case 6:
//		printf("june");
//		break;
//	case 7:
//		printf("july");
//		break;
//	case 8:
//		printf("aug");
//		break;
//	case 9:
//		printf("sep");
//		break;
//	case 10:
//		printf("oct");
//		break;
//	case 11:
//		printf("nov");
//		break;
//	case 12:
//		printf("dec");
//		break;
//	default:
//		printf("invalid input");
//		break;
//}
//	int a,b;
//	char c;
//	printf("Enter the opperation you want to perform:");
//	scanf("%c",&c);
//	printf("Enter first number:");
//	scanf("%d",&a);
//	printf("Enter second number:");
//	scanf("%d",&b);
//	switch(c)
//	{
//		case '+':
//			printf("%d",a+b);
//			break;
//		case '-':
//			printf("%d",a-b);
//			break;
//		case '*':
//			printf("%d",a*b);
//			break;
//		case '/':
//			printf("%d",a/b);
//			break;
//	}
//	int a;
//	scanf("%d",&a);
//	int b=1;
//	while (b<11){
//		printf("%d * %d = %d\n",a,b,a*b);
//		b=b+1;
//	}
//	int a;
//	scanf("%d",&a);
//	int b=1;
//	int sum=0;
//	while (b<a){
//		if (a%b==0)
//		sum=sum+b;
//		b=b+1;
//	}
//	if (sum==a)
//	printf("%d is a perfect number",a);
//	else
//	printf("%d is not a perfect number",a);
//	int n,sum=0;
//	scanf("%d",&n);
//	while (n>0){
//		sum=sum+n;
//		n=n-1;
//	}
//	printf("%d",sum);
//in for loop we start with initialization(giving value to a temporary variable) 2nd giving conditions to that variable and 3rd i.e. iteration or updation after a loop how should it add or sub to the variable 
//	int i,j;
//	for (i=1;i<=5000;i++){
//		printf("%d\n",i);
//	}
//factorial of a number using for loop
//	int n,i,fact=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	printf("%d",fact);
//	int i=10;
//	do{
//		printf("%d\n",i);
//		i++;
//	}while(i<21);
//	reverse a number
//find if the given number is armstrong or not
//	int num,remainder,reverse=0;
//	scanf("%d",&num);
//	while (num > 0)
//    {
//        remainder = num % 10;
//        reverse = reverse * 10 + remainder;
//        num /= 10;
//    }
//    printf("%d",reverse);
//	int a,b=0,c,d;
//	scanf("%d",&a);
//	d=a;
//	while (d!=0){
//		c=d%10;
//		b=b+pow(c,3);
//		d=d/10;
//	}
//	printf("%d\n",b);
//	if(a==b)
//	printf("armstrong");
//	else
//	printf("not");
//}
//void sum(){
//	int a,b;
//	printf("enter the values:");
//	scanf("%d %d",&a,&b);
//	printf("sum=%d",a+b);
//}
//void main(){
//	sum();
//}
//void fact(){
//	int a,i;
//	printf("enter the values:");
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		if(a%i==0)
//		printf("%d\n",i);
//		else
//		continue;
//	}
//}
//void main(){
//	fact();
//}
//void count(){
//	int a,count=0;
//	printf("enter a number");
//	scanf("%d",&a);
//	while(a!=0){
//		a=a/10;
//		count++;
//	}
//	printf("%d",count);
//}
//void main(){
//	count();
//}
//int func(){
//	int i,a,sum=0;
//	scanf("%d",&a);
//	for(i=0;i<a;i++){
//		sum=sum+i;
//	}
//	return sum;
//}
//void main(){
//	int c=func();
//	printf("%d",c);
//}
//create 2 userdefined function one function to check if the given number is positive or negative and if the value is positive return the value to another function whether it is even and odd
//#include<math.h>
//int pos();
//int eve();
//int pos(){
//	int a;
//	scanf("%d",&a);
//	if(a>0){
//		printf("positive\n");
//		return a;
//	}
//	else{
//		printf("negative\n");
//		return a;
//	}
//}
//int ev(){
//	int b=pos();
//	if(b%2!=0)
//	{
//		printf("odd");
//		return b;
//	}
//	else{
//		printf("even");
//		return b;
//	}
//}
//void main(){
//int c=ev();
//	printf(c);
//}
//int sum(int a);
//int main(){
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	printf("%d",sum(n));
//}
//int sum(int a){
//	if(a==1)
//	return 1;
//	else
//	return a + sum(a-1);
//}
//recurssion function to find factorial of a number
//int fact(int a);
//int main(){
//	int n;
//	printf("Enter the number");
//	scanf("%d",&n);
//	printf("%d",fact(n));
//}
//int fact(int a){
//	if(a==0)
//	return 1;
//	else
//	return a * fact(a-1);
//}
//int fibonacci(int n);
//int main()
//{
//    int n, i;
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//    printf("Fibonacci series: ");
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", fibonacci(i));
//    }
//    return 0;
//}
//int fibonacci(int n)
//{
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//        return (fibonacci(n - 1) + fibonacci(n - 2));
//}
//int main(){
//	int a=6,b=7;
//	printf("%d %d %d %d %d %d",--a,a--,(b--)-a,a+b,a--,++b);
//	return 0;
//}
//int main()
//{
//    while(1)    
//    {
//        printf("RABBIT");
//        break;
//    }
//    
//    return 0;
//}

//int main()
//{
//    int a=5;
//    
//    while(a=123)    
//    {
//        printf("RABBIT\n");
//    }
//    printf("GREEN");
//    printf("%d\n",a);
//    
//    return 0;
//}
//int main()
//{
//    int k, j;
//    j = 10;
//    for(k=1; k <= 5; k++)
//    {
//        printf("%d ", (k+j));
//    }
//
//    return 0;
//}
//int main()
//{
//    int k;
//    for(;;)
//    {
//        printf("TESTING\n");
//        break;
//    }
//
//    return 0;
//}
//int main(){
//	int a=10;
//	printf("%X%x%ci%x",11,10,'s',12);
//}
//int main(){
//	int i,j,k,l;
//	int a[7]={1,2,3,4,5,6,7};
//	l=0;
//	for(i=0;i<7;i++){
//		if (i%2==0)
//		printf("%d\n",a[i]);
//		else
//		continue;
//	}
//}
int main(){
	int i,j,k,l;
	scanf("%d %d %d",&j,&k,&l);
	int a[3]={j,k,l};
	int b[3]={};
	for(i=0;i<3;i++){
		b[i]=a[i]*2;
		printf("%d\n",b[i]);
	}
}
