// #include<stdio.h>
// void func1()
// {
//     register int a = 10;
// 	printf("\n a = %d",a);
	
// }
// void func2()
// {
//     register int a =20;
// 	printf("\n a = %d",a);
// }
// int main()
// {
//     register int a  = 30;
// 	func1();
// 	func2();
// 	printf("\n a = %d",a);
// 	return 0;
// }

// #include<stdio.h>
// static int name = 100;
// void fun()
// {
// 	printf("%d\n",name);
// }
// int main()
// {
// 	static int name;
// 	printf("%d\n",name);
// 	fun();
// }

// #include<stdio.h>
// void function();
// int main()
// {
// 	function();
// 	function();
// 	function();
// 	return 0;
// }
// void function()
// {
// 	static int a = 10;
// 	static int b =10;
// 	printf("\n Value of a:%d, Value of b:%d",a,b);
// 	a++;
// 	b++;
// }

// #include<stdio.h>
// void first();
// int main()
// {
// 	extern int x ;
// 	printf("\nx = %d",x);
// 	first();
// 	printf("\n x = %d",x);
// 	return 0;

// }
// void first()
// {
// 	extern int x;
// 	printf("\nx  = %d",x);
// 	x = x + 10;
// }
// int x = 1000;

// You are using GCC
int evenFibSum(int n)
{
    int n1 = 0;
    int n2 = 1;
    int n,n3,sum = 0;
    if(n<2)
    {
        printf("0");
    }
    else{
        for(int i = 1; i<=n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
    }
    for(int j = 1; j<=n3; j++)
    {
        if(j%2 == 0)
        {
            sum = sum + j;
        }
    printf("%d",sum);
    }
}
int main()
{
    int x;
    evenFibSum(x);
}