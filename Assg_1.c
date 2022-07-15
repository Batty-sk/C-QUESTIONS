#include<stdio.h>
int Area_of_circle(){
	float radius;
	printf("Enter The radius of the circle \n");	
	scanf("%f",&radius);
	printf("Area of circle is %f having the radius %f \n",3.14*(radius*radius),radius);
	return 1;
}
void Len_of_string(){
printf("%d \n",printf("huhbrooooo"));
}
void Print_the_user_inDoubleQts(){
	printf("Hey user Give me your name \n");
	char name[10];
	scanf("%s",&name);
	printf("Your name is \"%s\" \n",name);
}
void Print_the_things(){
	char a='%',b='d';
	printf("\\n \n");
	printf("\\ \n");
	printf("%c%c",a,b);
}
void Show_date_and_time(){
	printf("Enter the date In DD/MM/YYYY fromat \n");
	int day,mon,yr;
	scanf("%d %d %d",&day,&mon,&yr);
	printf("Day-%d, Mon-%d, Yr-%d \n",day,mon,yr);
}
void Show_time(){
	printf("Input time in HH:MM formant \n");
	int hour,minute;
	scanf("%d %d",&hour,&minute);
	printf("%d Hour %d Minute \n",hour,minute);
}
int main(){
	// @1 -
	printf("Hello Students");
	//@2 -
	printf("\nHello\nStudents");
	//@3 -
	printf("\"MySirG\" \n");
	//@4 -
	Area_of_circle();
	//@5 -
	Len_of_string();
	//@6-
	Print_the_user_inDoubleQts();
	//@7,8,9-
	Print_the_things();
	//@10-
	Show_date_and_time();
	//@11-
	Show_time();
	return 0;
}
