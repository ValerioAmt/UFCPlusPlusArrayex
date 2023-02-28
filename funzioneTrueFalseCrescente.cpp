#include <iostream>
#include <string>

using namespace std;

int main()
{

    int array[] = {52, 69, 3, 4};
    int lunghArray = sizeof(array) / sizeof(array[0]);
    int lung = lunghArray;
    bool crescente = true;
    for (int i = 1; i < lung; i++)
    {
        if (array[0] > array[i])
        {
        }
        else if (array[i] == lung - 1)
        {
            cout << "L'array è in ordine crescente";
        }
        else
        {
            crescente = false;
            cout << "L'array non è in ordine crescente";
        }

        crescente = false;
      } 
      cout << crescente; 
}