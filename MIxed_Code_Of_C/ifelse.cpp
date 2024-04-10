// write a program to find the odd and even number.

/*#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any number to check odd or even ==> "<<endl;
    cin>>num;

    if(num % 2 == 0){
        cout<< num << "Even number"<<endl;
    }
    else{
        cout<< num << "odd number"<<endl;
    }

    return 0;
}*/

// 2. write a program to find the maximum number.

#/*include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the two number to find the max and min"<<endl;
    cin>>num1>>num2;

    if(num1 > num2){
        cout<< num1 << "is maximum number then"<<num2<<endl;
    }
    else{
        cout<< num2 << "is maximum number then"<<num1<<endl;
    }

    return 0;
}*/

// 3. write a program to find the given num is neg, pos or zero.

/*#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any  number "<<endl;
    cin>>a;

    if(a > 0){
        cout<<a<<" positive number"<<endl;
    }  
    else if(a < 0){
        cout<<a << "Negetive number "<<endl;
    }  
    else{
        cout<<a<<" zero "<<endl;
    }

    return 0;
}*/

// 4. Write a function to compute the square of the given number. if the num is -ve it throws an error.

/*#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any positive number"<<endl;
    cin>>num;

    if(num > 0){
        cout<< "The square of the given number" << (num) << "is" << num*num;

    }
    else{
        cout<<"Enter the valid number "<<endl;
    }

    return 0;
}*/

// 5. Write a C++ program that determines a students grade. the program will read three type of scores Is it midtermfinal score and determine the grade based on the following.

/*#include<iostream>
using namespace std;

int main()
{
    float q,m,f;

    cout<<"Enter the marks in quiz"<<endl;
    cin>>q;

    cout<<"Enter the marks in mid term"<<endl;
    cin>>m;

    cout<<"Enter the marks in final term"<<endl;
    cin>>f;

    float avg;
    avg = (q + m + f)/3;

    if(avg >= 90){
        cout<<"Result : grade is A" <<endl;

    }
    else if(avg >= 70 && avg <= 80){
        cout<<"Result : grade is B" <<endl;

    }

    else if(avg >= 50 && avg <= 70){
        cout<<"Result : grade is C" <<endl;
    }

    else {
        cout<<"Result : grade is F"<<endl;
    }

    return 0;

}*/

// 6.Write program to take up value from the user as input electricity and calculate total electricity bill according to the given condition

/*#include<iostream>
using namespace std;

int main()
{

    int unit;
    cout<<"Enter your electricity unit"<<endl;
    cin>>unit;

    int sc = unit * 0.20;  // surcharges of 20% additional charge

    if(unit < 50){
        cout<<"Total electricity bill is ==> "<< unit*0.50 + sc <<endl;
    }

    else if(unit > 50 && unit < 150){
        cout<<"Total electricity bill is ==> "<< unit*0.75 + sc <<endl;
    }

    else if(unit > 150 && unit < 250){
        cout<<"Total electricity bill is ==> "<< unit*1.20 + sc <<endl;
    }

    else if(unit > 250){
        cout<<"Total electricity bill is ==> "<< unit*1.50 + sc <<endl;
    }

    return 0;

}*/

// 7. Write a program to input angles of a triangle and check whether the triangle is valid or not.

/*#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;
    cout<<"Enter  the three angles of a triangle"<< endl;
    cin>>a1>>a2>>a3;

    int sumofangle = a1 + a2 + a3;

    int angles = 180;

    if(sumofangle == 180){
        cout<<"it is a valid triangle"<<endl;
    }

    else{
        cout<<"it is invalid triangle"<<endl;
    }

    return 0;
}*/

// 8. Write a program to check whether the character is an alphabet or not.

/*#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any charecter"<<endl;
    cin>>ch;

    if(ch >='a' && ch <='z'){
        cout<<ch<<"is alphabet"<<endl;
    }

    else if(ch >='A' && ch <='Z'){
        cout<<ch<<"is alphabet"<<endl;
    }

    else
    {
        cout<<"Enter a valid input"<<endl;
    }

    return 0;
}*/

// 9. take the input of five subject marks from the user and calcualte the percentage amd grade as following 

/*#include<iostream>
using namespace std;

int main()
{
    int phy,che,bio,math,comp;
    cout<<"Enter the marks of physics"<<endl;
    cin>>phy;

    cout<<"Enter the marks of chemistery"<<endl;
    cin>>che;

    cout<<"Enter the marks of biology"<<endl;
    cin>>bio;

    cout<<"Enter the marks of maths"<<endl;
    cin>>math;

    cout<<"Enter the marks of computer"<<endl;
    cin>>comp;

    int total;
    total = phy + che + bio + math + comp;
    cout<<"Total is "<<total<<endl;

    float per;
    per = total/5.0;

    cout<<"Your percentage is ==>"<<per<<endl;

    if(per >=90){
        cout<<"Result : grade is A"<<endl;
    }

    else if(per >=80 && per <90){
        cout<<"Result : grade is B"<<endl;
    }

    else if(per >=70 && per < 80){
        cout<<"Result : grade is C"<<endl;
    }

    else if(per >=60 && per < 70){
        cout<<"Result : grade is D"<<endl;
    }

    else if(per >=40 && per <60 ){
        cout<<"Result : grade is F"<<endl;
    }

    else {
        cout<<"Result : sorry you are fail"<<endl;
    }

    return 0;

}*/

