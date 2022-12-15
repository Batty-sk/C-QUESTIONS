#include<stdio.h>
float area_of_circle(int radius)
{
	return 3.14*(radius*radius);
}
int odd_or_even(int no){
	if(no&1){
		return 0;
	}
	return 1;
}
void first_N_natural_nos(int n){
	if(n>0){
		first_N_natural_nos(n-1);
		printf("%d ",n);
	}
}
void first_N_odd_natural_nos(int n){
	if(n>0){
		first_N_odd_natural_nos(n-1);
		printf("%d ",2*n-1);
	}
}

int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
	}
	return 1;
}
int Digit_present_or_not(int no, int digit){
	if(no>0){
		if(no%10==digit){
			return 1;
		}
		Digit_present_or_not(no/10,digit);
	}
	return 0; 
}
void prime_factor(int no)
{
	int i=2;
	while(no>1)
	{
		if(no%i==0){
			printf("%d ",i);//117 3 39 , 3 13 
			no=no/i;
			i=1;
		}
		i++;
	}
}		
int main()
{
//@1-
/*printf("Enter the radious of an circle \n");
int r;
scanf("%d",&r);
printf("The area of the circle is %f",area_of_circle(r));	
*/
//@2-


//@3-
/*
printf("Enter A no \n");
int no;
scanf("%d",&no);
odd_or_even(no);*/

//@4-
/*
printf("Enter the N for n natural nos \n");
int n;
scanf("%d",&n);
first_N_natural_nos(n);
*/

//@5-
/*
printf("Enter the N for n odd natural nos \n");
int n;
scanf("%d",&n);
first_N_odd_natural_nos(n);*/

//@6-
/*
printf("Enter the no to know its factorial \n");
int no;
scanf("%d",&no);
factorial(no);
*/

//@9-
/*
printf("Enter a no and a digit \n");
int no, digit;
scanf("%d%d",&no,&digit);
Digit_present_or_not(no,digit);
*/
//@10-
printf("Enter The no to know its prime factors \n");
int no;
scanf("%d",&no);
prime_factor(no);

}
