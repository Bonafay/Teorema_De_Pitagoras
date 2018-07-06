
#include <stdio.h>
#include <math.h>

void pitagorazo(float *, float *, float *);

int main(void)
{
	float catetoOpuesto, catetoAdyacente, hipotenusa;
	
	printf("Ingrese la longitud del cateto opuesto: "); 
	scanf("%f", &catetoOpuesto);
	printf("\nIngrese la longitud del cateto adyacente: "); 
	scanf("%f", &catetoAdyacente);
	
	pitagorazo(&catetoOpuesto, &catetoAdyacente, &hipotenusa);
	
	printf("\nLa hipotenusa es: %.2f", hipotenusa);
}

		//FUNCIONES
void pitagorazo(float *op, float *ad, float *hip)
{
	*hip = sqrt(pow(*op, 2) + pow(*ad, 2));
}
