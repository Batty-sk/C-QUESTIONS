#include<stdio.h>
int user_input(){
	int a;
	scanf("%d",&a);
	return a;
}
void mysirg(){
	printf("Enter the n for first n times \n");
	int i=user_input();
	while(i>0){
		printf("MySirG \n");
		i--;
	}
}
void print_natural_nos(){
printf("Enter the n for first n natural nos \n");
	int i=1;
	int n=user_input();
	while(i<=n){
		printf("%d ",i);
		i++;
	}
	printf("\n");
	//in reverse
	printf("Enter the n for first n natural nos in reverse \n");
	i=user_input();
	while(i>0){
		printf("%d ",i);
		i--;
	}
}
void odd_natural_nos(){
	int i=1;
printf("Enter the N for first n odd nos \n");
	int n=user_input();
	while(i<=n){
		printf("%d ",2*i-1);
		i++;	
	}
	printf("\n");
printf("Enter the N for first n odd nos in reverse order \n");
		
	i=user_input()*2;
	
	//in reverse
	while(i>0){
		printf("%d ",--i);//1
		i--;//0
	}
}
void even_natural_nos(){
	int i=2;
	printf("Enter the N for first n even nos \n");
	int n=user_input();
	while(i<=n*2){
		printf("%d ",i);
		i+=2;
	}
	printf("\n");
	//reverse order;
	printf("Enter the N for first n even nos in reverse order \n");
	n=user_input();
	i=0;
	while(i<n){
		printf("%d ",n*2-(i*2));//20-3+3=14
		i++;//3
	}
}
void squares_of_natural_nos(){
	int i=1;
	printf("Enter the 'TO' range for square nos\n");
	int n=user_input();
	while(i<=n){
		printf("%d ",(i*i));
		i++;
	}
}
void cube_of_natural_nos(){
	int i=1;
	printf("Enter the 'TO' range for cube nos \n");
	int n=user_input();
	while(i<=n){
		printf("%d ",(i*i*i));
		i++;
	}
	printf("\n");
}
void print_the_tables(){
	int i=1;
	printf("Enter a no \n");
	int a=user_input();
	while(i<=10){
		printf("%d ",a*i);
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
//    cube_of_natural_nos();
    //@10-
    print_the_tables();
}
