// this is a c++ code that check and calculate the sum of prime nunbers within a range
#include <iostream> usingnamespacestd;
boolcheckPrime(intnumberToCheck)
{
    if(numberToCheck==1) {
      return false;
    }c
    for(inti=2;i*i<numberToCheck;i++) {
        if(numberToCheck %i==0) {
            return false;
        }
    }
    return true;
}

//method to iterate the loop from l to r 
//ifn the current number is prime,sum the value
intprimeSum(intl,intr)
{
    intsum=0;
    for(inti=r;i>=i-) {

  //check for prime
  boolisPrime=checkPrime(i);
  if(isPrime){

    sum=sum+i
   }
  }
  return sum;
}

intmain ()
{
    intl=2,r=23;
    cout<<primeSum(l,r);
}
