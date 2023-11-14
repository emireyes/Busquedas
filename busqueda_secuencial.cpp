#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main (void){
	
	int i, j, num, elemento, bandera=0;
	
	srand(time(NULL));
	printf("Numero de elementos a crear:\n");
	scanf("%d",&num);
	int lista [num];
	printf("Elemento a buscar:\n");
	scanf("%d",&elemento);
	
	for (i=0;i<num;i++){
		lista [i]=rand()%(10+1-1)+1;
	}
	printf("Elementos de la lista\n");
		for(i=0;i<num;i++){
			printf("%d",lista[i]);
		}
	printf("\n");
	
		for(i=0;i<num;i++){
			if(lista[i]==elemento){
				printf("Elemento en posicion:%d\n",i+1);
				bandera=1;
				break;
			}
		}
	if(bandera==0){
		printf("Elemento no se encuetra");
	}
 	return 0;
}

