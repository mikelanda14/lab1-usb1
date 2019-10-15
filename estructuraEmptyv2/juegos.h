typedef struct{
int anio;
int mes;
int dia;
}eFecha;
typedef struct{
    char nomJue[31];
    int idJue;
    float precioJue;
    eFecha fechaRe;
    int isEmpty;
}eJue;
void inizisEmpty(eJue cart[],int m);
void carga(eJue cart[],int m);
void mostarTodo(eJue cart[],int m);
void mostrarUno(eJue cart);
void menu(eJue cart[],int MAX);
void baja(eJue cart[],int m);
void modifi(eJue cart[],int m);
void ordenAnio(eJue cart[],int m);
int generarId(eJue cart[],int m);
void ordenNombre(eJue cart[],int m);
