// 1. Write a program in C to display the first 10 natural numbers.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     for(int i = 0; i<=10; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// 2. Write a C program to compute the sum of the first 10 natural numbers.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int sum = 0;

//     for(int i = 0; i<=10; i++){
//         sum = sum + i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// 3. Write a program in C to display n terms of natural numbers and their sum.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num,sum = 0;
//     printf("Enter the number till you want to add:\n");
//     scanf("%d",&num);

//     for(int i = 0; i<=num; i++){
//         sum = sum + i;
//     }
//     printf("The sum till number '%d' is %d:",num, sum);
//     return 0;
// }

// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average

// #include <stdio.h>
// int main()
// {
//     int num,sum = 0;
//     printf("Enter the number till you want to add:\n");
//     scanf("%d",&num);

//     for(int i = 0; i<=num; i++){
//         sum = sum + i;
//     }
//     printf("The sum till number '%d' is %d\n",num, sum);
//     printf("The average of the number is '%d'\n",sum/num);
//     return 0;
// }

// 5. Write a program in C to display the cube of the number up to an integer.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num,cube;
//     printf("Enter the number till you want the cube root:\n");
//     scanf("%d",&num);

//     for(int i =1; i<=num; i++){
//         cube = i*i*i;
//         printf("The cube of %d is %d\n",i,cube);
//     }
//     return 0;
// }

// 6. Write a program in C to display the multiplication table for a given integer.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the number you want the table: " );
//     scanf("%d",&num);

//     for(int i = 1; i<11; i++)
//     {
//         printf("%d X %i = %d\n",num,i,num*i);
//     }
//     return 0;
// }

// 7. Write a program in C to display the multiplier table vertically from 1 to n.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num,last;
//     printf("Enter the number you want the table: " );
//     scanf("%d",&num);

//     printf("Enter the number till you want the table: " );
//     scanf("%d",&last);

//     for(int i = 1; i<=last; i++)
//     {
//         printf("%d X %i = %d\n",num,i,num*i);
//     }
//     return 0;
// }

// 8. Write a C program to display the n terms of odd natural numbers and their sum.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num, sum = 0;
//     printf("Enter the number till you want the sum:");
//     scanf("%d",&num);

//     for(int i = 1; i<=num+num; i++){
//         if(i % 2 != 0)
//         {
//             printf("%d\n",i);
//             sum = sum + i;
//         }
//         else{
//             continue;
//         }
//     }
//     printf("The sum of the odd number is: %d\n",sum);
//     return 0;
// }

// 9. Write a program in C to display a pattern like a right angle triangle using an asterisk. The pattern like :

// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of row:");
//     scanf("%d",&n);

//     for(i = 1; i<=n; i++){
//         for(j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 10. Write a C program to display a pattern like a right angle triangle with a number.

// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of row:");
//     scanf("%d",&n);

//     for(i = 1; i<=n; i++){
//         for(j = 1; j<=i; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of row:");
//     scanf("%d",&n);

//     for(i = 1; i<=n; i++){
//         for(j = 1; j<=i; j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12. Write a program in C to make such a pattern like a right angle triangle with the number increased by

// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter the number of row:");
//     scanf("%d",&n);

//     for(i = 0; i<=n; i++){
//         for(j = 0; j<=i; j++){
//             printf("%d",2+(i+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 13. Write a program in C to make a pyramid pattern with numbers increased by 1.
/* 1
  2 3
 4 5 6
7 8 9 10 */

// #include <stdio.h>  // Include the standard input/output header file.

/*int main() {
   int i, j, spc, rows, k, t = 1;  // Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers.

   printf("Input number of rows : ");  // Print a message to prompt user input.
   scanf("%d", &rows);  // Read the value of 'rows' from the user.
   spc = rows + 4 - 1;  // Calculate the initial number of spaces.

   for (i = 1; i <= rows; i++) {  // Start a loop to generate rows.
      for (k = spc; k >= 1; k--) {  // Loop to print spaces before the numbers.
         printf(" ");
      }

      for (j = 1; j <= i; j++) {  // Loop to print numbers based on the current row.
         printf("%d ", t++);  // Print the value of 't' and increment it.
      }

      printf("\n");  // Move to the next line for the next row.
      spc--;  // Decrement the number of spaces for the next row.
   }
    return 0;  // Indicate that the program has executed successfully.
}*/

