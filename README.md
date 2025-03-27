[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
## Conveniencias
1. Evita subir archivos innecesarios: Como archivos temporales, de configuración local o dependencias.
2. Mejora la organización del repositorio: Mantiene solo lo esencial para que el proyecto funcione correctamente.
3. Reduce el tamaño del repositorio: Al no incluir archivos generados automáticamente, el repo es más liviano.
4. Previene problemas de configuración: Como archivos que contienen credenciales o rutas específicas de tu máquina.

## ¿Cuando hacerlo?
- **Desde el inicio del proyecto:** Antes de hacer el primer commit.
- **Cuando detectas archivos innecesarios en el repositorio:** Puedes agregarlos y eliminarlos de Git después.
- **Al trabajar en equipo:** Para evitar que cada desarrollador suba archivos que no deberían estar en el repo.

## Configuracion
El archivo _.gitignore_ se coloca en la raíz del proyecto y se escribe en texto plano con reglas para ignorar archivos o carpetas.
En este caso para ignorar el archivo ignorar.txt lo que hago es crear el archivo .gitignore con el codigo echo "ignorar.txt" >> .gitignore lo que hace es crear el archivo y que su contenido tenga ignorar.txt que lo que hara es que ignore especificamente ese archivo
Tambien se puede colocar directorio de carpetas o extensiones a las cuales ignorar por ejemplo:

### Ignora archivos del sistema Mac 
.DS_store

### Ignora la carpeta node_modules
node_modules

### Ignora todos los archivos de texto
*.txt

### Ignora los archivos relacionados a API keys
.env

### Ignora archivos de configuración SASS
.sass-cache