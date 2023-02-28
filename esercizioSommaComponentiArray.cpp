#include <iostream>
#include <string>
#include <array>
using namespace std;








int main(){

int array[] = {2,3,4,5,6};
int lungDaPassareFunzione =  sizeof(array)/sizeof(array[0]);
int risultato = 0;
for (int i = 0; i < lungDaPassareFunzione; i++)
{
    risultato += array[i];
}
    cout << "La somma degli elementi è " << risultato <<endl;

}