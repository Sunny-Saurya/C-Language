//1. program to find the first 10 natural number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     i = 1;
//     while(i<=10)
//     {
//         cout<<i<<endl;
//         i++;
        
//     }
// }

//2. program to find the sum of the first 10 natural numbers.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,sum =0;
//     i = 1;

//     while(i<=10)
//     {
//         sum = sum +i;
//         i++;

//     }
//     cout<<sum;
// }

//****************OR take input from user**************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i,sum =0;
//     cout<<"Enter the number ";
//     cin>>n;

//     i = 1;

//     while(i<=n)
//     {
//         sum = sum +i;
//         i++;

//     }
//     cout<<sum;
// }

// 3. program and find the perfect number between 1 to 500.

/*#include<iostream>
using namespace std;

int main()
{
    int i = 1,u = 1, sum = 0;

    while(i<=500)
    {
        while(u<=500)
        {
            if(u<i)
            {
                if(i %u == 0)
                {
                    sum = sum + u;
                }
                u++;
            }
        }
        if(sum == i)
        {
            cout<<i<<endl;
        }
        i++;
        
        u = 1;
        sum = 0;
    }

    return 0;
}*/

// 4. write a number a find whether the number is prime or composite.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i,count = 0;
//     cout<<"Enter any number that you want to check"<<endl;
//     cin>>n;

//     i = 1;

//     while(i<=n)
//     {
//         if(n % i == 0){
//             count++;
//         i++;
            
//         }
//     }
//  if(count == 2)
//  {
//     cout<<"it is a prime number"<<endl;

//  }
// else{
//     cout<<"composite number"<<endl;
    
//  }
// }

// 5. find a prime number witg the range of 1 to 100

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,count = 0, j = 1;
//     i = 1;

//     for( ; i<=100 ; i++){
//         if(i)
//     }
// }

// 6. write a program oof the factorial.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int fac = 1,n;
//     cout<<"Enter the number that you want to check the the factorial.";
//     cin>>n;

//     while(n>0){
//         fac = fac *n;
//         n--;
//     }

//     cout<<"factoeila of given numeber is "<<fac;
// }

// 7. find the sum of the digits of a given number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0, n;
//     cout<<"Enter the number that you want to add";
//     cin>>n;

//     while(n>0)
//     {
//         sum = sum + (n%10);
//         n = n/10;
//     }

//     cout<<"sum of the given numbers of digit is ==> "<<sum;
//     return 0;
// }

// 8. find the product of the given numeber.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int pro = 1, n;
//     cout<<"enter the number ==> ";
//     cin>>n;

//     while(n>0)
//     {
//         pro = pro * (n%10);
//         n = n/10;
//     }

//     cout<<"product of  the given number is ==> "<<pro;
// }

// 9. Write a program to find the sum of the even and product of odd number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0, pro = 1, n;
//     cout<<"Enter any number";
//     cin>>n;

//     while(n>0)
//     {
//         if(n % 2 == 0)
//         {
//             sum = sum + (n%10);
//         }
//         else
//         {
//             pro = pro * (n%10);
//         }
//     n = n/10;
//     }
//     cout<<"The sum of even digit is ==> "<<sum<<endl;
//     cout<<"The product of odd digit is ==> "<<pro<<endl;
// }

//10. Write the program of reverse the number.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int rev = 0, n;
//     cout<<"Enter the number";
//     cin>>n;

//     while(n>0)
//     {
//         rev = (rev*10)+ (n%10);
//         n = n/10;
//     }
//     cout<<"The reverse of the given number is ==> "<<rev;
    
// }

// 11. Write a program to find whether the number is palindrom or not.

// #include<iostream>
// using namespace  std;

// int main()
// {
//     int org,n,rev =  0;
//     cout<<"Enter any number";
//     cin>>n;

//     org = n;

//     while(n>0)
//     {
//         rev =( rev *10 )+ (n%10);
//         n = n/10;
//     }
//     if(org == rev)
//     {
//         cout<<"Yes"<<" n "<<"is palindrome number";
//     }
//     else
//     {
//         cout<<"no"<<n<<"is not palindrome number";
//     }

// }

//12. print multiplication table of 24,50 and 29.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,num;
//     cout<<"Enter the number that you want to know the table";
//     cin>>num;

//    for(i = 1; i<=10; i++){
//     cout<<num<<'*'<<i<<'='<<num*i<<endl;
//    }

// }

//13. Take 10 integers from the user and print their  average.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0, num, i;

//     for(i = 1; i<=10; i++)
//     {
//         cout<<"enter a number"<<endl;
//         cin>>num;

//         sum = sum + num;
        
//     }

//     cout<<"The average is ==> "<<sum/10;
// }

// 14. Fibbonacci series 

/*#include<iostream>
using namespace std;

int main(){
    int x,y,z,n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    x = 0;
    y = 1;
    z = 0;

    while(z<=n)
    {
        cout<<"\n"<<z;
        x = y;
        y = z;
        z = x + y;

    }
    
    return 0;
}*/

// 15. Fibbonacci series.
/*#include<iostream>
using namespace std;

int main(){
    int x,y,z,n,count;
    cout<<"Enter the number of terms";
    cin>>n;

    x = 0;
    y = 1;
    z = 0;
    count = 0;
    while(count<=n)
    {
        cout<<"\n"<<z;
        x = y;
        y = z;
        z = x + y;
        count++;
    }
    return 0;
}*/

// 16. Write a program to calculate x^y.

/*#include<iostream>
using namespace std;

int main(){
    int x,y,i,pro = 1;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;

    i = 1;

    while(i<=y)
    {
        pro = pro * x;
        i++;
    }
    cout<<"The final calculated value is==> "<<pro;
    return 0;
}*/

//17. ODD Even by goto statement.

/*#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;

    if(a % 2 == 0)
    {
        goto even;
    }
    else{
        goto odd;
    }

    even:
    cout<<"The given numebr is even number";
    return 0;

    odd:
    cout<<"The given number is odd number ";
    return 0;
}*/

// 18. break statement.

/*#include<iostream>
using namespace std;

int main(){
    for(int i = 2; i <=100; i = i + 2)
    {
        cout<<i<<endl;
        if(i == 54){
        break;
    }
    }
    
    return 0;
}*/

//19. Continue statment;

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 1; i<100; i++)
//     {
//         if(i == 55){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

//20. 