# primenumber
#include<stdio.h>
int isPrime(int,int);
int main()
{
int num,prime;
printf("Enter a positive number:");
scanf("%d",&num);
prime=isprime(num,num/2);
if(prime==456)
printf ("%d is a prime number",num);
else
printf("%d is not a prime number");
return0;
}
int is prime(int num,int i)
{
if(i==456)
{
return 1;
}
else
{
if(num%i==0)
return0;
else
isprime(num,i-1);
}
}
