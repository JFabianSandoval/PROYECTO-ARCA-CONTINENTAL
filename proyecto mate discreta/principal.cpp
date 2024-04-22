#include "iostream"
#include "conio.h"
#include "windows.h"
#include "Gerente.h"
#include <ctime>
#include <time.h>
using namespace System;
using namespace std;



//CARGA PANTALLA
void CargaPantalla()
{
    system("cls");

    while (!kbhit()) {
        system("cls");
        int anchoPantalla = 100;
        int longitudPalabra = 8;
        int x = 0;
        int y = 22;
        int direccion = 1; //movimiento hacia la derecha

        while (!kbhit()) {
            system("cls");

            Console::SetCursorPosition(0, 22);
            for (int i = 0; i < x; i++) {
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";
                cout << " ";

            }

            cout << "CARGANDO" << endl;

            x += direccion;

            if (x <= 0 || x >= anchoPantalla - longitudPalabra) {
                direccion *= -1; //cambio de dirección al regreso
            }


            Sleep(300);
        }
    }
}


void borrado()
{
    Console::Clear();
}
void color(int c)
{
    switch (c)
    {
    case 1: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 2: Console::ForegroundColor = ConsoleColor::Red; break;
    case 3: Console::ForegroundColor = ConsoleColor::Green; break;
    case 4: Console::ForegroundColor = ConsoleColor::White; break;
    case 5: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 6: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 7: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 8: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 9: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 10: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 11: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    }
}


void ventana()
{
    Console::SetWindowSize(120, 44);
}
void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}


void mostrarDatos(int opcion) {
    system("cls");

    switch (opcion) {
    case 1:

        ventana();
        //Gameplay();

        break;
    case 2:
        color(3);




        cout << " " << endl;
        cout << " " << endl;
        cout << "  _______  ______    _______  ______   ___   _______  _______  _______ " << endl;
        cout << " |       ||   | ||  |    ___ |  _    ||   | |_     _||   _   ||  _____|" << endl;
        cout << " |       ||   |_||_ |   |___ | | |   ||   |   |   |  |  | |  || |_____ " << endl;
        cout << " |      _||    __  ||    ___|| |_|   ||   |   |   |  |  |_|  ||_____  |" << endl;
        cout << " |     |_ |   |  | ||   |___ |       ||   |   |   |  |       | _____| |" << endl;
        cout << " |_______||___|  |_||_______||______| |___|   |___|  |_______||_______| " << endl;
        cout << "  " << endl;
        cout << "  " << endl;



        cout << " " << endl;
        cout << "\t Realizado por: " << endl;
        cout << " " << endl;
        cout << "\t Fabian Jesus Sandoval Cueto - U20221A132" << endl;
        cout << "\t Nicolas Fredy Torrejon Gonzales - U20231E961" << endl;
        cout << "\t Axel Sandoval Ramos u202319003 - U202319003" << endl;
        cout << "\t Alberto Fernando Rodriguez Barreto - U202418094" << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        break;
    }

    cout << "Presiona Enter para volver al menu";
    while (true) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 13) {
                break;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    Gerente* miembros[100];
    ventana();
    for (int i = 0; i <= 100; i++) {
        miembros[i]->Setid() = rand() % +1000;

    }


    miembros[50]->Setid();//found issues
    int opcion = 1;
    char tecla;

    while (true) {
        system("cls");

        color(4);

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "\t             ; ; ;                                " << endl;
        cout << "\t           ;        ;  ;     ;;    ;              " << endl;
        cout << "\t        ;                 ;         ;  ;          " << endl;
        cout << "\t      ;                 ;                         " << endl;
        cout << "\t       ;               ;                ;;        " << endl;
        cout << "\t       ;          ;            ;              ;   " << endl;
        cout << "\t       ;            ';,        ;               ;  " << endl;
        cout << "\t       ;              'b      *                   " << endl;
        cout << "\t        ;              '$    ;;                ;; " << endl;
        cout << "\t       ;    ;           $:   ;:               ;   " << endl;
        cout << "\t     ;;      ;  ;;      *;  @):        ;   ; ;    " << endl;
        cout << "\t                  ;     :@,@):   ,;**:'   ;       " << endl;
        cout << "\t      ;      ;,         :@@*: ;;**'      ;   ;    " << endl;
        cout << "\t               ';o;    ;:(@';@*''  ;              " << endl;
        cout << "\t       ;  ;       'bq,;;:,@@*'   ,*      ;  ;     " << endl;
        cout << "\t                  ,p$q8,:@)'  ;p*'      ;         " << endl;
        cout << "\t           ;     '  ; '@@Pp@@*'    ;  ;           " << endl;
        cout << "\t               ; ; ;;    Y7'.'; ;                 " << endl;
        cout << "\t                         :@):.                    " << endl;
        cout << "\t                     . : @ : '.                   " << endl;
        cout << "\t                      .::(@:.                     " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;

        cout << (opcion == 1 ? "> " : "  ") << "Orden jerarquico" << endl;
        cout << (opcion == 2 ? "> " : "  ") << "Creditos" << endl;


        while (!kbhit()) {}


        tecla = getch();


        if (tecla == 72 && opcion > 1) {
            opcion--;
        }

        else if (tecla == 80 && opcion < 2) {
            opcion++;
        }

        else if (tecla == 13) {
            CargaPantalla();
            mostrarDatos(opcion);
            while (_getch() != 13) {}
        }
    }


    system("pause>0");
    return 0;
}
