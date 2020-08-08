#include <stdio.h>
#include <stdlib.h>


struct x{
	 //char ou[3];
	 double a;double aa;double aaa;
	 
};
typedef struct x X; 
int main(void){
X obj[100];
int aa[10];
aa[11]=12;
////char * p ;
//p= &obj.a;
//obj.a = 12;
//printf("\n %d",sizeof(obj[0].ou));

printf("\n %d",&obj[0]);
//printf("\n %d ",&obj[0].ou[3]);
printf("\n %d",&obj[0].a);
printf("\n %d",&obj[0].aa);
printf("\n %d",&obj[0].aaa);
printf("\n %d",&obj[1].a);


/*int* p2 = &p1->aa; 
int* p3 = &p1->a;
printf("\n %d",sizeof(X));
printf("\n %d",&p1);
printf("\n %d a",&p2);
printf("\n %d a",&p3);
*/
return 0;
}

