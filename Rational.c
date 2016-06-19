#include<stdio.h>
#include<conio.h>
typedef struct{
	int numerator;
	int denomenator;
}rational;
rational makerational(int, int);
rational add_rational(rational, rational);
rational mul_rational(rational, rational);
int equichk(rational, rational);
void main()
 {
 	rational r1=makerational(2,5);
 	rational r2=makerational(2,5);
 	rational sum=add_rational(r1,r2);
 	rational mul=mul_rational(r1,r2);
	 printf("The result is \n%d\n__\n\n%d\n",sum.numerator,sum.denomenator);
	 printf("The result is \n%d\n__\n\n%d\n",mul.numerator,mul.denomenator);
	 if (equichk(r1,r2)==1)
	 {
	 	printf("The rational numbers are equivalent\n");
	 }
	 else{
	 	printf("The rational numbers are not equivalent\n");
	 }
 };

   
  rational makerational(int a, int b)
  {
  	rational r_number;
  	r_number.numerator=a;
  	r_number.denomenator=b;
  	return r_number;
  }
  
  rational add_rational(rational a, rational b)
  {
  	rational result;
  	result.numerator=(a.numerator*b.denomenator)+(b.numerator*a.denomenator);
  	result.denomenator=a.denomenator*b.denomenator;
  	return result;
  }
  rational mul_rational(rational a, rational b)
  {
  	rational result;
  	result.numerator=(a.numerator*b.numerator);
  	result.denomenator=a.denomenator*b.denomenator;
  	return result;
  }
  int equichk(rational a, rational b)
  {
  	if((a.numerator==b.numerator)&&(a.denomenator==b.denomenator))
  	return (1);
  }
