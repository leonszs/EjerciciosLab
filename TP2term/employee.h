#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string.h>
#include "utn.h"
#define OCUPADO 0
#define LIBRE 1
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} eEmployee;

#endif // EMPLOYEE_H_INCLUDED
int menu();
/** \brief recibie un string con el menu y devuelve la opcion seleccionada
 *
 * \return int valor del menu
 *
 */

int employeeInit(eEmployee emple[],int cant);
/** \brief inicializa las etructuras para que esten libres
 *
 * \param recibe un array estructura
 * \param int cantidad del array
 * \return int retorna un entero para saber si se hizo o no la operacion
 *
 */

int addEmployees(eEmployee emple[],int tam,int id, char name[],char lastName[],float salary,int sector);

/** \brief Ingreso de empleado,ingresa el id, el nombre, apellido, salario y sector
 *
 * \param emple[] eEmployee
 * \param tam int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int retorna un entero si logra hacer la operacion
 *
 */

 int printEmployees(eEmployee emple[],int tam);
/** \brief Muestra todos los empleados ingresados
 *
 * \param emple[] eEmployee
 * \param tam int
 * \return int retorna un entero 1 si logro hacer la operacion sino retorna un -1
 *
 */

int printEmployee(eEmployee emple);
/** \brief Muestra un empleado
 *
 * \param emple eEmployee
 * \return int retorna un entero si pudo mostrarlo
 *
 */

int removeEmployee(eEmployee empl[],int, int id);
/** \brief Da de baja un empleado(baja logica)
 *
 * \param empl[] eEmployee
 * \param tam int
 * \param id int
 * \return int retorna un 1 si logra hacer la operacion, sino retorna -1
 *
 */

int modifyEmployee(eEmployee empl[],int, int id);
/** \brief Modifica los datos del empleado, recibiendo el ID para modificarlo
 *
 * \param empl[] eEmployee
 * \param tam int
 * \param id int
 * \return int retornac 1 si logro hacer hacer la operacion o -1 si no lo hizo
 *
 */

void harcodeStruct(eEmployee empleado[],int tam );
/** \brief fuerza el ingreso de datos para testear el programa
 *
 * \param empleado[] eEmployee
 * \param tam int
 * \return void no retorna nada
 *
 */





int findEmployeeById(eEmployee emple[],int tam,int id);
/** \brief Busca el empleado por id, recibe la estructura, el tamaño del array estructura y el id a buscar
 *
 * \param Recibe un array estructura
 * \param int tamaño
 * \param int Id
 * \return int indice retorna el indice(lugar conde se guardo)
 *
 */


int sortEmployees(eEmployee empl[],int tam);
/** \brief Ordena empleados por Apellido si encuentra uno igual lo ordena por sector
 *
 * \param empl[] eEmployee
 * \param tam int
 * \return int un 1 si logra realizar la operacion o -1 si no lo logra
 *
 */



int emptyEmployees(eEmployee emple[],int tam);
/** \brief verifica si hay empleados ingresados
 *
 * \param emple[] eEmployee
 * \param tam int
 * \return int retorna un entero 1 si logro hacer la operacion sino retorna un -1
 *
 */



int printPromedEmployees(eEmployee emple[],int tam);
/** \brief Muestra el total de los sueldos, el promedio de los mismos y la cantidad de empleados que superan ese promedio
 *
 * \param emple[] eEmployee
 * \param tam int
 * \return int retorna un entero 1 si logro hacer la operacion sino retorna un -1
 */
