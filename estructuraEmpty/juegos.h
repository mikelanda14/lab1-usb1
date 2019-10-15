typedef struct{
    char nomJue[31];
    int idJue;
    float precioJue;
    int isEmpty;
}eJue;
void inizisEmpty(eJue cart[],int m);
void carga(eJue cart[],int m);
void mostarTodo(eJue cart[],int m);
void mostrarUno(eJue cart);

