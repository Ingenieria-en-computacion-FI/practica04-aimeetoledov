#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main() {
printf("===== Repo de ejercicios de nodos =====\n");

Nodo* n1 = crearNodo(10);
if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

Nodo* arreglo = crearArregloNodos(5);
printf("Arreglo inicial: ");
for (int i = 0; i < 5; i++) {
printf("[%d] ", arreglo[i].dato);
}
printf("\n");

int tam = 5;
arreglo = agregarNodo(arreglo, &tam, 99);
printf("Arreglo actualizado: ");
for (int i = 0; i < tam; i++) {
printf("[%d] ", arreglo[i].dato);
}
printf("\n");

liberarNodos(arreglo, tam);
liberarNodos(n1, 1);

Nodo* inicio = construirTresNodos();
printf("Lista de tres nodos: ");
Nodo* temporal = inicio;
while (temporal != NULL) {
printf("%d -> ", temporal->dato);
temporal = temporal->siguiente;
}
printf("NULL\n");

int total = contarNodos(inicio);
printf("Total de nodos: %d\n", total);

Nodo* desdeEntrada = crearNodosPorEntrada();
printf("Nodos desde entrada: ");
temporal = desdeEntrada;
while (temporal != NULL) {
printf("%d -> ", temporal->dato);
temporal = temporal->siguiente;
}
printf("NULL\n");

return 0;
}
