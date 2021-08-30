#include <iostream>
#include<stdio.h>
#define a 5//variable que define el tamaño del vector de la estructura
struct estud //estructura para guardar varios datos
{
	int cedula;
	float p;
	float s;
	float t;
};
void cargar(int vec[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&vec[x]);
    }
    printf(" ");
    printf(" ");
    printf(" ");
}
void imprimir(int vec[5])
{
    int x;
    printf("\n Contenido completo del vector:");
    for(x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
    printf(" ");
    printf(" ");
    printf(" ");
}
void suma(int vec[5])
{
    int x,suma;
    suma=0;
    for(x=0;x<5;x++)
    {
        suma=suma+vec[x];
    }
    printf("\n Total: ");
    printf("%i ",suma);
    printf(" ");
    printf(" ");
    printf(" ");
}
void promedio(int vec[5])
{
    int x,suma,promedio;
    suma=0;
    promedio=0;
    for(x=0;x<5;x++)
    {
        suma=suma+vec[x];
    }
    promedio=suma/5;
    printf("\n promedio: ");
    printf("%i ",promedio);
    printf(" ");
    printf(" ");
    printf(" ");
}
void maxmin(int vec[5])
{
    int x,max,min;
   
     for(x=0;x<5;x++)
    {
        max=vec[0];
        min=vec[0];
    }
     for(x=0;x<5;x++)
    {
          if(max < vec[x]) {
        max=vec[x];  }
        if(min > vec[x]) {
        min=vec[x];  }  

    }
    for(x=0;x<5;x++)
    {
       if(vec[x] == min)  {
            vec[x] = max; }
    }
    for(x=0;x<5;x++)
    {
        if(vec[x] == max) {
            vec[x] = min;  }
    }
 printf("\n valor maximo: %d", max);
    printf("\n valor minimo: %d", min);

}
void estudiante(struct estud z[a]) //llama a la estructura, para ser llenada
{
    int y;//variable local usada como contador
    for(y=0;y<a;y++)
    {
        printf("\n Ingrese cedula:");
        scanf("%i",&z[y].cedula);
        fflush(stdin);
        printf("\n Ingrese primera nota:");
        scanf("%f",&z[y].p);
         printf("\n Ingrese segunda nota:");
        scanf("%f",&z[y].s);
        printf("\n Ingrese tercera nota:");
        scanf("%f",&z[y].t);
    }
}
void imprestc(struct estud z[a]) //imprime el vector, donde esta guardada la estructura
{
    int y;
    for(y=0;y<a;y++)
    {
        printf("\n listado:");
        printf("%i %f %f %f\n", z[y].cedula, z[y].p, z[y].s, z[y].t);
    }
}
int main()
{
    struct estud x[a];//variable global
    int vector[5];
    cargar(vector);
    imprimir(vector);
    suma(vector);
    promedio(vector);
    maxmin(vector);
    estudiante(x);
    imprestc(x);
    return 0;
}
