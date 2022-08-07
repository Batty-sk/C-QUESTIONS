#include<stdio.h>
int no_of_days(){
	printf("Enter the month no \n");
	int m;
	scanf("%d",&m);
	switch(m){
		case 2:
			printf(" 29 days");
			break;
		case 4:
			printf("30 days");
			break;
		case 6:
			printf("30 days");
			break;
		case 9:
			printf("30 days");
			break;
		case 10:
			printf("30 days");
			break;
		case 11:
			printf("30 days");
			break;
		default:
			printf("31 days");
			break;
	}
}
void menu_driven_pro(){

	int a,b;
	char c;
	while(1){
		printf("Select the following options \n");
		printf("a. Addition \n b. Substraction \n c. Multiplication \n d. Division \n e. Exit \n");
		c=getch();	
	switch(c){
		case 'a':
			printf("Enter Two nos \n");
			scanf("%d%d",&a,&b);
			printf("= %d\n",a+b);
			break;
		case 'b':
			printf("Enter Two nos \n");
			
			scanf("%d%d",&a,&b);
			printf("=%d\n",a-b);
			break;
		case 'c':
			printf("Enter Two nos \n");
			
			scanf("%d%d",&a,&b);
			printf("=%d\n",a-b);
			break;
		case 'd':
			printf("Enter Two nos \n");
			
			scanf("%d%d",&a,&b);
			printf("=%d\n",a-b);
			break;
		case 'e':
			break;
		default:
			break;
		}
	}
	}
void greeting_(){
	printf("Enter the day no \n");
	char a;
	a=getch();
	switch(a){
		case 49:
			printf("Enjoy kr vro aj sunday he :) \n");
			break;
		case 50:
			printf("Aj bhi enjoy kr le vro kal sunday tha :) \n");
			break;
		case 51:
			printf("Aj pura din soja vro enjoy kr kr ke thak gya hoga :) \n");
			break;
		case 52:
			printf("Calender dekh vro aj syd wednesday he :) \n");
			break;
		case 53:
			printf("Bro Tune aj nahaya nhi he syd :) \n");
			break;
		case 54:
			printf("Assaigments krle vro Bootcamp vale :) \n");
			break;
		case 55:
			printf("Aj maje ayenge vro kyuki aj c programming ki class he :) \n");
			break;
		default:
			break;
	}
}
int main(){
	//@1-
	//no_of_days();
	//@2-
//	menu_driven_pro();
	//@3-
//	greeting_();
	//@4-
		
}
