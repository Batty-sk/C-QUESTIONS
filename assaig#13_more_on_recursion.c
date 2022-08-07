#include<stdio.h>
int user_input(){
	int n;
	scanf("%d",&n);
	return n;
}
int sum_of_first_N(int n){
	if(n>0){
		return n+sum_of_first_N(n-1);
	}
return 0;
}
int sum_of_first_oddN(int n){
	if(n>0){
		return (2*n-1)+sum_of_first_oddN(n-1);
	}
	return 0;
}
int sum_of_first_Nsq(int n){
	if(n>0){
		return (n*n)+sum_of_first_Nsq(n-1);
	}
	return 0;
}
int sum_of_digits(int n){
	if(n>0)
		{
			return n%10+sum_of_digits(n/10);
		}
	return 0;
}
int factorial_of_a_no(int n){
	if(n>1){
		return n*factorial_of_a_no(n-1);
	}
	return 1;
}
int fibonachi_series(int n){
	if(n>0){
		if(n==1){
			n=1+fibonachi_series(n-1);
		}
		else{
			n=fibonachi_series(n-1)+fibonachi_series(n-2);
		}
		
		return n;
			// sir ek hi varaible se try krr rha tha bnn to gya but .. print nhi ho para shi se :) 
	}
	return 0;
}
int hcf_of_two_nos(int x, int y){
		if(x>y){//60>45 T
			if(x%y==0){//F
				
				printf("The hcf is :%d",y);
				return 1;
			}
			x=x%y;//
		}
		else{
			if(y%x==0){
				printf("The hcf is x :%d",x);
				return 1;
			}
			y=y%x;
		}
		hcf_of_two_nos(x,y);
	}
	
int count_digits(int n,int count){
	if(n>0){
		return count_digits(n/10,count+1);//0 3
	}
	return count;
}
int power_of_a_no(int no,int power){
					//5		//
	if(power>0){//3
		return no*power_of_a_no(no,power-1);//5*1=5*5=25*5
	}
	return 1;//1
}
int main(){
	//@1-
	//printf("Enter the N for sum of first_N \n");
	//printf("sum: %d \n",sum_of_first_N(user_input()));
	//@2-
	//printf("Enter the N for sum of first_N odd nos \n");
	//printf("Sum: %d \n",sum_of_first_oddN(user_input()));	
	
	//@3-	
//	printf("Enter the N for sum of first_N square \n");
//	printf("Sum : %d \n",sum_of_first_Nsq(user_input()));
	//@4-
	
//	printf("Enter the NO for sum of its digits \n");
//	printf("Sum :%d\n",sum_of_digits(user_input()));
	
	//@5-
//	printf("Enter the No for factorial \n");
//	printf("Factorial : %d\n",factorial_of_a_no(user_input()));
	
	//@6-
	//printf("Enter the N for first N fibonachi series \n");
	//fibonachi_series(user_input());
	
	//@7-
//	printf("Enter Two nos for hcf \n");
//	hcf_of_two_nos(user_input(),user_input());
	
	//@8-
//	printf("Enter the N for digit counting \n");
//	printf("The nos has %d digits \n",count_digits(user_input(),0));
	
	//@9-
	printf("Enter a number and its power \n");
	printf("The power of that given no is %d \n",power_of_a_no(2,5));
	}