// 15. Write a C program to calculate the factorial of a given number.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n,fac = 1;
//     printf("Enter the number you want the factorial: ");
//     scanf("%d",&n);

//     for(int i = 1; i<=n; i++){
//         fac = fac * i;
//     }
//     printf("%d\n",fac);
//     return 0;
// }

// 16. Write a C program to display the sum of n terms of even natural numbers.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num, sum = 0;
//     printf("Enter the number till you want the sum :");
//     scanf("%d",&num);

//     for(int i = 2; i<=num; i++){
//         if(i%2 == 0){
//             sum = sum + i;
//             printf("%d\n",i);
//         }
//         else{
//             continue;
//         }
//     }
//     printf("The sum of all even number is: %d",sum);
//     return 0;
// }

// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     float x, sum=1 , t=1 ,d;
//     int i,n;

//     printf("Enter the value of X:");
//     scanf("%f",&x);

//     printf("Enter the no. of terms:");
//     scanf("%d",&n);

//     for (i = 1; i < n; i++) {
//         d = (2 * i) * (2 * i - 1);  // Calculate the denominator for the term.
//         t = -t * x * x / d;        // Calculate the term value.
//         sum = sum + t;
//     }
//     printf("\nThe sum = %f\nNumber of terms = %d\nValue of x = %f\n", sum, n, x);
//     return 0;
// }

// 19. Write a program in C to display the n terms of a harmonic series and their sum. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     float sum = 0.0;
//     int n;
//     printf("Enter the no. of terms: ");
//     scanf("%d",&n);

//     for(int i = 1; i<=n; i++){
//         if(i<n){
//             printf("1/%d + ",i);
//             sum = sum + 1 / (float)i;
//         }
//         if (i==n)
//         {
//             printf("1/%d ", i);      // Print the last term without a plus sign.
//             sum =sum + 1 / (float)i;
//         }

//     }
//     printf("\nThe sum of the series upto %d term is: %f\n",n,sum);
//     return 0;
// }

// 20. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

/*#include <stdio.h> // Include the standard input/output header file.

int main() {
    long int n, i, t = 9; // Declare variables to store input, control loop indices, and temporary value.
    int sum = 0; // Initialize a variable to store the sum.

    printf("Input the number or terms :"); // Prompt the user for input.
    scanf("%ld", &n); // Read the value of 'n' from the user.

    for (i = 1; i <= n; i++) // Loop for the number of terms.
    {
        sum += t; // Add 't' to the sum.
        printf("%ld   ", t); // Print the current value of 't'.
        t = t * 10 + 9; // Update 't' for the next iteration.
    }

    printf("\nThe sum of the series = %d \n", sum); // Print the sum of the series.

    return 0; // Return 0 to indicate successful execution.
}*/

// 21. Write a program in C to print Floyd's Triangle.
/* 1
   01
   101
   0101
   10101*/

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n,p,q;
//    printf("Enter the no. of rows: ");
//    scanf("%d",&n);

//    for(int i = 1; i<=n; i++)
//    {
//       if(i% 2 == 0){
//          p = 1;
//          q = 0;
//       }
//       else{
//          q = 1;
//          p = 0;
//       }
//       for(int j = 1; j<=i; j++){
//          if(j% 2 == 0){
//             printf("%d",p);
//          }
//          else{
//             printf("%d",q);
//          }
//       }
//       printf("\n");
//    }

//    return 0;
// }

/*24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410 */

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int x,n;
//    printf("Enter the value of x: ");
//    scanf("%d",&x);

//    printf("Enter the no. of terms: ");
//    scanf("%d",&n);

//    return 0;
// }

// 25. Write a C program that displays the n terms of square natural numbers and their sum.1 4 9 16 ... n Terms

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n;
//    printf("Enter the no. till you want the sum of the square: ");
//    scanf("%d",&n);

//    int sum = 0;
//    for(int i =1; i<=n; i++){
//       sum = sum + i*i;
//       printf("%d\n",i*i);
//    }
//    printf("The sum of the square of natural no. till %d is %d",n,sum);
//    return 0;
// }

