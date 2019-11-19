#include<stdio.h>
#include<stdlib.h>

int main()
{
   
   int choice;
   float kin1,kin2,ke,pot1,pot2,pot3,pe,mec1,mec2,me;

do{
  menu:
   printf("\t\t\t Physics Calculators\n");
   printf("\t ----------------------------------------------\n\n");
   printf("1.Calculating Kinetic Energy\n");
   printf("2.Calculating Potential Energy\n");
   printf("3.Calculating Mechanical Energy\n");
   printf("0.Exit\n");
   printf("Enter your choice (1/2/3/0) : ");
   scanf("%d",&choice);
   printf("\n");
   
   switch(choice)
   {
      {case 1 : printf("\t\t Calculating Kinetic Energy\n");
	  			printf("\t******************************************\n\n");
 				printf("        KE = 1/2 mv^2\n\n");
				printf("Where  : m = mass\n");
				printf("         v = velocity\n\n");	
  					printf ("Input m : ");
  					scanf ("%f",&kin1);
  					printf ("Input v : ");
  					scanf ("%f",&kin2);
  					ke=(kin1*kin2*kin2)/2;
  				printf ("Kinetic Energy : %5.2f\n\n\n\n",ke);;break;}			
      {case 2 :	printf("\t\t Calculating Potential Energy\n");
  				printf("\t********************************************\n\n");
  				printf("        PE = m.g.h\n\n");
				printf("Where  : m = mass of object\n");
				printf("         g = acceleration of grafity\n");	
				printf("         h = height of object\n\n");	
  					printf ("Input m : ");
  					scanf ("%f",&pot1);
  					printf ("Input g : ");
  					scanf ("%f",&pot2);
  					printf ("Input h : ");
  					scanf ("%f",&pot3);
  					pe=pot1*pot2*pot3;
  				printf("Potential Energy : %5.2f\n\n\n\n",pe);;break;}			
      {case 3 : printf("\t\t Calculating Mechanical Energy\n");
  				printf("\t********************************************\n\n");
  				printf("         ME = PE + KE\n\n");
				printf("Where  : PE = Potential Energy\n");
				printf("         KE = Kinetic Energy\n\n");  
  					me=pe+ke;
  				printf("Mechanical Energy : %5.2f +%5.2f = %5.2f\n\n\n\n",pe,ke,me);;break;}			
      default : printf("The choice you have input are not available\n\n\n\n");break;
      {case 0 : printf("\t -------------------------------------------------\n\n");
	   			printf("\t |     Goodbey - Thanks you for use my tools      |\n");
  				printf("\t -------------------------------------------------\n\n");
  				system("exit");
				;break;}
	}
}while (choice!="1,2,3");

   return 0;
}
