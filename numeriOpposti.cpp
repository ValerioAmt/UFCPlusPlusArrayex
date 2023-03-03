#include <iostream>
#include <string>
using namespace std;

int main(){
int array[100];
int i = 0;
int quanti = 0;
int max = 0;
for(int i = 0;i < 100 || array[i] != 0; i++){

  cout << "Inserisci numeri che vuoi, 0 per uscire dal programma\n";
            cin >> array[i];
            if(array[i] == 0)
                 {
                    max = i;
                 }
}
for (i =0; i < max ; i++)
{
    for(int y = i + 1; y < max;y++){
         if(array[i] == -(array[y])) {
              quante++;
         }

    }
}


    if (quante == 0){
        cout << "false"
    }

cout <<quanti;

}