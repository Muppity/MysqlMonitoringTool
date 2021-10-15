#include <stdio.h>
#include <chrono>
#include <ctime>  
#include <iostream>
#include <stdlib.h>
#include <fstream>

char* getResponse(int times)
{
    int x;
    char *outstream=new char[500];
    char response[255];
    time_t rawtime, newtime;
    struct tm * timeinfo, *newtimeinfo;
    char buffer [100];


    time (&rawtime);
    timeinfo = localtime (&rawtime);
    newtime= rawtime +rand()%60+times;
    newtimeinfo = localtime (&newtime);
    strftime (buffer,100," %d %m %y - %I:%M:%S%p.",newtimeinfo);
    strcpy(outstream,buffer); 
    x=rand()%51;
    switch (x)
    {  
        case 0: strcat(outstream, "- La base de datos se encuentra en menos de 10% de procesamiento, el estado esta debajo de lo normal no hay presión"); break;
        case 1: strcat(outstream," - La base de datos se encuentra en 20% de procesamiento, el estado  es Normal");  break;
        case 2: strcat(outstream," - La base de datos se encuentra en 20% de procesamiento, el estado es Normal"); break;
        case 3: strcat(outstream," - La base de datos se encuentra en 40% de procesamiento, el estado es Normal"); break;
        case 4: strcat(outstream," - La base de datos se encuentra en 60% de procesamiento, se encuentra en estado de Estress por carga de transacciones"); break;
        case 5: strcat(outstream," - La base de datos se encuentra en 80% de procesamiento, se encuentra en estado de Estress  por carga de transacciones"); break;
        case 6: strcat(outstream," - La base de datos se encuentra en 90% de procesamiento, se encuentra en estado de presión critica"); break;
        case 7: strcat(outstream," - La base de datos se encuentra en 95% de procesamiento, se encuentra en situación crítica el servidor deja de atender peticiones y no procesara mas transacciones nuevas"); break;
        case 8: strcat(outstream," - La base de datos se encuentra en 100% de procesamiento, se encuentra en situación crítica, la presión sobre el servidor ha causado fallo en el servicio, no se puede acceder, no hay acceso al servidor"); break;
        case 9: strcat(outstream," - La base de datos se encuentra en menos de 10% del uso de memoria, se encuentra en situación de inactividad, hay recursos sin utilizar debido a bajas transacciones en los usuarios"); break;
        case 10: strcat(outstream," - La base de datos se encuentra en 30% del uso de memoria, se encuentra en situación normal, inician los procesos de usuarios"); break;
        case 11: strcat(outstream," - La base de datos se encuentra en 50% del uso de memoria, se encuentra en situación de cambio, aunmentan los procesos de usuarios "); break;
        case 12: strcat(outstream," - La base de datos se encuentra en 80% del uso de memoria, se encuentra en situación de incremento rápido, la carga de los trabajos de usuario se reflejan en la memoria intermedia"); break;
        case 13: strcat(outstream," - La base de datos se encuentra en 90% del uso de memoria, rendimiento de las consultas es más lento de lo esperado"); break;
        case 14: strcat(outstream," - La base de datos se encuentra en 90% del uso de memoria, La carga de trabajo o un trabajo por lotes no finaliza tan pronto como cabría esperar, o se produce una reducción en la tasa o rendimiento de la transacción."); break;
        case 15: strcat(outstream," - La base de datos se encuentra en 90% del uso de memoria, El sistema en general funciona con más lentitud."); break;
        case 16: strcat(outstream," - La base de datos se encuentra en 90% del uso de memoria, El sistema en general funciona con más lentitud."); break;
        case 17: strcat(outstream," - Se sospecha que hay un cuello de botella en uno de los recursos del sistema, como un nodo de procesador, o la tarjeta de E/S o memoria."); break;
        case 18: strcat(outstream," - El proceso de consulta u otro proceso de carga de trabajo consume más recursos de los esperados o disponibles."); break;
        case 19: strcat(outstream," - El proceso de consulta u otro proceso de carga de trabajo consume más recursos de los esperados o disponibles."); break;
        case 20: strcat(outstream," - Los subprocesos del sistema presenta mejor rendimiento que otro, se necesita revisar el sistema de archivos y los procesos temporales."); break;
        case 21: strcat(outstream," - Una consulta, una aplicación o un sistema deja de funcionar."); break;
        case 22: strcat(outstream," - Lentitud en las consultas de los subprocesos, revise las funciones I/O para identificar el problema logico del sistema de archivos."); break;
        case 23:  strcat(outstream," - Lentitud en las consultas de los subprocesos, revise las velocidad de respuesta del disco y reemplace si es necesario."); break;
        case 24:  strcat(outstream," - Insuficiente uso de la memoria, un programa tercero esta robando la memoria asignada revise"); break;
        case 25:  strcat(outstream," - El usuario identificado esta tomando la mayor cantidad de recursos del sistema sin concluir la operación verifique"); break;
        case 26:  strcat(outstream," - Lentitud en las consultas de los subprocesos, revise las velocidad de respuesta del disco y reemplace si es necesario."); break;
        case 27:  strcat(outstream," - Dos recursos comparten el mismo objeto sin liberarlo uno del otro, seleccione alguna sesión para desbloquear el conflicto."); break;
        case 28:  strcat(outstream," - Sobrecarga causó volcado del uso de la memoria, revise el memorydump para identificar el proceso sospechoso"); break;
        case 29:  strcat(outstream," - El proceso de escritura a disco se ha congelado, verifique si se ha creado un snapshot de la maquina virtual"); break;
        case 30:  strcat(outstream," - El sistema operativo se ha apagado de manera abrupta, verifique los procesos para identificar la causa raiz."); break;
        case 31:  strcat(outstream," - Bajo rendimiento en la velocidad de las consultas verifique la tasa de transferencia de la interface de red."); break;
        case 32:  strcat(outstream," - No se pudo iniciar las bases de sistema, verifique si existe un problema en el motor de archivos."); break;
        case 33:  strcat(outstream," - Error al iniciar la base de datos de catalogo, verifique el registro de control"); break;
        case 34:  strcat(outstream," - Error al establecer una conexión al servidor. La causa del problema en la conexión puede deberse a que el motor no permite conexiones remotas en su configuración predeterminada. (proveedor: Interfaces de red; - El servidor no admite el protocolo requerido) ."); break;
        case 35:  strcat(outstream," - Advertencia: error irrecuperable %d en %S_DATE. Anote el error y la hora, y póngase en contacto con el administrador del sistema.."); break;
        case 36:  strcat(outstream," - Tiempo de espera agotado. El tiempo de espera transcurrió antes de que se completase la operación, o bien el servidor no responde. ."); break;
        case 37:  strcat(outstream," - Demasiados nombres de tabla en la consulta. El máximo permitido."); break;
        case 38:  strcat(outstream," - Hay más columnas en la instrucción INSERT que valores en la cláusula VALUES. El número de valores de VALUES debe coincidir con el de columnas de INSERT."); break;
        case 39:  strcat(outstream," - Hay menos columnas en la instrucción INSERT que valores en la cláusula VALUES. El número de valores de VALUES debe coincidir con el de columnas de INSERT."); break;
        case 40:  strcat(outstream," - Un desencadenador LOGON devolvió un conjunto de resultados. Modifique el desencadenador LOGON para que no devuelva conjuntos de resultados."); break;
        case 41:  strcat(outstream," - El valor proporcionado para tiempo de espera no es válido. El tiempo de espera debe ser un entero válido comprendido entre 0 y 2147483647."); break;
        case 42:  strcat(outstream," - No se pudo continuar el examen con NOLOCK debido al movimiento de los datos."); break;
        case 43:  strcat(outstream," - No se encontró una entrada para la tabla o índice con el id. de partición %I64d en la base de datos %d. Este error puede producirse si un procedimiento almacenado hace referencia a una tabla quitada o los metadatos están dañados. "); break;
        case 44:  strcat(outstream," - No se encontró una entrada para la tabla o índice con el id. de objeto %d (id. de partición %I64d) en la base de datos %d. Este error puede producirse si un procedimiento almacenado hace referencia a una tabla quitada o los metadatos están dañados. "); break;
        case 45:  strcat(outstream," - Error al intentar capturar la página lógica %S_PGID de la base de datos %d, ya que pertenece a la unidad de asignación %I64d, no a %I64d"); break;
        case 46:  strcat(outstream," - Incoherencia de metadatos. El id. de grupo de archivos %ld especificado para la tabla '%.*ls' no existe."); break;
        case 47:  strcat(outstream," - No se encontró ninguna entrada de catálogo para la partición con id. %I64d en la base de datos %d. Los metadatos son incoherentes."); break;
        case 48:  strcat(outstream," - El árbol B no está vacío al activarse en RowsetBulk."); break;
        case 49:  strcat(outstream," - Valor de encabezado de una página no válido. "); break;
        case 50:  strcat(outstream," - No se puede insertar ni actualizar una fila porque el tamaño total de columna variable, incluida la sobrecarga, es %d bytes más del límite."); break;
        case 51:  strcat(outstream," - No se encontró una entrada para el conjunto de filas de la tabla de trabajo con el id. de partición"); break;
        default:  strcat(outstream,"No existe error asociado"); break;
    }
    //std::cout << outstream;

    
    return outstream;

}

FILE * pFileTXT;

int main ()
{

    time_t rawtime;
    struct tm * timeinfo;
    char buffer [100];
    time (&rawtime);
    timeinfo = localtime (&rawtime);

for (int days=15; days<=30; days++)
{
    strftime (buffer,100,"-%y_%H-%M-%S",timeinfo);
    char name[30]="DBLog"; 
    sprintf(name,"DBLog%d-09",days);
    strcat(name,buffer);
    strcat(name,".txt");    
    pFileTXT = fopen (name,"a");// use "a" for append, "w" to overwrite, previous content will be deleted
    int stop=0;
    while (stop<7000)
    {

/*
auto start = std::chrono::system_clock::now();
    // Some computation here
auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

   std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
*/
    fprintf (pFileTXT,"%s\n",getResponse(stop));
    stop++;
    }
    fclose(pFileTXT);
}
 return 0;
}