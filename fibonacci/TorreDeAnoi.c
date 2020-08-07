void movertorre(int n,char orig,char dest,char aux){
	
	if(n==1){
	  printf("\n Mover disco %d da torri %c para %c",n,orig,dest);
	}else{
		movertorre(n-1,orig,aux,dest);
		printf("\n Mover disco %d da torre %c para a torre %c",n,orig,dest);
		movertorre(n-1,aux,dest,orig);
	}
}



int main(void){
	movertorre(4,'A','B','C');
	
	
	
	
	return 0;
}
