typedef struct
{
    int dia,mes,anio;
} eFecha;

typedef struct
{
    int menuId;
    char descrip[51];
    int importe;
} eMenu;

typedef struct
{
    int legajo;
    char apellido[51];
    char nombre[51];
    char sexo;
    float salario;
    eFecha fechaIngreso;
    int idSecator;
    int isEmpty;
} eEmpleado;
typedef struct
{
    int idAlmuerzo;
    int codigoMenu;
    int legajoEmpleado;
    eFecha fechaCompra;
} eAlmuerzo;
typedef struct
{
    int id;
    char descripcion[51];
} eSector;

void listas(eEmpleado personal[],eMenu menuR[],eSector sector[]);


void menu(eMenu me[]);
void alta();
