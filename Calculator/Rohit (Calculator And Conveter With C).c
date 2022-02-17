#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

#define KEY1 "Enter the Calculator Operation you want to do"
#define KEY2 "Enter the Converter Operation you want to do"

// Function prototype declaration

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void calculator_operations();
void wlcm();
void measurement();
void currency();
void temp();
void weight();
void time();
void converter_operations();

// Function Definitions

void wlcm()
{
	system("color 70");
	printf("\n\n\t\t\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\t\t\t*\tWELCOME\t\t*\n");
	printf("\t\t\t\t\t\t\t\t*  \t  TO\t  \t*\n ");
	printf("\t\t\t\t\t\t\t\t*     SAHYOG COLLEGE \t*\n");
	printf("\t\t\t\t\t\t\t\t*************************\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t   *****************\n");
	printf("\t\t\t\t\t\t\t\t   *   MAIN MENU   *\n");
	printf("\t\t\t\t\t\t\t\t   *****************\n\n\n\n");
 }
void calculator_operations()
{
    printf("\n\t\t\t\t\t\t******Welcome to C calculator******\n\n");
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
		printf("%d: ",k+1);
        scanf("%d",&number);
    	total+=number;
        k++;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int n, total=1, k=0, number;
    printf("\nEnter the number of elements you want to multiply:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
		printf("%d: ",k+1);
        scanf("%d",&number);
    	total*=number;
        k++;
    }
    printf("Product of %d numbers = %d \n",n,total);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    if(b==0)
    printf("UNDEFINED");
    else
   {
	 d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

void factorial()
{
    int i,fact=1,num;
 	first:
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 system("cls");
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");

    	goto first;
    }


    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);

}
 void converter_operations()
{
    printf("\n\t\t\t\t\t\t******Welcome to C converter******\n\n");
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

 	printf("Enter 1 to convert measurement units: \n");
 	printf("Enter 2 to convert temperature units: \n");
 	printf("Enter 3 to convert weight units: \n");
 	printf("Enter 4 to convert time units: \n");
 	printf("Enter 5 to convert currency units: \n");
}

