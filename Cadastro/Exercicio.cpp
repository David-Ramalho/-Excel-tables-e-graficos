#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char opcao ;
    
    printf("Are male or female \n");
    scanf("%c", &opcao);
    
    switch(opcao){
    	case 'm': { 
    	printf("\nMale");
			break;
		}
		case 'f':{
			printf("\nfemale \n");					
			break;
			default: printf("\nopcao invalida\n");
		}
		printf("fim programa.");
	}
    
	return 0;
	
	
   }

