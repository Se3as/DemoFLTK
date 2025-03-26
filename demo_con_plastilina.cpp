#include <Fl/Fl.H>
#include <Fl/Fl_Window.H>
#include <Fl/Fl_Input.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Box.H>
#include <Fl/Fl_Check_Button.H>
#include <Fl/Fl_PNG_Image.H>
#include <iostream>

void vanisher(Fl_Widget* checker, void* myBox){
    Fl_Check_Button* checkbox = (Fl_Check_Button*)myBox;

    if(checkbox->value()){
        //esto solo oculta la cajita si la tocan y es visible
        checkbox->hide();
    }
} 

void publisher(Fl_Widget* checker, void* correctBox){
    Fl_Check_Button* checkbox = (Fl_Check_Button*)correctBox;

    if(checkbox->value()){
        //eso muestra la imagen deseada

        //aqui creo la ventana que popea
        Fl_Window* popmeme = new Fl_Window(480, 253);

        //esto carga la imagen que tengo en la progra
        Fl_PNG_Image* img = new Fl_PNG_Image("FLTKbob.png");

        //mete la imagen en el popup con sus dimensiones nativas
        Fl_Box* box = new Fl_Box(0, 0, img->w(), img->h());
        box->image(img);

        popmeme->end();
        popmeme->show();

    }
} 

void clearer(Fl_Widget* clearer, void* comment){
    Fl_Input* feedback = (Fl_Input*)comment;
    //esto limpia la caja de comentarios
    feedback->value("");
}


int main() {
    //esto crea la ventanita donde ocurre la magia
    Fl_Window* window = new Fl_Window(400, 400, "Inserte su progra aqui");

    //estos son labels o etiquetas para escribir
    Fl_Box* label1 = new Fl_Box(100, 50, 200, 30, "Windows > Linux?");

    Fl_Box* label2= new Fl_Box(100, 320, 200, 30, "Dejanos tu comentario");


    //esto crea los checkboxes 
    Fl_Check_Button* checkbutton1 = new Fl_Check_Button(175, 80, 50, 30, "SI");

    //imagen que popee
    checkbutton1->callback(publisher, checkbutton1);

    Fl_Check_Button* checkbutton2 = new Fl_Check_Button(175, 110, 50, 30, "NO");
    //quiero que algo pase al checkear las checkbox
    checkbutton2->callback(vanisher, checkbutton2);

    //sirve para poner texto 
    Fl_Input* input = new Fl_Input(100, 350, 200, 30);

    //agregar boton para limpiar comentarios
    Fl_Button* button1 = new Fl_Button(310, 350, 50, 30, "Enviar");
    button1->callback(clearer, input);

    window->end();
    window->show();

    //corre el TODO.
    return Fl::run();
};