// 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n, sum = 0;
//    printf("Enter the number of terms:");
//    scanf("%d",&n);

//    for(int i = 1; i<=n; i++){
//       if(n%2 == 0){
//          sum = sum + 1;
//       }
//    }
//    return 0;
// }

// 25. Write a C program to print all natural numbers from 1 to n. – using while loop

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n;
//    scanf("%d",&n);
//    for (int i = 1; i<=n; i++){
//       printf("%d\n",i);
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int n;
//    printf("Enter the value :");
//    scanf("%d",&n);
//    int i = 0;
//    while(i<=n){
//       printf("%d\n",i);
//       i--;
//    }
//    return 0;
// }

// 27.Write a C program to print all alphabets from a to z. – using while loop

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    char a = 97;
//    while(a<=122){
//       printf("%c\n",a);
//       a++;
//    }
//    return 0;
// }

// 28. Write a C program to print all even numbers between 1 to 100. – using while loop

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num;
//    printf("Etner the value: ");
//    scanf("%d",&num);

//    int i = 2;
//    while(i<=num){
//       printf("%d\n",i);
//       i = i + 2;

//    }
//    return 0;
// }

// 28. Write a C program to print all odd number between 1 to 100. similarly like the even number that  i do upside.

// 29. Write a C program to find sum of all natural numbers between 1 to n.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n,sum =0;
//    printf("Enter the number: ");
//    scanf("%d",&n);
//    for(int i = 1; i<=n; i++){
//       sum = sum + i;
//    }
//    printf("%d\n",sum);
//    return 0;
// }

// 30. Write a C program to find sum of all even numbers between 1 to n.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n, sum = 0;
//    printf("Enter the number: ");
//    scanf("%d",&n);

//    int i = 0;
//    while(i<=n){
//       sum = sum + i;
//       i = i+ 2;
//    }
//    printf("%d",sum);
//    return 0;
// }

// 31. Write a C program to find sum of all odd numbers between 1 to n. similary as even as i do above code.

// 32. Write a C program to print multiplication table of any number.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n, mul = 1;
//    printf("Enter the number you want the table of : ");
//    scanf("%d",&n);

//    int i = 1;
//    while (i<11)
//    {
//       printf("%d X %d = %i\n",n,i,n*i);
//       i++;
//    }

//    return 0;
// }

// 32. Write a C program to count number of digits in a number.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int n1, count = 0;
//    printf("Enter the number: ");
//    scanf("%d",&n1);

//    while(n1>0){
//       count++;
//       n1 = n1/10;
//    }
//    printf("%d",count);
//    return 0;
// }

// 33. Write a C program to find first and last digit of a number.

// 34. Write a C program to swap first and last digits of a number.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num1,num2;
//    printf("Enter the number 1: ");
//    scanf("%d",&num1);

//    printf("Enter the number 2: ");
//    scanf("%d",&num2);

//    printf("Before swapping num1 = %d\n",num1);
//    printf("Before swapping num2 = %d\n",num2);
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;

//    printf("After swapping num1 = %d\n",num1);
//    printf("After swapping num2 = %d\n",num2);
//    return 0;
// }

// 35. Write a C program to calculate sum of digits of a number.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num;
//    int sum = 0;
//    printf("Enter the number: ");
//    scanf("%d",&num);

//    while(num > 0){
//       sum = sum + (num%10);
//       num = num/10;
//    }
//    printf("The sum of digits is %d",sum);
//    return 0;
// }

// 36. Write a C program to calculate product of digits of a number.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num,mul = 1;
//    printf("Enter the number: ");
//    scanf("%d",&num);

//    while (num>0)
//    {
//       mul = mul *( num%10);
//       num = num/10;
//    }
//    printf("%d",mul);

//    return 0;
// }

// 37. Write a C program that will find whether a given number is palindrome or not
// 38. Write a C program to enter a number and print its reverse.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num,rev= 0;
//    printf("Enter any number: ");
//    scanf("%d",&num);

//    while (num>0)
//    {
//       int last_digit = num%10;
//       rev = rev * 10;
//       rev = rev+last_digit;
//       num  = num/10;
//    }
//    printf("%d",rev);

