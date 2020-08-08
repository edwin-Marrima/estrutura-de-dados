#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "exercicio1.c"

int main(void){
//	Realtype * p1;
//	p1 = inserir(155.095);
//	float a =122*0.01;
	float aa= abs(2.334);
	float aaa=round(12);
	int aaaa = trunc(12.8);

	int j=13300;
//	double x,fr, intpart;
//	int i = 1.22;
double num=155.555555;

 double ss =num-(int)num;
char outt[50];
snprintf(outt,50,"%f",ss);
printf("\n aaaa %s",outt);
int c = strlen(outt);
printf("%d",c);
double er = 0.53434;
printf("\n %daaaa",j%10);
//int left = (int) num;
//double right = num-left; 

//	printf("%d        %f",left,(int)right);
	return 0;
}
