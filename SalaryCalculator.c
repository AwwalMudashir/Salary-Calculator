#include<stdio.h>

void main(){
		char name[50];
    float basic,daper,bonper,loandet;
    float salary;
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("\nEnter the basic amount : ");
    scanf("%f",&basic);
    printf("\nInput daper : ");
    scanf("%f",&daper );
    printf("\nInput the percentage of bonper : ");
    scanf("%f",&bonper);
    printf("\nEnter the of percentage loandet : ");
    scanf("%f",&loandet);
    salary = basic + basic * daper /100 + bonper * basic/100 - loandet;
    
    printf("\nName \t Basic \t \t Salary");
    printf("\n");
    printf("%s \t %.1f \t %.1f",name,basic,salary);
}
