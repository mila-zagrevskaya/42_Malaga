Parte obligatoria
Nombre de función
get_next_line
Prototipo char *get_next_line(int fd);
Archivos a entregar
get_next_line.c, get_next_line_utils.c,
get_next_line.h
Parámetros fd: File descriptor del que leer
Valor devuelto Si todo va bien: la línea leída
En caso de fallo o si la lectura termina: NULL
Funciones autorizadas
read, malloc, free
Descripción Escribe una función que devuelva la línea leída de
un file descriptor
• Llamar a tu función get_next_line de manera repetida (por ejemplo, usando un
bucle) te permitirá leer el contenido del archivo hacia el que apunta el file descriptor,
línea a línea, hasta el final.
• Tu función deberá devolver la línea que se acaba de leer.
Si no hay nada más que leer o si ha ocurrido un error, deberá devolver NULL.
• Asegúrate de que tu función se comporta adecuadamente cuando lea de un archivo
y cuando lea de stdin.
• Ten en cuenta que la línea devuelta debe terminar con el caracter
n, excepto si se ha llegado al final del archivo y esté no termina con un caracter
n.
• En el header get_next_line.h deberás tener como mínimo el prototipo de la función get_next_line.
• Añade todas las funciones de ayuda que necesites en el archivo get_next_line_utils.c

_________________________________

Parte bonus
Este proyecto es bastante directo y no deja mucho margen a los bonus. Sin embargo,
confiamos en tu creatividad. Si has completado la parte obligatoria, inténtalo con estos
bonus.
Aquí tienes los requisitos de la parte bonus:
• Desarrolla get_next_line() con una sola variable estática.
• Tu get_next_line tiene que ser capaz de gestionar múltiples fd a la vez. Es decir,
si tienes tres fd disponibles para lectura (por ejemplo: 3, 4 y 5), debes poder utilizar
get_next_line una vez sobre el fd 3, otra vez sobre el fd 4, y otra vez sobre el fd
5 de forma alterna. Y sí, no debe perder el hilo de lectura de cada uno de los fd.
Añade el sufijo _bonus.[c\h] a los archivos de esta parte bonus. Esto quiere decir
que además de los archivos de la parte obligatoria, tienes que entregar los tres archivos
siguientes:
• get_next_line_bonus.c
• get_next_line_bonus.h
• get_next_line_utils_bonus.c

________________________________

To compile the program, use the following command:

gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c get_next_line.h -o gnl

or

gcc *.c get_next_line.h
./a.out ./examples/Notre-Dame.txt

gcc *.c get_next_line_bonus.h
./a.out ../examples/Notre-Dame.txt ../examples/lorem.txt

To execute the program, use the following command:

./gnl txt01.txt
./gnl txt02.txt
./gnl txt03.txt

Replace file1, file2, etc. with the names of the files you want to read.
