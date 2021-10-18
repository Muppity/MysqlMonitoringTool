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

![Installation](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/finish-install_reboot_in_progress_0.png)


2) Creación del contenedor con la configuración de RQDA en R version estable 3.
2.1) Preparando las librerias

![libraries](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%20from%202021-10-06%2013-02-02.png)
![lib2](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%20from%202021-10-06%2013-33-30.png)
![container1](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%20from%202021-10-08%2018-28-02.png)


2.1) Ejecutando el Container
![](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%20from%202021-10-08%2018-17-36.png)

3) Se configuró un canal de Slack para guardar las observaciones a modo de etnografía cronológica de todo lo descrito.
![Canal de Slack](https://app.slack.com/client/T0189P8RJJC/C017D6FULNS)

4) Se configuró un contenedor con la base de datos y el servicio de recepción monitoreo y transformación de mensajes.

![LogsView](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screen%20Shot%202021-10-15%20at%2011.42.13%20PM.png)


5) Seguidamente se inicio con el proceso de captura de logs el cual ocurrió 1 vez por dia durante un periodo de 30 dias por varias horas hasta lograr el limite diseñado de 7000 entradas.

6) Una vez se obtuvieron los logs y los memos de observación, se procedio a cargarlos en la herramienta Atlas.ti donde se realizaron las ejecuciones de revisión de documento en búsqueda de patrones que condujeran a la codificación y las categorías asociadas.

![LogsAtlas](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233511.png)

6.1) Se hizo las cargas de los memos de el log de observación durante el laboratorio, como se muestra a continuación.

![Memo](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233424.png)

![AtlasMemos](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233414.png)

6.2) Se ejecuto el proceso de Atlas.TI para encontrar patrones y hallazgos para categorizar y agrupar

![Atlas Findings](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20195634.png)


![Filtering](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20200641.png)

6.3) El proceso de Atlas.TI permitió la generación de las siguientes categorias detalladas a continuación

![Categories](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233330.png)


![Categories](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233302.png)

![Cat2](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20233343.png)

6.4) Asī mismo se muestran las entidades que se obtuvieron durante el proceso.
![Entities](https://github.com/Muppity/MysqlMonitoringTool/blob/main/Pictures/Screenshot%202021-10-15%20210157.png)


