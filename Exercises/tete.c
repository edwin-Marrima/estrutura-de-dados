#include <stdio.h>
#include <stdlib.h>

struct nametype
{
char first[10];
char midinit;
char last[20];
};
struct person
{
struct nametype name;
int birthday[2];

struct nametype parentes[2];
int income;
int numchildren;
char address[20];
char city[10];
char state[2];


};


int main(void){

	struct person p[300];
	
	printf("\n %d ",sizeof(p[0]));

	printf("\n%d",&p[0]);
		

	printf("\n%d",&p[0].parentes[1].last[10]);
	printf("\n%d",&p[200].name.midinit);
	printf("\n%d",&p[20].income);
	printf("\n%d",&p[20].address[5]);
		printf("\n%d",&p[200].income);
		printf("\n%d",&p[5].parentes[1].last[10]);
	
	
	return 0;
}
