// A program to calculate employee tax,gross pay and pay 

#include <stdio.h>
int main()
{
	//declaration of variables to be used
	float hours;
	float wage_perhour;
	float overtime;
	float totalovertime;
	float totalhours;
	
	//prompt the user to enter values for hours
	
	printf("Enter hours worked :");
	scanf("%f",&hours);
	
	//using if statement to check the time worked if it has an overtime 
	if(hours > 40){
    //is so we subtract 40 from the Hours worked
		overtime = hours - 40;
	
	
	//calculating total_overtime and total_hours
	totalovertime = overtime * 0.5;
	totalhours = totalovertime + 40;
	}
	
	//prompt the user to enter hourly_wages
	printf("Enter wage per hour :");
	scanf("%f",&wage_perhour);
	
	//calculating gross_pay using hourly_wages and total hours
	
	float gross_pay;
	gross_pay = totalhours * wage_perhour;
	printf("Gross pay   :%.2f\n",gross_pay);
	
	//calculating net_tax
	
	float tax15;
	float tax20;
	float net_pay;
	float total_tax;
	//using if statement
	if(gross_pay == 600){
		tax15 = 600 * 0.15;
		net_pay = gross_pay - tax15;
		printf("Net pay     :%.2f\n",net_pay);
	}
		
	//checking if the if the user gross pay is greater than£600
	if(gross_pay > 600){
		tax20 = (gross_pay - 600) * 0.2;
		net_pay =gross_pay - (tax20 + tax15);
		total_tax=tax20 + tax15;
		printf("Total tax   :%.2f\n" ,total_tax);
        printf("Net pay     :%.2f\n",net_pay);
	}

		
	
	
	return 0;
}