void temp()
{
	float c,f,k;
	int tmp;
	first:
	printf("Enter 1 to convert celcius to fahrenheit: \n");
	printf("Enter 2 to convert celcius to kelvin: \n");
	printf("Enter 3 to convert fahrenheit to celcius: \n");
	printf("Enter 4 to convert fahrenheit to kelvin: \n");
	printf("Enter 5 to convert kelvin to celcius: \n");
	printf("Enter 6 to convert kelvin to fahrenheit: \n");
	printf("\n\n\nEnter you choice: \n");
	scanf("%d",&tmp);
	switch(tmp)
	{
		case 1:
				printf("Enter the temperature in Celcius: \n");
				scanf("%f",&c);
				f=c*1.8+32;
				printf("%.2f C=%.2f F",c,f);
				break;
		case 2:
				printf("Enter the temperature in Celcius: \n");
				scanf("%f",&c);
				k=c+273.15;
				printf("%.2f C=%.2f K",c,k);
				break;
		case 3:
				printf("Enter the temperature in Fahrenheit: \n");
				scanf("%f",&f);
				c=(f-32)/1.8;
				printf("%.2f F=%.2f C",f,c);
				break;
		case 4:
				printf("Enter the temperature in Fahrenheit: \n");
				scanf("%f",&f);
				k=(f+459.67)*5.0/9.0;
				printf("%.2f F=%.2f K",f,k);
				break;
		case 5:
				printf("Enter the temperature in Kelvin: \n");
				scanf("%f",&f);
				c=k-273.15;
				printf("%.2f K=%.2f C",k,c);
				break;
		case 6:
				printf("Enter the temperature in Kelvin: \n");
				scanf("%f",&f);
				f=k*9.0/5.0-459.67;
				printf("%.2f K=%.2f F",f,c);
				break;
		default:
				printf("\n\n****You have entered a wrong input****\n");
				printf("****Please Enter Again****\n\n");
	goto first;

			}
}
void currency()
{
	int ch;
	float e,d,r;
	first:
	printf("Enter 1 to convert Indian rupees to US dollars: \n");
	printf("Enter 2 to convert Indian rupees to East Europe euros: \n");
	printf("Enter 3 to convert US dollars to Indian rupees: \n");
	printf("Enter 4 to convert US dollars to East Europe euros: \n");
	printf("Enter 5 to convert East Europe euros to Indian rupees: \n");
	printf("Enter 6 to convert East Europe euros to US dollars: \n");
	printf("\n\nEnter your choice: \n");
	scanf("%d",&ch);
	printf("\n\n\n\n\t\t\t\tACCORDING TO TODAY'S NEWS:\n\n");
	switch(ch)
	{
		case 1:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&r);
				d=r*0.014;
				printf("%.2f Indian rupees=%.2f US dollars\n",r,d);
		case 2:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&r);
				e=r*79.1248;
				printf("%.2f Indian rupees=%.2f East Europe euros\n",r,e);
		case 3:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&d);
				r=d*71.79;
				printf("%.2f US dollars=%.2f Indian rupees\n",d,r);
		case 4:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&d);
				e=d*0.90749;
				printf("%.2f US dollars=%.2f East Europe euros\n",d,e);
		case 5:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&e);
				r=e*79.087;
				printf("%.2f East Europe euros=%.2f Indian rupees\n",e,r);
		case 6:
				printf("Enter the amount you want to convert: ");
				scanf("%f",&e);
				d=e*1.10230;
				printf("%.2f East Europe euros=%.2f US dollars\n",e,d);
				break;
		default:
				printf("\n\n****You have entered a wrong input****\n");
				printf("****Please Enter Again****\n\n");
	goto first;
	}
}
void measurement()
{
	int meas,ch;
	float in,ft,cm,mt,km;
	printf("Enter 1 to give input as inch and convert to other unit: \n");
	printf("Enter 2 to give input as feet and convert to other unit: \n");
	printf("Enter 3 to give input as centimeter and convert to other unit: \n");
	printf("Enter 4 to give input as meter and convert to other unit: \n");
	printf("Enter 5 to give input as kilometer and convert to other unit: \n");
	printf("Enter your choice: ");
	scanf("%d",&meas);
	switch(meas)
	{
		case 1:
				system("cls");
				tenth:
				printf("\n\nEnter 1 to convert inch to feet: \n");
				printf("Enter 2 to convert inch to centimeter: \n");
				printf("Enter 3 to convert inch to meter: \n");
				printf("Enter 4 to convert inch to kilometer: \n\n");
				printf("Enter your choice: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("Enter the measurement in inch: ");
					scanf("%f",&in);
					ft=in/12.0;
					printf("%.2f inches= %.2f feet",in,ft);
				}
				else
					if(ch==2)
					{
					printf("Enter the measurement in inch: ");
					scanf("%f",&in);
					cm=in*2.54;
					printf("%.2f inches= %.2f centimeters",in,cm);

					}
					else
						if(ch==3)
						{
						printf("Enter the measurement in inch: ");
						scanf("%f",&in);
						mt=in*0.0254;
						printf("%.2f inches= %.2f meters",in,mt);
						}
						else
							if(ch==4)
							{
							printf("Enter the measurement in inch: ");
							scanf("%f",&in);
							km=in*0.0000254;
							printf("%.2f inches= %.2f kilometers",in,km);
							}
							else
							{

								printf("\n\n****You have entered a wrong input****\n");
								printf("****Please Enter Valid Input****\n\n");
								goto tenth;
							}

				break;
		case 2:
				system("cls");
				printf("Enter 1 to convert feet to inch: \n");
				printf("Enter 2 to convert feet to centimeter: \n");
				printf("Enter 3 to convert feet to meter: \n");
				printf("Enter 4 to convert feet to kilometer: \n\n");
				printf("Enter your choice: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("Enter the measurement in feet: ");
					scanf("%f",&ft);
					in=ft*12;
					printf("%.2f feet= %.2f inches",ft,in);
				}
				else
					if(ch==2)
					{
					printf("Enter the measurement in feet: ");
					scanf("%f",&ft);
					cm=ft*34.48;
					printf("%.2f feet= %.2f centimeters",ft,cm);

					}
					else
						if(ch==3)
						{
						printf("Enter the measurement in feet: ");
						scanf("%f",&ft);
						mt=ft*0.3048;
						printf("%.2f feet= %.2f meters",ft,mt);
						}
						else
							if(ch==4)
							{
							printf("Enter the measurement in feet: ");
							scanf("%f",&ft);
							km=ft/3280.8;
							printf("%.2f feet= %.2f kilometers",ft,km);
							}
							else
							{

								printf("\n\n****You have entered a wrong input****\n");
								printf("****Please Enter Valid Input****\n\n");
							}

				break;
		case 3:
				system("cls");
				printf("Enter 1 to convert centimeter to inch: \n");
				printf("Enter 2 to convert centimeter to feet: \n");
				printf("Enter 3 to convert centimeter to meter: \n");
				printf("Enter 4 to convert centimeter to kilometer: \n\n");
				printf("Enter your choice: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("Enter the measurement in centimeter: ");
					scanf("%f",&cm);
					in=cm/2.54;
					printf("%.2f centimeter= %.2f inches",cm,in);
				}
				else
					if(ch==2)
					{
					printf("Enter the measurement in centimeter: ");
					scanf("%f",&cm);
					cm=ft/30.48;
					printf("%.2f centimeter= %.2f feet",cm,ft);

					}
					else
						if(ch==3)
						{
						printf("Enter the measurement in centimeter: ");
						scanf("%f",&cm);
						mt=cm/100.0;
						printf("%.2f centimeter= %.2f meters",cm,mt);
						}
						else
							if(ch==4)
							{
							printf("Enter the measurement in centimeter: ");
							scanf("%f",&cm);
							km=cm/100000.0;
							printf("%.2f centimeter= %.2f kilometers",cm,km);
							}
							else
							{

								printf("\n\n****You have entered a wrong input****\n");
								printf("****Please Enter Valid Input****\n\n");
							}
				break;
		case 4:
				system("cls");
				printf("Enter 1 to convert meter to inch: \n");
				printf("Enter 2 to convert meter to feet: \n");
				printf("Enter 3 to convert meter to centimeter: \n");
				printf("Enter 4 to convert meter to kilometer: \n\n");
				printf("Enter your choice: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("Enter the measurement in meter: ");
					scanf("%f",&mt);
					in=mt/0.0254;
					printf("%.2f meter= %.2f inches",mt,in);
				}
				else
					if(ch==2)
					{
					printf("Enter the measurement in meter: ");
					scanf("%f",&mt);
					ft=mt/0.3048;
					printf("%f meter= %f feet",mt,ft);

					}
					else
						if(ch==3)
						{
						printf("Enter the measurement in meter: ");
						scanf("%f",&mt);
						cm=mt*100;
						printf("%f meter= %f centimeters",mt,cm);
						}
						else
							if(ch==4)
							{
							printf("Enter the measurement in meter: ");
							scanf("%f",&mt);
							km=mt/1000.0;
							printf("%f meter= %f kilometers",mt,km);
							}
							else
							{

								printf("\n\n****You have entered a wrong input****\n");
								printf("****Please Enter Valid Input****\n\n");
							}
				break;
		case 5:
				system("cls");
				printf("Enter 1 to convert kilometer to inch: \n");
				printf("Enter 2 to convert kilometer to feet: \n");
				printf("Enter 3 to convert kilometer to centimeter: \n");
				printf("Enter 4 to convert kilometer to meter: \n\n");
				printf("Enter your choice: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("Enter the measurement in kilometer: ");
					scanf("%f",&km);
					in=km*39370.078;
					printf("%f kilometer= %f inches",km,in);
				}
				else
					if(ch==2)
					{
					printf("Enter the measurement in kilometer: ");
					scanf("%f",&km);
					ft=km*3280.839;
					printf("%f kilometer= %f feet",km,ft);

					}
					else
						if(ch==3)
						{
						printf("Enter the measurement in kilometer: ");
						scanf("%f",&km);
						cm=km*100000;
						printf("%f kilometer= %f centimeters",km,cm);
						}
						else
							if(ch==4)
							{
							printf("Enter the measurement in kilometer: ");
							scanf("%f",&km);
							km=mt*1000;
							printf("%f kilometer= %f meters",km,mt);
							}
							else
							{

								printf("\n\n****You have entered a wrong input****\n");
								printf("****Please Enter Valid Input****\n\n");
							}
				break;
		default:
				system("cls");
				printf("\n\n****You have entered a wrong input****\n");
				printf("****Please Enter Valid Input****\n\n");



	}
}
void weight()
{
	int w;
	float kg,g;
	first:
	printf("Enter 1 to convert kg to gram");
	printf("\nEnter 2 to convert gram to kg");
	printf("\n\nEnter your choice: ");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
				printf("Enter weight in kg: ");
				scanf("%f",&kg);
				g=kg*1000;
				printf("%f kg=%f grams",kg,g);
				break;
		case 2:
				printf("Enter weight in grams: ");
				scanf("%f",&g);
				kg=g/1000;
				printf("%f grams=%f kg",g,kg);
				break;
		default:
				printf("\n\n****You have entered a wrong input****\n");
				printf("****Please Enter Either 1 or 2****\n\n");
	goto first;

	}

}
void time()
{
	int t;
	float h,m,s;
	first:
	printf("Enter 1 to convert seconds to minutes: \n");
	printf("Enter 2 to convert seconds to hours: \n");
	printf("Enter 3 to convert minutes to seconds: \n");
	printf("Enter 4 to convert minutes to hours: \n");
	printf("Enter 5 to convert hours to seconds: \n");
	printf("Enter 6 to convert hours to minutes: \n");
	printf("Enter your choice: \n");
	scanf("%d",&t);
	switch(t)
	{
		case 1:
				printf("Enter time in seconds: ");
				scanf("%f",&s);
				h=s/360.0;
				printf("%f seconds=%f hours",s,h);
				break;
		case 2:
				printf("Enter time in seconds: ");
				scanf("%f",&s);
				m=s/60.0;
				printf("%f seconds=%f minutes",s,m);
				break;
		case 3:
				printf("Enter time in minutes: ");
				scanf("%f",&m);
				s=m*60;
				printf("%f minutes=%f seconds",m,s);
				break;
		case 4:
				printf("Enter time in minutes: ");
				scanf("%f",&m);
				h=m/60.0;
				printf("%f minutes=%f hours",m,h);
				break;
		case 5:
				printf("Enter time in hours: ");
				scanf("%f",&h);
				s=h*360;
				printf("%f hours=%f seconds",h,s);
				break;
		case 6:
				printf("Enter time in hours: ");
				scanf("%f",&h);
				m=h*60;
				printf("%f hours=%f minutes",h,m);
				break;
		default:
				printf("\n\n****You have entered a wrong input****\n");
				printf("****Please Enter Again****\n\n");
	goto first;


	}
}


