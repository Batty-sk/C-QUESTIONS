#include<stdio.h>
#include<conio.h>
int find_the_positive_or_negative(){
	int no;
	printf("Enter A No \n");
	scanf("%d",&no);
	if(no>=0){
		printf("its a positive no\n");
		return 1;
	}
	printf("its a negative no\n");
}
int No_is_divi_by_5()
{
	int no;
	printf("Enter A no \n");
	scanf("%d",&no);
	if(no%5){
		printf("Not divisible by 5\n");
		return;
	}
	printf("Divisible by 5 \n");
}
int Odd_or_even(){
	int no;
	printf("Enter A no \n");
	scanf("%d",&no);
	if(no&1){
		printf("Its a odd no \n");
	}
	else{
		printf("Its an even no \n");
	}
}
int Odd_or_even_without_using_(){
	int no;
	printf("Enter A no \n");
	scanf("%d",&no);
	if(no&1){
		printf("Its a odd no \n");
	}
	else{
		printf("Its an even no \n");
	}
}
void Three_digit_or_not(){
	printf("Enter A no \n");
	int no;//123
	int cnt=0;
	scanf("%d",&no);
	while(no>0){
		no=no/10;
		cnt++;
	}
	(cnt==3)?printf("Its a Three digit no\n"):printf("Its a %d digit no \n",cnt);
}
void Which_is_greater(){
	int no1,no2;
	printf("Enter two nos \n");
	scanf("%d %d",&no1,&no2);
	if(no1>no2){
		printf("%d is greater \n",no1);
	}
	else if(no1==no2){
		printf("%d Both are same \n");
	}
	else{
		printf("%d is greater \n",no2);
	}
}
int leap_year_or_not(){
	int year;
	printf("Enter a year \n");
	scanf("%d",&year);
	if(year%4==0){
		if((year%100)){
			printf("its a leap year \n");
			return 1;
		
		}
	}

		printf("its not a leap year \n");
		return 0;	
}
int greatest_no(){
	int no1,no2,no3;
	printf("Enter 3 nos  \n");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2){
		if(no1>no3){
			printf("%d is greatest \n",no1);
		}
		else{
			printf("%d is greatest \n",no3);
		}
	}
	else if(no2>no3){
		printf("%d is greatest \n",no2);
	}
}
int profit_or_loss(){
	printf("Enter the cost price: \n");
	float cp;
	scanf("%d",&cp);
	printf("Enter the selling price :\n");
	float sp;
	scanf("%d",&sp);
	if(sp>cp){
		printf("You gain profit of %f %% \n",((sp-cp)/cp)*100);//100 
		}
	else{
		printf("You loss %f %% \n",(cp-sp)/cp*100);
	}
}
int pass_or_fail(){
	printf("Enter the marks of The student \n");
	int i;
	int arr[5];
	int sum=0;
	for(i=0;i<5;i++){
		printf("Enter the marks of sub %d out of 100 \n",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	if(sum/5>33){
		printf("You're pass");
	}
	else{
		printf("Better luck next time \n");
	}
}
int check_the_case(){
	printf("Enter a Alphabet \n");
	char a=getch();
	if(a>=97){
		printf("Lower Case \n");
	}
	else{
		printf("Upper Case \n");
	}
}
int is_divisible(){
	int no;
	printf("Enter a no \n");
	scanf("%d",&no);                                    //001100
	if(no%3==0 && !(no&1)){//12%3=0 and 12%2=0
		printf("Its divisible by 3 and 2 \n");
		}
	else{
		printf("Its not divisible \n");
	}
}
void is_divisible_or(){
	int no;
	printf("Enter a no \n");
	scanf("%d",&no);
	if(no%7==0 || no%3==0){
		printf("Its divisible by 7 or 3 \n");
	}
	else{
		printf("Its not divisible \n");
	}
}
void is_positive_or(){
	printf("Enter a number \n");
	int no;
	scanf("%d",&no);
	if(no>0){
		printf("positive no \n");
		
	}
	else if(no==0){
		printf("Zero \n");
	}
	else{
		printf("Negative \n");
	}
}
void given_char_is_what(){
	printf("Enter a character \n");
	char a=getch();
	if(a>=97 && a<124){
		printf("lower case aplphabet \n");	
	}
	else if(a>=48 && a<58){
		printf("A digit \n");
	}
	else if((a>=32 && a<47 ) || (a>=58 && a<64 ) || (a>=91 && a<96) || (a>=123 && a<126)){
		printf("its a special character \n");
	}
	else if(a>=65 && a<92){
		printf("its a upper-case alphabet \n");
	}
}
void traingle_is_valid_or_not(){
	printf("Enter 3 sides of a traingle \n");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("its a valid traingle \n");
				return ;
			}
		}
	}
	printf("Invalid traingle \n");
	return;
}
void no_of_days(){
	printf("Enter  A month no \n");
	int month;
	scanf("%d",&month);
	if(month==1 || month==3 || month==5|| month==7 || month==8 || month==10 || month==12){
		printf("31 days \n");
	}
	else if(month==2){
		// if its not a leap year
		printf("29 days \n");
	}
	else{
		printf("30 days \n");
	}
}
int main(){
	//@1-
//	find_the_positive_or_negative();
	//@2-
//	No_is_divi_by_5();
	//@3-
//	Odd_or_even();
	//@4-
//	Odd_or_even_without_using_();
	//@5-
//	Three_digit_or_not();
	//@6-
//	Which_is_greater();
// @8-
//	leap_year_or_not();
// @9-
//	greatest_no();
// @10-
//	profit_or_loss();
//@11-
//	pass_or_fail();
//@12-
 //	check_the_case();
//@13-
//	is_divisible();
//@14-
//	is_divisible_or();
//@15-
//	is_positive_or();
//@16-
	given_char_is_what();
//@17-
	traingle_is_valid_or_not();	
//@18-
	no_of_days();
}
