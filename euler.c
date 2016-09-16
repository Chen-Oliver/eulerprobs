#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPalindrome(int p){
  int orig = p;
  int reversed = 0;
  while(p){
    reversed = 10 * reversed + (p%10);
    p/=10;
  }
  if(reversed == orig)return 1;
  else return 0;
}
//Problem #4: largest palindrome from multiplying two 3-digit numbers
int solvePalindrome(){
  short i,j;
  int max=0;
  for(i=999;i>99;i--){
    for(j=i;j>99;j--){
      int p = i*j;
      if(p>max && isPalindrome(p))max = p;
    }
  }
  return max;
}
int isPrime(int n){
  int i;
  for(i = 2;i<=sqrt(n);i++){
    if(n % i==0) return 0;
  }
  return 1;
}
//Problem 10: Sum of primes less than 2 million
long sumPrime(){
  long sum;
  int i;
  for(int i=2;i<2000000;i++){
    if(isPrime(i))sum += i;
  }
  return sum;
}
int main(){
  printf("%d\n",solvePalindrome()); //906609
  printf("%ld\n",sumPrime()); //142913828922
  return 0;
}
