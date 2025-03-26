FLTK Demo - Funciones básicas para GUI
Este es un proyecto cuyo objetivo es mostrar el uso de varias funciones de la librería FLTK en el entorno de Linux.

Requisitos:
- Sistema operativo Linux (Ubuntu).
- Un compilador como g++ instalado. Para instalarlo, utiliza el siguiente comando en la terminal de Ubuntu: sudo apt-get install g++
- Librería FLTK, que se puede instalar utilizando la terminal de Ubuntu con el siguiente comando: sudo apt-get install libfltk1.3-dev

Descripción:
La aplicación busca mostrar de una forma simple y entendible las posibilidades que ofrece la librería FLTK, incluso para personas que no han interactuado previamente con ella. En esta demostración, se muestran y se interactúa con diferentes componentes como:

- CheckBox "SI": Si el usuario selecciona esta opción, se muestra una imagen en una ventana emergente.
- CheckBox "NO": Si el usuario selecciona esta opción, el checkbox desaparece.
- Caja de texto: Permite al usuario ingresar un comentario.
- Botón "Enviar": Limpia la caja de comentarios cuando se presiona.

El programa cuenta con tres funciones que interactúan con los widgets de FLTK:
- vanisher: Oculta un checkbox cuando se selecciona "NO".
- publisher: Muestra una imagen en una nueva ventana cuando se selecciona "SI".
- clearer: Limpia el contenido de la caja de texto cuando el usuario hace clic en el botón "Enviar".

Ejecución:
Para compilar el programa, utiliza el siguiente comando: g++ -o fltk_demo fltk_demo.cpp -lfltk -lfltk_images

Para ejecutar el programa, usa el siguiente comando: ./fltk_demo
