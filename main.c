#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void greet_user() {
    char name[100];
    printf("\n--- Saludo ---\n");
    printf("Por favor, ingresa tu nombre completo: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("¡Hola, %s! Es un placer conocerte.\n", name);
}

void perform_addition() {
    int num1, num2;
    printf("\n--- Suma ---\n");
    printf("Ingresa el primer número: ");
    if (scanf("%d", &num1) != 1) {
        printf("Entrada inválida. Por favor, ingresa un número entero.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("Ingresa el segundo número: ");
    if (scanf("%d", &num2) != 1) {
        printf("Entrada inválida. Por favor, ingresa un número entero.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("El resultado de la suma es: %d\n", num1 + num2);
}

void perform_subtraction() {
    int num1, num2;
    printf("\n--- Resta ---\n");
    printf("Ingresa el primer número: ");
    if (scanf("%d", &num1) != 1) {
        printf("Entrada inválida. Por favor, ingresa un número entero.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("Ingresa el segundo número: ");
    if (scanf("%d", &num2) != 1) {
        printf("Entrada inválida. Por favor, ingresa un número entero.\n");
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("El resultado de la resta es: %d\n", num1 - num2);
}

int main() {
    int choice;

    printf("--- Aplicación de Consola en C Mejorada ---\n");

    do {
        printf("\n--- MENÚ PRINCIPAL ---\n");
        printf("1. Saludar\n");
        printf("2. Realizar Suma\n");
        printf("3. Realizar Resta\n");
        printf("4. Salir\n");
        printf("Elige una opción: ");

        if (scanf("%d", &choice) != 1) {
            printf("Opción inválida. Por favor, ingresa un número del 1 al 4.\n");
            clear_input_buffer();
            choice = 0;
            continue;
        }
        clear_input_buffer();

        switch (choice) {
            case 1:
                greet_user();
                break;
            case 2:
                perform_addition();
                break;
            case 3:
                perform_subtraction();
                break;
            case 4:
                printf("Saliendo de la aplicación. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no reconocida. Por favor, elige una opción válida (1-4).\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
