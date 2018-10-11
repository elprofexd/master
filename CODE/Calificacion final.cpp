#include<stdio.h>
main(){
	float examd1,examd2, examd,examp,examp1,examp2,tareas,proyecto,prom ;
	printf("ingrese el valor de sus dos examenes departamentales :\n");
	scanf("%f %f",&examd1,&examd2);
	examd=(examd2+examd2)*0.4;
	
	printf("ingrese el valor de sus dos examenes parciales:\n");
	scanf("%f %f",&examp1,&examp2);
	examp=(examp1+examp2)*0.3;
	
	printf("ingrese el valor de sus tareas, trabajos y participacion en clase:\n");
	scanf("%f %f",&tareas);
	tareas=tareas*0.2;
	
	printf("ingrese el valor de su proyecto:\n");
	scanf("%f %f",&proyecto);
	proyecto=proyecto*0.1;
	prom=(examd+examp*tareas+proyecto);
	printf("Su promedio es: %lf, prom ");
}

