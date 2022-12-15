#include<stdio.h>
int user_input(){
	printf("Enter The N \n");
	int no;
	scanf("%d",&no);
	return no;
}
void first_n_natural(int n){
	if(n>0){
		first_n_natural(n-1);
		printf("%d\n",n);
	}
}
void first_n_natural_rev(int n){
	if(n>0){
		printf("%d\n",n);
		first_n_natural_rev(n-1);
	
	}
}
void first_n_odd_natural_no(int n){
	if(n>0){
		first_n_odd_natural_no(n-1);
		printf("%d\n",2*n-1);
	}
}
void first_n_odd_natural_no_rev(int n){
	if(n>0){
		printf("%d\n",2*n-1);
		first_n_odd_natural_no_rev(n-1);
	
	}
}
void first_n_even_natural_no(int n){
	if(n>0){
		first_n_even_natural_no(n-1);
		printf("%d\n",2*n);
	}
}
void first_n_even_natural_no_rev(int n){
	if(n>0){
		printf("%d\n",2*n);
		first_n_even_natural_no_rev(n-1);

	}
}
void square_of_N_nos(int n){
	if(n>0){
		square_of_N_nos(n-1);
		printf("%d\n",(n*n));
	}
}
void Decimal_to_binary(int n){
	if(n>0){
		Decimal_to_binary(n/2);
		if(n%2==0){
			printf("%d ",0);
		}
		else{
			printf("%d ",1);
		}
	}
}
void Decimal_to_Octal(int n){
	if(n>0){
		Decimal_to_Octal(n/8);
		printf("%d ",n%8);
	}
}
void Reverse_of_N(int n){
	if(n>0){
		printf("%d",n%10);
		Reverse_of_N(n/10);
	}
}
int main(){
	//@1-
	//first_n_natural(user_input());
	//@2
	//first_n_natural_rev(user_input());
	//@3-
	//first_n_odd_natural_no(user_input());
	//@4-
	//first_n_odd_natural_no_rev(user_input());
	//@5-
	//first_n_even_natural_no(user_input());
	//@6-
	//first_n_even_natural_no_rev(user_input());
	//@7-
	//square_of_N_nos(user_input());
	//@8-
//	printf("Enter the Decimal no \n");
//	Decimal_to_binary(user_input());
	//@9-
	//Decimal_to_Octal(user_input());
	//@10-
	Reverse_of_N(user_input());
	
	// Done ..................
	
}
