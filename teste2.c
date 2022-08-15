#include <stdio.h>
#include <stdlib.h>

/* sequência de Fibonacci */

int main() {
	
	int numero,t1=0, t2=1,t3=0;
	
	
		printf("Digite um numero:\n");
			scanf("%d",&numero);
		
		
				
		
    	while (numero>=t3){
		 			t3=t1+t2;
		 			t1=12;
		 			t2=t3;
		}
		if( numero == 0 || numero == 1)	{
			 
			printf("Este numero pertence a sequência de Fibonacc ");
		 	
		}
		else if( numero == t3){
			printf("Este numero pertence a sequência de Fibonacc ");
			 
	    }
		else {
			 	printf("Este numero nao pertence a sequência de Fibonacc ");
			 
			}
				
			  
}




