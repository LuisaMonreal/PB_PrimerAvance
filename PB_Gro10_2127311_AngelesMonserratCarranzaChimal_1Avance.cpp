#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    //Declaración de variables
    int numart, fecha, opc;
    float precio, imp=0.16, total;
    string nomart, clas, carac, des, gen;
    
    cout<<"\t ***GAMING STORE*** \n";
    cout<<"1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin>>opc;
    
    //Incio del switch (Menú de Opciones)
    switch (opc)
    {
        case 1: //Agregar Artículo
            //en el inicio se debe de poner el num de articulo
            cout<<"Ingrese el nombre del artículo \n"; //Nombre
            cin.ignore();
            getline(cin, nomart); 
            cout<<"Ingrese el número del artículo \n"; //Número
            cin>>numart;
            cout<<"Ingrese año de lanzamiento \n"; //Año
            cin>>fecha;
            cout<<"Ingrese la clasificación del artículo \n"; //Clasificación
            cin.ignore ();
            getline (cin,clas);
            cout<<"Ingrese las características del artículo \n"; //Características
            //cin.ignore();
            getline (cin,carac);
            cout<<"Ingrese la descripción del Artículo \n"; //Descripción
            //cin.ignore();
            getline (cin,des);
            cout<<"Ingresar el género del Artículo \n"; //Género 
           // cin.ignore();
            getline (cin,gen);
            cout<<"Ingrese el precio unitario del Artículo \n"; //Precio Unitario 
            cin>>precio;
            //imprimir el impuetso
            cout<<"impuesto"<<precio*imp;
            total=precio+(precio*imp);
            cout<<"El precio total del Artículo es: \n"<<total<<endl; //Precio Total 
            return main ();
            break;
            
        case 2: //Modificar Artículo
            break;
            
        case 3: //Eliminar Artículo
            break;
            
        case 4: //Lista de Artículos
            break;
            
        case 5: //Limpiar Pantalla
            system("cls"); 
            return main();
            break;
            
        case 6: //Salir
            cout << "Gracias por utilizar el programa de Gaming Store :) \n";
            break;

        default:
        cout << "ingrese una opcion correcta \n";
        return main();
        
    }
}