//    return 0;
// }

// 38. Write a C program to check whether a number is palindrome or not.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int a,orig,rev=0;
//    printf("Enter the digit you want the palindrome of : ");
//    scanf("%d",&a);

//    orig = a;
//    while (a>0)
//    {
//       int last_digit = a%10;
//       rev = rev * 10;
//       rev = rev+last_digit;
//       a  = a/10;
//    }
//    if(rev == orig){
//       printf("Yes, this number is palindrome number");
//    }
//    else{
//       printf("No this number is not the palindrome number");
//    }
//    return 0;
// }

// write a code to reverse the value that is taken by the user.

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num,rev = 0;
//    printf("Enter thee number: ");
//    scanf("%d",&num);

//    while(num>0){
//       int last_digit = num%10;
//       rev = rev*10 + last_digit;
//       num = num/10;

//    }
//    printf("the reverse of the given number is : %d",rev);
//    return 0;
// }

// now also find the palindrome number by using the same concept of revese;

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num, rev = 0, orig;
//    printf("Enter the number that you want to find the palindrome of: ");
//    scanf("%d",&num);
//    orig = num;

//    while (num>0)
//    {
//       int last_digit = num%10;
//       rev  = rev*10 + last_digit;
//       num = num/10;
//    }
//    if(orig == rev){
//       printf("Yes, %d is the palindrome number because the revese of that number is %d",num,rev);
//    }
//    else{
//       printf("No, %d is not the palindrom number because the revse of that number is not equal to original numebr %d",num,rev);
//    }

//    return 0;
// }

// 39. Write a C program to enter a number and print it in words.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num, rev = 0;
//    printf("Enter any number but number should not contain any zero: ");
//    scanf("%d", &num);

//    while (num != 0)
//    {
//       int last_digit = num % 10;
//       rev = rev * 10 + last_digit;
//       num = num/10;
//    }

//    while (rev != 0)
//    {
//       switch (rev % 10)
//       {
//       case 0:
//          printf("zero\t");
//          break;
//       case 1:
//          printf("One\t");
//          break;
//       case 2:
//          printf("Two\t");
//          break;
//       case 3:
//          printf("Three\t");
//          break;
//       case 4:
//          printf("four\t");
//          break;
//       case 5:
//          printf("five\t");
//          break;
//       case 6:
//          printf("six\t");
//          break;
//       case 7:
//          printf("seven\t");
//          break;
//       case 8:
//          printf("eight\t");
//          break;
//       case 9:
//          printf("nine\t");
//          break;
//       }

//       rev = rev / 10;
//    }
//    return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//    for(char i = 97; i<=122; i++){
//       printf("%c\n",i);
//    }
//    return 0;
// }

// Find number of digits in a number

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num,count =0;
//    printf("Enter any number: ");
//    scanf("%d",&num);

//    for (int i = 1; i <= num; i++)
//    {
//       num = num%10;
//       count++;
//    }
//    printf("\nNumber of digits is %d.",count);

//    return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int num;
//    printf("Enter any numbner: ");
//    scanf("%d",&num);

//    for (int i = 1; i <= num; i++)
//    {
//       int last_digit = num%10;
//       if(i<1){
//          break;
//       }

//    }

//    return 0;
// }

// write a program to print the prime numbr and take the input from the user

// #include <stdio.h>
// int main()
// {
//    int num;
//    printf("Enter any number: ");
//    scanf("%d", &num);

//    if (num == 1)
//    {
//       printf("Not a prime number");
//    }
//    if (num > 1)
//    {
//       for (int i = 2; i <= num + 1; i++)
//       {
//          if (num % i == 0)
//          {
//             printf("Not a prime number");
//             break;
//          }
//       else
//          {
//             printf("Prime number");
//             break;
//          }
//       }
//    }
// }

// #include<stdio.h>
// int main()
// {
// 	int fact = 1,num;
// 	printf("Enter a number : ");
// 	scanf("%d",&num);
	
// 	if (num == 1 || num == 0){
// 		printf("The factorial is 1");
// 	}
// 	for(int i= 1; i<=num; i++){
// 		fact = fact * i;
// 	}
// 	printf("%d",fact);
// }

