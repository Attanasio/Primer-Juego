#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Es para la funcion srand(time(NULL));

int main()
{
    char respuesta;
    char salida;
    int preguntaAleatoria;

    srand(time(NULL));
    preguntaAleatoria = 1 + rand()%(10);

    do
    {
        switch (preguntaAleatoria)
        {
           case 1:

                        printf("\n¿Cual es el idioma mas hablado en Suiza?\n\n");
                        printf("A. Aleman\n");
                        printf("B. Suizo\n");
                        printf("C. Frances\n");
                        printf("D. Ingles\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'a' || respuesta == 'A')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para volver a intentar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

            case 2:

                        printf("\n¿Que pais está entre Peru y Colombia?\n\n");
                        printf("A. Uruguy\n");
                        printf("B. Bolivia\n");
                        printf("C. Ecuador\n");
                        printf("D. Paraguay\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 3:

                        printf("\n¿Cual es el río mas largo de Europa Occidental?\n\n");
                        printf("A. Rio Danubio\n");
                        printf("B. Rio Sena\n");
                        printf("C. Rio Támesis\n");
                        printf("D. Rio Rin\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'd' || respuesta == 'D')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 4:

                        printf("\n¿Que lago baña la ciudad de Ginebra?\n\n");
                        printf("A. Lago Ladoga\n");
                        printf("B. Lago Onega\n");
                        printf("C. Lago Leman\n");
                        printf("D. Lago Vanern\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 5:

                        printf("\n¿En que pais europeo se habla el magyar?\n\n");
                        printf("A. Albania\n");
                        printf("B. Hungría\n");
                        printf("C. Bulgaria\n");
                        printf("D. Armenia\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'b' || respuesta == 'B')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 6:

                        printf("\n¿Que palabra significa “hijo de” en los apellidos escoceses?\n\n");
                        printf("A. Craig\n");
                        printf("B. Glenn\n");
                        printf("C. Dunn\n");
                        printf("D. Mac\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'd' || respuesta == 'D')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 7:

                        printf("\n¿Cual es la capital de Indonesia?\n\n");
                        printf("A. Jakarta\n");
                        printf("B. Canberra\n");
                        printf("C. Palikir\n");
                        printf("D. Suva\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'a' || respuesta == 'A')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 8:

                        printf("\n¿En que pais se encuentra el pico Aconcagua?\n\n");
                        printf("A. Alemania\n");
                        printf("B. Brasil\n");
                        printf("C. Argentina\n");
                        printf("D. Estados Unidos\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 9:

                        printf("\n¿En que hemisferio se encuentra Jamaica?\n\n");
                        printf("A. Norte\n");
                        printf("B. Sur\n");
                        printf("C. Este\n");
                        printf("D. Oeste\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'a' || respuesta == 'A')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;

                case 10:

                        printf("\n¿A que pais pertenece la isla de Creta?\n\n");
                        printf("A. Croacia\n");
                        printf("B. Grecia\n");
                        printf("C. Finlandia\n");
                        printf("D. Estonia\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'b' || respuesta == 'B')
                        {
                            printf("\n¡La respuesta es correcta!");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }else
                        {
                            printf("\nEstas equivocado, vuelve a intentar.");
                            printf("\nSeleccione 'S' para continuar: ");
                            fflush(stdin);
                            salida = getchar();

                        }

                    break;
        }

    }while (salida != 's' || salida != 'S');


}