// 10. takee input any character from the user and check whether it is alpha,digit,special char.

/*#include<iostream>
using namespace std;

int main()
{
    char h;
    cout<<"Enter any character it may  be digit,alpha or special char"<<endl;
    cin>>h;

    if((h >= 'a'&& h <= 'z') || (h >= 'A' && h <= 'Z')){
        cout<<h<< "is a alphabet"<<endl;
    }

    else if(h>='0'&& h <= '9'){
        cout<<h<<"is a digit"<<endl;
    }

    else{
        cout<<h<<"is a special chaarater"<<endl;
    }
    return 0;
}*/

// 11. check whether the numberr is prime no. or composite number.

/*#include<iostream>
using namespace std;

int main()
{
    int  n,x, count = 0;
    cout<<"Enter any number "<<endl;
    cin>>n;
    x = 1;

    for( x = 1 ; x<=n; x++){

        if(n%x == 0)
        count++;
    }

    if(count == 2){
        cout<<n<<" prime number "<<endl;
    }
    else{
        cout<<n<<"composite number"<<endl;
    }

    return 0;
}*/

// take hours and minute form the user and find whether it is AM or PM.

/*#include<iostream>
using namespace std;

int main()
{
    int h;
    cout<<"Enter the hours"<<endl;
    cin>>h;

    if(h>=12 && h<=24 ){
        cout<<h<<"PM";
    }

    else{
        cout<<h<<"it is AM";
    }
    return 0;

}*/

// 12. write a program to swap the values  if the both variable are not same.

/*#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    if( a != b){
        a = a + b;
        b = a - b;
        a = a - b;

        cout<<"After swapping the  values"<<"value of a is :"<<a<<"value of b is :"<<b;
    }
    else{
        cout<<"The two number is same";
    }

    return 0;

}*/

// 13. program to update even numberr into its upper nearest odd number.

/*#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a even number "<<endl;
    cin>>num;

    if(num %2 == 0){
        cout<<"The upper nearest odd number is ==> "<<num+1;

    }
    else{
        cout<<"Enter the valid number "<<endl;

    }

}*/

// 14. calculate profit or loss by using the if-else statement.

/*#include<iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout<<"Enter the selling price"<<endl;
    cin>>sp;

    cout<<"Enter the cost price"<<endl;
    cin>>cp;

    if(sp>cp){

        int profit = sp - cp;
        cout<<"profit"<<profit<<endl;
    }

    else if(cp>sp){

        int loss = cp - sp;
        cout<<"loss"<<loss<<endl;
    }

    else{
        cout<<"no profit no loss"<<endl;
    }
    return 0;
}*/

//write a program to convert centimeter into meter and kilometer.

/*#include<iostream>
using namespace std;

int main()
{
    float centimeter;
    cout<<"Enter the cm"<<endl;
    cin>>centimeter;

    int choice;

    cout<<"Enter 1 for meter and 2 for kilometer"<<endl;
    cin>>choice;


    float meter;
    meter = centimeter/100;

    float kilometer;
    kilometer = centimeter/100000;

    if(choice == 1){
        cout<<"the length of the meter is"<<meter<<endl;
    }

    else if(choice == 2){
        cout<<"The length of the kilometer is"<<kilometer<<endl;
    }

    else{
        cout<<";Invalid choice"<<endl;
    }

    return 0;

}*/

// 15. write a program to imput the basic salary of an employee and calculate its gross salary.

// Dearness allowance(Da) = is given out to employee to reduce the impact of inflation on  employess.

// House Rent allowance(hra) = is a part f their salary structure.

// Gross salary = is the monthly or yearly salary before any deduction are made from it. 
#include<iostream>
using namespace std;

int main()
{
    int salary,da,hra,grosssalary;
    cout<<"Enter you actuall monthly salary"<<endl;
    cin>>salary;

    if(salary <=10000)
    {
        hra =salary*20/100;
        da = salary*80/100;
        grosssalary = salary + da + hra;
    }

    else if(salary <=20000)
    {
        hra =salary*25/100;
        da = salary*90/100;
        grosssalary = salary + da + hra;

    cout<<"The gross salary of the employee is ==> "<<grosssalary;
    }

    else if(salary >20000)
    {
        hra =salary*30/100;
        da = salary*95/100;
        grosssalary = salary + da + hra;
    
    cout<<"The gross salary of the employee is ==> "<<grosssalary;
    }

    else 
    {
        cout<<"You have no salary"<<endl;
    }

    return 0;
}



