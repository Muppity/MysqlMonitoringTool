# Mysql Monitoring Tool
##  Un prototipo para un escenario de observaciones
## Objetivo: 
### Este repositorio esta dedicado para crear todos los recursos asociados en las observaciones cualitativas diseñadas en un laboratorio de ambiente cerrado creado para resolver cuestionamientos iniciales identificados para la mejora del servicio de Control Académico de la Facultad de Humanidades de la Universidad de San Carlos de Guatemala.

## Objetivo de Observación
La búsqueda del análisis tiene como objeto una observación profunda del comportamiento de la base de datos desde un punto de vista de la calidad. Con calidad se refiere a que con el fin es lograr observaciones de atributos de calidad especificamente los atributos de fiabilidad, y buscar identificar de que de manera que pueda comprenderse si las preguntas hechas por el equipo tecnico son relacionadas a la calidad y resolver temas como:

* ¿Es necesario un cambio de infraestructura para mejorar el soporte del servicio?
* ¿El problema fundamental de la aplicación tiene que ver con el rendimiento de la base de datos?
* ¿Mejoraran la calidad del servicio al mejorar la eficiencia del desempeño del uso de los recursos?

##Pasos seguidos para la creacion del ambiente

1) Creacion del escenario MySQL DB en Debian Linux



2) Creación del contenedor con la configuración de RQDA en R version estable 3.

3) Se configuró un canal de Slack para guardar las observaciones a modo de etnografía cronológica de todo lo descrito.
[Canal de Slack](https://app.slack.com/client/T0189P8RJJC/C017D6FULNS)

4) Se configuró un contenedor con la base de datos y el servicio de recepción monitoreo y transformación de mensajes.

5) Seguidamente se inicio con el proceso de captura de logs el cual ocurrió 1 vez por dia durante un periodo de 30 dias por varias horas hasta lograr el limite diseñado de 7000 entradas.

6) Una vez se obtuvieron los logs y los memos de observación, se procedio a cargarlos en la herramienta Atlas.ti donde se realizaron las ejecuciones de revisión de documento en búsqueda de patrones que condujeran a la codificación y las categorías asociadas.


![Atlas Findings](/Pictures/Screenshot 2021-10-15 195634.png)

![Categories](/Pictures/Screenshot 2021-10-15 233330.png)

![Categories](/Pictures/Screenshot 2021-10-15 233302.png)

![Memo](/Pictures/Screenshot 2021-10-15 233424.png)

![Lgs](/Pictures/Screenshot 2021-10-15 233511.png)

![lgs](/Pictures/Screenshot 2021-10-15 233414.png)

![Cat2](/Pictures/Screenshot 2021-10-15 233343.png)

![Entities](/Pictures/Screenshot 2021-10-15 210157.png)

![Filtering](/Pictures/Screenshot 2021-10-15 200641.png)
