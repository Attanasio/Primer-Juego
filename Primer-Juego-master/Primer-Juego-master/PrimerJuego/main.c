#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Es para la funcion srand(time(NULL));
#define TAM 15

/*falta que el programa una vez que se quedo sin opciones a la hora de elegir un numero aleatorio deje
de buscar numeros, y te diga que el juego termino, muestre los puntos y que ganaste una montaña de leche.*/

int main()
{
    char respuesta;
    int salida;
    int preguntaAleatoria;
    int contadorPuntaje=-1;
    int repetidas[TAM]={0};//Vector que guarda los numeros aleatorios que ya salieron.

    do
    {
        p1:/*el programa se dirije aca si la condicion del if es cierta*/ srand(time(NULL));
        preguntaAleatoria = 1 + rand()%(TAM);//Genera numero aleatorio

        for(int i=0;i<TAM;i++)
            {
                if(preguntaAleatoria==repetidas [i])//compara si preguntaAleatoria tiene un numero guardado que es igual a alguno que haya salido anteriormente.
                    {
                        goto p1;//Sale directamente al otro p1
                    }

            }

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;//Si acierta a la respuesta se cumple la conficion del while del final, y continua con otra pregunta

                            repetidas [0] = 1;//Si se genero aleatoriamente el numero 1, este se guarda en el vector repetidas direccion 0. Y lo mismo pasa en cada case.

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;//Si se equivoca no se cumple la condicion del while y termina el programa.

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [1] = 2;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 3:

                        printf("\n¿Cual es el río mas largo de Europa Occidental?\n\n");
                        printf("A. Rio Danubio\n");
                        printf("B. Rio Sena\n");
                        printf("C. Rio Tamesis\n");
                        printf("D. Rio Rin\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'd' || respuesta == 'D')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [2] = 3;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 4:

                        printf("\n¿Que lago cubre la ciudad de Ginebra?\n\n");
                        printf("A. Lago Ladoga\n");
                        printf("B. Lago Onega\n");
                        printf("C. Lago Leman\n");
                        printf("D. Lago Vanern\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [3] = 4;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [4] = 5;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 6:

                        printf("\n¿Que palabra significa hijo de... en los apellidos escoceses?\n\n");
                        printf("A. Craig\n");
                        printf("B. Glenn\n");
                        printf("C. Dunn\n");
                        printf("D. Mac\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'd' || respuesta == 'D')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [5] = 6;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [6] = 7;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [7] = 8;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [8] = 9;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

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
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [9] = 10;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 11:

                        printf("\n¿Quien fue, segun la leyenda, el fundado de la ciudad de Roma?\n\n");
                        printf("A. Hercules\n");
                        printf("B. Perseo\n");
                        printf("C. Romulo y Remo\n");
                        printf("D. Aquiles\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [10] = 11;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 12:

                        printf("\n¿Que carabela no volvio del viaje en el que Colon arribo a América por primera vez?\n\n");
                        printf("A. La Santa Maria\n");
                        printf("B. La Niña\n");
                        printf("C. La Pinta\n");
                        printf("D. Ninguna de las anteriores\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'a' || respuesta == 'A')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [11] = 12;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 13:

                        printf("\n¿Quien fue el primer presidente de Estados Unidos?\n\n");
                        printf("A. Thomas Jefferson\n");
                        printf("B. Andrew Jackson\n");
                        printf("C. Abraham Lincoln\n");
                        printf("D. George Washington\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'd' || respuesta == 'D')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [12] = 13;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 14:

                        printf("\n¿Cuanto duro la Guerra de los Cien Años?\n\n");
                        printf("A. 108\n");
                        printf("B. 116\n");
                        printf("C. 99\n");
                        printf("D. 100\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'b' || respuesta == 'B')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [13] = 14;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;

                case 15:

                        printf("\n¿En que año el hombre piso la Luna por primera vez?\n\n");
                        printf("A. 1897\n");
                        printf("B. 1952\n");
                        printf("C. 1969\n");
                        printf("D. 1878\n\n");
                        printf("Ingrese su respuesta: ");
                        respuesta = getchar();


                        if (respuesta == 'c' || respuesta == 'C')
                        {
                            printf("\n¡La respuesta es correcta!\n");
                            fflush(stdin);
                            salida = 0;

                            repetidas [14] = 15;

                        }else
                        {
                            printf("\nEstas equivocado y perdiste.\n");
                            fflush(stdin);
                            salida = 1;

                        }

                    break;
        }

        contadorPuntaje++;

    }while (salida == 0);

    printf("\nFelicidades por intentar.\nEl total de puntos es: %i/%i.\n", contadorPuntaje, TAM);