int main()
{
	a:
    wlcm();
    int cho;
    int X=1;
    char Calc_oprn,ch,ch1;
    int Y=1;
    char Conv_oprn;
    b:
    printf("Press 1 to use calculator: \n");
    printf("Press 2 to use converter: \n");
    scanf("%d",&cho);
    system("cls");
    switch(cho)
    {
        case 1:


                // Function call

                calculator_operations();

                while(X)
                {
                    printf("\n");
                    printf("%s : ", KEY1);

                    Calc_oprn=getche();


                    switch(Calc_oprn)
                    {
                        case '+':
                                    system("cls");
                                    addition();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                    	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
											}

                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                            {
                                                printf("THANK YOU..SEE YOU SOON!!");
                                                exit(0);
                                            }

                                    break;

                        case '-':
                                    system("cls");
                                    subtraction();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                       	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;}
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }

                                    break;

                        case '*':
                                    system("cls");
                                    multiplication();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                        	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;}
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }

                                    break;

                        case '/':
                                    system("cls");
                                    division();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                        	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;}
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }

                                    break;

                        case '?':
                                    system("cls");
                                    modulus();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;}
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }

                                    break;

                        case '!':
                                    system("cls");
                                    factorial();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                       	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
									
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                             }
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }
                                    break;

                        case '^':
                                    system("cls");
                                    power();
                                    printf("DO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                    fflush(stdin);
                                    scanf("%c",&ch);
                                    if(ch=='Y'|| ch=='y')
                                    {
                                       	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;}
                                    }
                                    else
                                        if(ch=='N'|| ch=='n')
                                        {
                                        printf("THANK YOU..SEE YOU SOON!!");
                                        exit(0);
                                        }
                                    break;

                        case 'H':
                        case 'h':
                                    calculator_operations();
                                    break;

                        case 'Q':
                        case 'q':
                                    printf("\n\nTHANK YOU AND SEE YOU SOON");
                                    exit(0);
                                    break;
                        case 'c':
                        case 'C':
                                    system("cls");
                                    calculator_operations();
                                    break;

                        default :
                                    system("cls");
                                    printf("\n**********You have entered unavailable option");
                                    printf("***********\n");
                                    printf("\n*****Please Enter any one of below available ");
                                    printf("options****\n");
                                    calculator_operations();
                        }
                        }
					break;
					
        case 2:


                // Function call


                converter_operations();

                while(Y)
                    {
                        printf("\n");
                        printf("%s : ",KEY2);

                        Conv_oprn=getche();

                        switch(Conv_oprn)
                            {
                                case '1':
                                            system("cls");
                                            measurement();
                                            printf("\nDO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                            fflush(stdin);
                                            scanf("%c",&ch);
                                            if(ch=='Y'|| ch=='y')
                                            {
                                                	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                            }}
                                            else if(ch=='N'|| ch=='n')
                                            {
                                            printf("THANK YOU..SEE YOU SOON!!");
                                            exit(0);
                                            }

                                            break;
                                case '2':
                                            system("cls");
                                            temp();
                                            printf("\nDO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                            fflush(stdin);
                                            scanf("%c",&ch);
                                            if(ch=='Y'|| ch=='y')
                                            {
                                               	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                            }}
                                            else if(ch=='N'|| ch=='n')
                                            {
                                            printf("THANK YOU..SEE YOU SOON!!");
                                            exit(0);
                                            }
                                            break;
                                case '3':
                                            system("cls");
                                            weight();
                                            printf("\nDO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                            fflush(stdin);
                                            scanf("%c",&ch);
                                            if(ch=='Y'|| ch=='y')
                                            {
                                                	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                            }}
                                            else if(ch=='N'|| ch=='n')
                                            {
                                            printf("THANK YOU..SEE YOU SOON!!");
                                            exit(0);
                                            }
                                            break;
                                case '4':
                                            system("cls");
                                            time();
                                            printf("\nDO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                            fflush(stdin);
                                            scanf("%c",&ch);
                                            if(ch=='Y'|| ch=='y')
                                            {
                                               	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                            }}
                                            else if(ch=='N'|| ch=='n')
                                            {
                                            printf("THANK YOU..SEE YOU SOON!!");
                                            exit(0);
                                            }
                                            break;
                                case '5':
                                            system("cls");
                                            currency();
                                            printf("\nDO YOU WANT TO CONTINUE:  Press 'Y' for YES & Press 'N' for NO\n");
                                            fflush(stdin);
                                            scanf("%c",&ch);
                                            if(ch=='Y'|| ch=='y')
                                            {
                                                	system("cls");
                                    	printf("PRESS '#' TO GO TO THE MAIN MENU\n\nPRESS '@' TO GO TO THE PREVIOUS MENU: ");
                                        fflush(stdin);
										scanf("%c",&ch1);
										if(ch1=='@')
                                        calculator_operations();
                                        else if(ch1=='#')
                                        	{
                                        		system("cls");
                                             	goto a;
                                            }}
                                            else if(ch=='N'|| ch=='n')
                                            {
                                            printf("THANK YOU..SEE YOU SOON!!");
                                            exit(0);
                                            }
                                            break;
                                case 'h':
                                case 'H': 	converter_operations();
                                case 'Q':
                                case 'q': printf("\n\nTHANK YOU AND SEE YOU SOON");
                                          exit(0);
                                          break;
                                case 'c':
                                case 'C': system("cls");
                                          converter_operations();
                                          break;

                                default : system("cls");

                        printf("\n**********You have entered unavailable option");
                        printf("***********\n");
                        printf("\n*****Please Enter any one of below available ");
                        printf("options****\n");
                                          converter_operations();


                            }


                        }
                        break;
        default:
        		system("cls");
                printf("\n**********You have entered unavailable option");
                printf("***********\n");
                printf("\n*****Please Enter any one of below available ");
                printf("options****\n\n\n");
				goto b;



}
}

