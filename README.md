# 🍿 Carga Películas - Aplicación de Consola en C

Este proyecto es una aplicación de consola, fue hecho en 2022 y se trata de un Menú cuyas funcionalidades esenciales trabajan con la manipulación (load and save) de archivos de texto, y el uso de la LinkedList de C. En este caso, con un listado de películas.

## 📘 Descripción

Carga Películas es una aplicación de consola que permite cargar un listado de películas desde un archivo de texto (de preferencia .txt o .csv). La idea del proyecto es jugar con la acción de cargar y guardar datos desde archivos externos (deben estar en la carpeta src). Una vez cargada una lista de películas, el menú te guía a asignarles ratings, géneros, y ordenarlas. Después, tendrás la posibilidad de guardar todo en un archivo que quieras, ya sea nuevo o no. Otra opción es generar listas filtradas por género, las cuales también se pueden guardar en un nuevo archivo que se crea automáticamente.

## 👨‍💻 Menú

Así se ve la pantalla principal al iniciar el programa.

<img src="https://github.com/user-attachments/assets/396b4f7d-4d55-4364-a4f4-dead583e8420" width="455"/>

## 🛠️ Funcionalidades

- **Cargar Archivo**: Le pide el nombre de un archivo al usuario (de preferencia .txt o .csv), y si el archivo existe dentro del proyecto, se va a cargar la lista de películas.
- **Mostrar Películas**: Muestra la lista de todas las películas.
- **Asignar Información**: Una vez la lista esté cargada, se deben asignar ratings y géneros a todas las películas. Se hace automáticamente.
- **Filtrar por Género**: Permite que el usuario elija un género de los disponibles, y crea un archivo con las películas que le correspondan.
- **Ordenar Películas**: Ordena por género y rating de forma descendente a la lista cargada.
- **Guardar Películas**: Le pide el nombre de un archivo al usuario (de preferencia .txt o .csv) y ahí es donde guardará la lista modificada. El archivo puede ser existente o no.

## ✍️ Formato para los archivos

Cada archivo que el programa puede leer y escribir, debe verse de la siguiente forma para que funcione correctamente:

```
id_peli,titulo,genero,rating
1,Ratatouille,Comedia,7.5
2,Raging Bull,Accion,8.5
3,The Exorcist,Terror,9.7
```

## 🚀 Cómo Ejecutar el Proyecto

Para ejecutar este proyecto, hay que seguir estos pasos:

1. Compilar el proyecto con un IDE que cuente con compilador o mediante la línea de comandos.
2. Ejecutar el archivo `outDebug.exe` que se genera en la carpeta `build/Debug`.
3. Listo, ya se puede interactuar con el menú Carga Películas desde la consola. 🎉

- Usando **Visual Studio Code**, la extensión ***C/C++ Runner*** es perfecta para compilar y ejecutar el programa. Para hacerlo, simplemente hay que seleccionar la carpeta 'src'. Al compilar, se crea el archivo 'outDebug.exe' (en la ubicación que determine el archivo 'launch.json' que está en la carpeta '.vscode'). Este archivo **'outDebug.exe'** es el que correrá la aplicación.

  <img src="https://github.com/user-attachments/assets/21aac7da-b211-4983-b944-9590aa125365" width="500"/>

## 📌 Aclaraciones
- Para evitar un error, se recomienda compilar y ejecutar el programa con la extensión C/C++ Runner de Visual Studio Code, pero en su menú original:
 
  <img src="https://github.com/user-attachments/assets/3c5c3683-7e50-4f39-a5a4-420cd6621083" width="700"/>

- Al igual que otros de mis proyectos en C, seguramente la aplicación tiene errores de funcionalidad dependiendo de cómo se manipulen los archivos que persisten los datos.
- Fue creado en 2022, mientras cursaba la carrera de Tecnicatura Universitaria en Programación, en la Universidad Tecnológica Nacional.
- No se aceptan contribuciones ni está bajo ninguna licencia específica.

## 🗃️ Otros proyectos similares
- [ABM de Pasajeros - Aplicación de consola en C](https://github.com/miguecode/c-abm-pasajeros)
- [ABM de Notebooks - Aplicación de consola en C](https://github.com/miguecode/c-abm-notebooks)
- [Calcular Costos - Aplicación de consola en C](https://github.com/miguecode/c-calcular-costos)
