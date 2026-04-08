<<<<<<< HEAD
#include <iostream> 

=======
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int eleccion = 0;
    string link;
    
    while (eleccion != 3){
        cout << "¿Que quieres descargar?\n";
        cout << "1.Videos 2.Música 3.Salir (seleccionar solo con 1 , 2 o 3)\n";
        cin >> eleccion;
        cin.ignore();

        switch(eleccion){
            /*Descarga de video*/
            case 1: {
                cout << "DESCARGAR VIDEO\n";
                cout << "Introduce el link: ";
                cin >> link;
                string comando = "yt-dlp " + link;
                system(comando.c_str());
                break;
            }
            /*Descarga de musica*/
            case 2: {
                cout << "DESCARGAR MÚSICA\n";
                cout << "Introduce el link: ";
                cin >> link;
                string comando = "yt-dlp -x --audio-format mp3 " + link;
                system(comando.c_str());
                break;
            }
            /*Salir del bucle while*/
            case 3: {
                cout << "saliendo....";
                break;
            }
        }
    }
    cin.get();
    cin.get();
    return 0;
}
>>>>>>> 7c1de98 (versión 1.1 con musica y menu)
