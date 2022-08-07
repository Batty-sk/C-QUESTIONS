#include<stdio.h>
void mysirg(){
	int i=5;
	while(i>0){
		printf("MySirG \n");
	}
}
void print_natural_no(){
	int i=1;
	while(i<11){
		printf("%d ",i);
		i++;
	}
	printf("\n");
	//in reverse
	while(i>0){
		i--;
		printf("%d ",i);
	}
}
void odd_natural_nos(){
	int i=1;
	while(i<=10){
		printf("%d ",2*i-1);
		i++;	
	}
	printf("\n");
	i=20;
	//in reverse
	while(i>0){
		printf("%d ",--i);//1
		i--;//0
	}
}
void even_natural_nos(){
	int i=2;
	while(i<=20){
		printf("%d ",i);
		i+=2;
	}
	printf("\n");
	//reverse order;
	i=0;
	while(i<10){
		printf("%id ",10*2-(i*2));//20-3+3=14
		i++;//3
	}
}
void squares_of_natural_nos(){
	int i=1;
	printf("squares of natural nos \n");
	while(i<=10){
		printf("%d ",(i*i));
		i++;
	}
}
void cube_of_natural_nos(){
	int i=1;
	printf("The cube of natual nos \n");
	while(i<=10){
		printf("%d ",(i*i*i));
		i++;
	}
	printf("\n");
}
void print_the_tables(){
	int i=1;
	printf("Table of 5 \n");
	while(i<=10){
		printf("%d ",5*i);
		i++;
	}
}
int main(){
	//@1-
//	mysirg();
	//@2,3-
//	print_natural_nos();
	//@4,5-
//	odd_natural_nos();
	//@6,7-
//	even_natural_nos();
    //@8-
//    squares_of_natural_nos();
    //@9-
    cube_of_natural_nos();
    //@10-
    print_the_tables();
}
