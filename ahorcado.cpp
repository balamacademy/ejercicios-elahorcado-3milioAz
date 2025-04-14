#include <iostream>
#include <string>

using namespace std;

void muneco(int vidas);

int main(){

    string palabra_adivinar;
    cout << "Ingrese la palabra a adivinar: ";
    cin >> palabra_adivinar;

    string palabra_usuario(palabra_adivinar.length(), '-');

    char intento;

    int vidas = 7;

    while(vidas > 0 && palabra_usuario != palabra_adivinar){

        cout << "\nPalabra: " << palabra_usuario << "\n";
       
        cout << "Ingrese la letra a probar: ";
        cin >> intento;

        bool acierto = false;

        for(int i=0; i < palabra_adivinar.length(); i++){
            if(intento == palabra_adivinar[i]){
                palabra_usuario[i] = intento;
                acierto = true;
            }
        }

        if(!acierto){
            vidas--;
        }

        muneco(vidas);

    }
    if (palabra_usuario == palabra_adivinar) {
        cout << "\nWujuuuu. Adivinaste la palabra: " << palabra_adivinar;
    } else {
        cout << "\nPerdiste. La palabra era: " << palabra_adivinar;
    }

    return 0;
}

void muneco(int vidas){

    switch(vidas){
        case 7:
            cout << "*--------*\n|        |\n|\n|\n|\n|\n\n";
            break;
        case 6:
            cout << "*--------*\n|        |\n|        O\n|\n|\n|\n\n";
            break;
        case 5:
            cout << "*--------*\n|        |\n|        O\n|        |\n|\n|\n\n";
            break;
        case 4:
            cout << "*--------*\n|        |\n|        O\n|       /|\n|\n|\n\n";
            break;
        case 3:
            cout << "*--------*\n|        |\n|        O\n|       /|\\\n|\n|\n\n";
            break;
        case 2:
            cout << "*--------*\n|        |\n|        O\n|       /|\\\n|       /\n|\n\n";
            break;
        case 1:
            cout << "*--------*\n|        |\n|        O\n|       /|\\\n|       / \\\n|\n\n";
            break;
        case 0:
            cout << "*--------*\n|        |\n|        X\n|       /|\\\n|       / \\\n";
            break;
    }
}