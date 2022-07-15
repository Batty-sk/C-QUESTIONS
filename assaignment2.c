#include<stdio.h>
#include<conio.h>
void Find_the_unit_digit(){
	printf("Enter A Number :\n");
	int no;
	scanf("%d",&no);
	printf("The Unit Digit of no %d is %d \n",no,no%10);
}
void Print_the_digits(){
	printf("Enter A Number :\n");
	int no;
	scanf("%d",&no);
	printf("No %d Without its last digit =%d \n",no,no/10);
	
}
void Swap_the_values_using_3rd_varaible(){
	int a,b,c;
	printf("Enter the values of a and b \n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Values after swapping a=%d , b=%d \n",a,b);
}
void Swap_the_values_without_using_3rd_varaible(){
	int a,b;
	printf("Enter the values of a and b \n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after swapping : %d %d \n",a,b);

}
void Sum_of_three_digits(){
	int no;
	printf("Enter the 3 digit number \n");
	int sum=0;
	scanf("%d",&no);//123
	while(no>0){
		sum=(no%10)+sum;
		no=no/10;//12
	}
	printf("Sum of digits of a number is : %d \n",sum);
}
void Show_the_ascii(){
	printf("Enter a Character \n");
	char a=getch();
	printf("The ascii value character %c is %d \n",a,a);
}
void Find_the_first_LSB()
{
	printf("Enter a no to find its first lsb \n");
	int no;
	int pos=1;
	scanf("%d",&no);//32
	while(no>=1){//8>1 4>1 2>1 
		if(no%2!=0){//8%2!=0 F 4%2==0 F  2%2==0 1%2==1 T
			printf("The first 1 is at %d position from lsb \n",pos);
			break;
		}
		no=no/2;//4 2 1
		pos++;//2
	}
}
void Odd_or_even_Bitwise(){
	printf("Enter a number \n");
	int no;				    //>> 5 =   101 >> 1 0
	scanf("%d",&no); //2      >> 1 = 00010 
	if(no&1){
		printf("Its an odd no :\n");
	}
	else{
		printf("Its an even no :\n");
	}
}
void Print_the_sizes(){
	printf("%d size of int :\n",sizeof(int));
	printf("%d size of char :\n",sizeof(char));
	printf("%d size of float :\n",sizeof(float));
	printf("%d size of double :\n",sizeof(double));
}
void change_the_last_digit_Tozero(){
	int no;
	printf("Enter a no \n");
	scanf("%d",&no);
	no=no/10;
	no=no*10;
	printf("After changing the value :%d \n",no);
}
void Append_the_digit(){
	printf("Enter a number and a digit \n");
	int no,digit;
	scanf("%d %d",&no,&digit);
	no=no*10+digit;
	printf("after appending  it : %d \n",no);
}
void convert_it_into_USD(){
	printf("Enter The INR \n");
	float inr;//135.32 -76.23 
	int usd=0;
	scanf("%f",&inr);
	while(inr>=76.23){
			inr=inr-76.23;//59.09
			usd++;//1
	}
	printf("USD: %d.%f \n",usd,inr);// 1+
}
void rotate_the_digits(){
	printf("Enter the 3 digit no \n");
	int three_digits;
	scanf("%d",&three_digits);//123
	int last_digit;
	last_digit=three_digits%10;
	three_digits=last_digit*100+(three_digits/10);//
	printf("After rotating the no by 1 position : %d \n",three_digits);
}
main(){
	//@1-
	Find_the_unit_digit();
	//@2-
	Print_the_digits();
	//@3-
	Swap_the_values_using_3rd_varaible();
	//@4-
	Swap_the_values_without_using_3rd_varaible();
	//@5-
	Sum_of_three_digits();
	//@6-
	Show_the_ascii();
	//@7-
	Find_the_first_LSB();
	//@8-
	Odd_or_even_Bitwise();
	//@9-
	Print_the_sizes();
	//@10-
	change_the_last_digit_Tozero();
	//@11-
	Append_the_digit();
	//@12-
	convert_it_into_USD();
	//@13-
	rotate_the_digits();
}
