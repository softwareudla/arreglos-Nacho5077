#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion, num, ingles = 0, matematicas = 0, fisica = 0;
    float suma, notamayor, promedio, notamenor;
    char estudiantes[5][20];
    float notas[5];

    do {
        printf("BIENVENIDO AL SISTEMA DE PASAR NOTAS\n");
        printf("Seleccione que asignatura desea editar\n");
        printf("1. INGLES\n");
        printf("2. MATEMATICAS\n");
        printf("3. FISICA\n");
        printf("4. SALIR\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        // Limpiar el buffer de entrada
        while (getchar() != '\n');

        switch (opcion) {
            case 1:
                if (ingles == 1) {
                    printf("Ya ha ingresado estudiantes en inglés\n");
                } else {
                    printf("INGLES\n");
                    printf("Ingrese la cantidad de estudiantes que quiere ingresar: ");
                    while (scanf("%d", &num) != 1 || num <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese el nombre del estudiante\n");
                    for (int i = 0; i < num; i++) {
                        printf("Estudiante %d: ", i + 1);
                        scanf("%s", estudiantes[i]);
                    }

                    suma = 0;
                    notamayor = 0;
                    notamenor=10;

                    printf("Ingrese cuántas notas va a ingresar por estudiante: ");
                    int num_notas;
                    while (scanf("%d", &num_notas) != 1 || num_notas <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese las notas de los estudiantes:\n");
                    for (int i = 0; i < num; i++) {
                        printf("Notas de %s:\n", estudiantes[i]);
                        suma = 0; // Reiniciar la suma para cada estudiante
                        for (int j = 0; j < num_notas; j++) {
                            float nota;
                            do {
                                printf("Nota %d: ", j + 1);
                                scanf("%f", &nota);
                                if (nota < 0 || nota > 10) {
                                    printf("Nota no válida. Ingrese una nota entre 0 y 10\n");
                                }
                            } while (nota < 0 || nota > 10);

                            suma += nota;

                            if (nota > notamayor) {
                                notamayor = nota;
                            }
                            if (nota < notamenor) {
                                notamenor = nota;
                            }
                        }

                        promedio = suma / num_notas;
                        printf("Promedio de %s: %.2f\n", estudiantes[i], promedio);
                    }

                    printf("La nota mayor es: %.2f\n", notamayor);
                    printf("La nota menor es: %.2f\n", notamenor);
                    ingles++;
                }
                break;

            case 2:
                if (matematicas == 1) {
                    printf("Ya ha ingresado estudiantes en matemáticas\n");
                } else {
                    printf("MATEMATICAS\n");
                    printf("Ingrese la cantidad de estudiantes que quiere ingresar: ");
                    while (scanf("%d", &num) != 1 || num <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese el nombre del estudiante\n");
                    for (int i = 0; i < num; i++) {
                        printf("Estudiante %d: ", i + 1);
                        scanf("%s", estudiantes[i]);
                    }

                    suma = 0;
                    notamayor = 0;
                    notamenor = 10;

                    printf("Ingrese cuántas notas va a ingresar por estudiante: ");
                    int num_notas;
                    while (scanf("%d", &num_notas) != 1 || num_notas <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese las notas de los estudiantes:\n");
                    for (int i = 0; i < num; i++) {
                        printf("Notas de %s:\n", estudiantes[i]);
                        suma = 0; // Reiniciar la suma para cada estudiante
                        for (int j = 0; j < num_notas; j++) {
                            float nota;
                            do {
                                printf("Nota %d: ", j + 1);
                                scanf("%f", &nota);
                                if (nota < 0 || nota > 10) {
                                    printf("Nota no válida. Ingrese una nota entre 0 y 10\n");
                                }
                            } while (nota < 0 || nota > 10);

                            suma += nota;

                            if (nota > notamayor) {
                                notamayor = nota;
                            }
                            if (nota < notamenor) {
                                notamenor = nota;
                            }
                        }

                        promedio = suma / num_notas;
                        printf("Promedio de %s: %.2f\n", estudiantes[i], promedio);
                    }

                    printf("La nota mayor es: %.2f\n", notamayor);
                    printf("La nota menor es: %.2f\n", notamenor);
                    matematicas++;
                }
                break;

            case 3:
                if (fisica == 1) {
                    printf("Ya ha ingresado estudiantes en física\n");
                } else {
                    printf("FISICA\n");
                    printf("Ingrese la cantidad de estudiantes que quiere ingresar: ");
                    while (scanf("%d", &num) != 1 || num <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese el nombre del estudiante\n");
                    for (int i = 0; i < num; i++) {
                        printf("Estudiante %d: ", i + 1);
                        scanf("%s", estudiantes[i]);
                    }

                    suma = 0;
                    notamayor = 0;
                    notamenor = 10;

                    printf("Ingrese cuántas notas va a ingresar por estudiante: ");
                    int num_notas;
                    while (scanf("%d", &num_notas) != 1 || num_notas <= 0) {
                        printf("Entrada no válida. Por favor, ingrese un número entero positivo: ");
                        while (getchar() != '\n'); // Limpiar el buffer
                    }

                    while (getchar() != '\n'); // Limpiar el buffer

                    printf("Ingrese las notas de los estudiantes:\n");
                    for (int i = 0; i < num; i++) {
                        printf("Notas de %s:\n", estudiantes[i]);
                        suma = 0; // Reiniciar la suma para cada estudiante
                        for (int j = 0; j < num_notas; j++) {
                            float nota;
                            do {
                                printf("Nota %d: ", j + 1);
                                scanf("%f", &nota);
                                if (nota < 0 || nota > 10) {
                                    printf("Nota no válida. Ingrese una nota entre 0 y 10\n");
                                }
                            } while (nota < 0 || nota > 10);

                            suma += nota;

                            if (nota > notamayor) {
                                notamayor = nota;
                            }
                            if (nota < notamenor) {
                                notamenor = nota;
                            }
                        }

                        promedio = suma / num_notas;
                        printf("Promedio de %s: %.2f\n", estudiantes[i], promedio);
                    }

                    printf("La nota mayor es: %.2f\n", notamayor);
                    printf("La nota menor es: %.2f\n", notamenor);
                    fisica++;
                }
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}
