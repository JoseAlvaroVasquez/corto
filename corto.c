#include <stdio.h>
#include <stdlib.h>
//VM15028 Jose Alvaro Vasquez Marroquin
/*
 * 
 */
int main() {
   int filas1,columnas1,filas2,columnas2;
	int fil=0,col=0,aux=0;
	int i=0,j=0,h=0;
	printf("Numero de filas para la matriz 1: \n");
	scanf("%d",&filas1);
	printf("Numero de columnas para la matriz 1: \n");
	scanf("%d",&columnas1);
	printf("Numero de filas para la matriz 2: \n");
	scanf("%d",&filas2);
	printf("Numero de columnas para la matriz 2: \n");
	scanf("%d",&columnas2);
	
	int matriz1[filas1][columnas1];
	int matriz2[filas2][columnas2];
    int resultante[filas1][columnas2];
    
    //llenar matrizes
    printf("Matriz 1:\n");
    for(fil=0; fil< filas1; fil++)
    {
		for(col=0; col< columnas1; col++)
		{
			printf("Posicion (%d,%d): ",fil,col);
			scanf("%d",&matriz1[fil][col]);
			
		}	
	}
	
	
	printf("Matriz 2:\n");
    for(fil=0; fil< filas2; fil++)
    {
		for(col=0; col< columnas2; col++)
		{
		printf("Posicion (%d,%d): ",fil,col);
		scanf("%d",&matriz2[fil][col]);
		}	
	}
        
        
        if(columnas1==filas2)
	{
			    printf("La matriz resultante es: \n");
 
	            for(int i=0;i<filas1;i++)
	            {
	            	printf("[ ");

			for(int j=0;j<columnas2;j++)
					{
					resultante[i][j]=0;
					for(int h=0;h<columnas1;h++)
					{
					resultante[i][j]=resultante[i][j]+(matriz1[i][h]*matriz2[h][j]);
					}
					printf("%d ",resultante[i][j]);
					}
				printf("]");
				printf("\n");
				}
	}
	else
	{
		printf("Las matrices no validas");
	}        
         
        
        //Buscar los numeros primos en la resultante
        int contadorprimos =0;
        for(fil=0; fil< filas2; fil++)
           
    {
		for(col=0; col< columnas2; col++)
		{
                   
                    int contador=0;
                    for(int inicio=1; inicio<= resultante[fil][col]; inicio++)
                    {
                         
                        if(resultante[fil][col]%inicio==0)
                        {
                            contador++;
                        }
                        
                    }
                    
                    if(contador==2){
                        printf("este seria un numero primo ");
                          printf("[");
                          printf("%d ",fil);
                          printf("] " );
                          printf("[");
                          printf("%d ",col);
                          printf("] " );
                        printf("%d ",resultante[fil][col]);
                        printf("\n");
                        contadorprimos++;
                    
                    
                    }
                }
        
        }
        
  
        
        
        
        
        //insertando numeros primos en el vector dimensionado
        
        int ordenado[contadorprimos];
        
        for(int vecotor=1; vecotor<= contadorprimos; vecotor++)
        
        {
        for(fil=0; fil< filas2; fil++)
           
    {
		for(col=0; col< columnas2; col++)
		{
                   
                    int contador=0;
                    for(int inicio=1; inicio<= resultante[fil][col]; inicio++)
                    {
                         
                        if(resultante[fil][col]%inicio==0)
                        {
                            contador++;
                        }
                        
                    }
                    
                    if(contador==2){
                        ordenado[vecotor-1]=resultante[fil][col];
                    
                    
                    }
                }
        
        }
        
        }
    return 0;
}

