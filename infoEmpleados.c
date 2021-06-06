#include <stdio.h>

#define PRECIO_HORA_EXTRA 60
#define BONIFICACION_DEPARTAMENTO_A 2750
int anioActual= 2021;

float calcularSueldoAnual(float ingresosMensualesDuranteUnAnio[]);
int main(){

    int edad, anioNacimiento, horasExtrasTrabajadas, haRealizadoHorasExtra, sueldoTotalAnual;
    float sueldoAnual, totalHorasExtrasAPagar, ingresosMensualesDuranteUnAnio[12];
    char departamento;
    
    printf("\nA continuación vamos a pedirle algunos datos personales:\n");
    printf("\n¿A qué departamento pertenece?:\n");
    scanf("%c",&departamento);

    
    printf("¿Qué edad tiene?\n");
    scanf("%d",&edad);

    for (int mes = 0; mes < 12; mes++){
        printf("\n¿Cuál es su sueldo para el mes %d?:\n", mes+1);
        scanf("%f",&ingresosMensualesDuranteUnAnio[mes]);
    }
    
    printf("\n¿Cuál es su sueldo anual?:\n");
    scanf("%f",&sueldoAnual);
    


    printf("\n¿Cuántas horas extra has trabajado este año?:\n");
    scanf("%d",&horasExtrasTrabajadas);  

    anioNacimiento= anioActual - edad;
    totalHorasExtrasAPagar = horasExtrasTrabajadas * PRECIO_HORA_EXTRA;
    haRealizadoHorasExtra = totalHorasExtrasAPagar;

    
    if (departamento == 'A'|| departamento == 'a'){
       sueldoTotalAnual=sueldoAnual+BONIFICACION_DEPARTAMENTO_A; 
    }
    
    return 0;
}

float calcularSueldoAnual(float ingresosMensualesDuranteUnAnio[]){
    float sueldoAnual;
    for (int mes = 0; mes < 12; mes++){
        sueldoAnual=sueldoAnual+ingresosMensualesDuranteUnAnio[mes]; 
    }
    return sueldoAnual;
}