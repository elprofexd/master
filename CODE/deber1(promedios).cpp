#include<stdio.h>
main(){
	float calif1,calif2,calif3,calif4,calif5,calif6,promedio;
	printf("Ingrese sus notas alcanzadas en el parcial de Fundamentos a la Programacion\n");
	printf("Nota de sus 2 examenes departamentales:\n");	
	scanf("%f",&calif1);
	scanf("%f",&calif2);
	printf("Nota de sus 2 examenes parciales: \n");
	scanf("%f",&calif3);
	scanf("%f",&calif4);
	printf("Nota de tareas:\n");
	scanf("%f",&calif5);
	printf("Nota de proyecto:\n");
	scanf("%f",&calif6);
	promedio=((calif1+calif2)/2*0.4)+((calif3+calif4)/2*0.3)+(calif5*0.2)+(calif6*0.1);
	printf("Su promedio de Fundamentos a la Programacion es:%.2f",promedio);
}
