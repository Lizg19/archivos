#include <iostream>
 #include <fstream>

using namespace std;

int main()
{
    string nombre, apellido, universidad, carrera ;
    int edad, semestre ;
    char r;

    ofstream archivoDatos;
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivoDatos.open(nombreArchivo.c_str(), ios::app);
            cout << " \tIngrese el nombre: ";
            getline(cin, nombre, '\n');
            cout << "\tIngrese el apellido: ";
            getline(cin, apellido, '\n');
            cout << " \tIngrese la edad: ";
            cin >> edad;
            cin.ignore();
            cout << " \tIngrese el nombre de su Universidad: ";
            getline(cin, universidad, '\n');
            cout << " \tIngrese la carrera: ";
            getline(cin, carrera , '\n');
            cout << " \tSemestre #: ";
            cin >> semestre;
            cin.ignore();

            archivoDatos << nombre << " " << apellido << " " << edad << "---" << universidad << " " << carrera << " " << semestre << "\n";



 archivoDatos.close ();


   ifstream archivoLectura ("Datospersonales.txt");
   string texto;


            if (!archivoLectura.eof()){
                getline(archivoLectura,texto);
                cout << "-----------------------------" << endl;
                cout << "Nombre: " <<  nombre << endl;
                cout << "Apellido: " << apellido << endl;
                cout << "Edad: " <<  edad  << endl;
                cout << "Universidad: " << universidad << endl;
                cout << "Carrera: " << carrera << endl;
                cout << "Semestre: " <<  semestre << endl;
            }

archivoDatos.close ();


    return 0;
}
