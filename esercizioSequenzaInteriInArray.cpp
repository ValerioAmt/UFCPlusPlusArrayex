#include <iostream>
#include <string>

using namespace std;

int main()
{

    int array[] = {6, 2, 3, 5, 9, 7};
    int quante = 0;
    int i = 0;
    int lunghezza = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < lunghezza; i++)
    {
        if (array[i] < array[i + 1] && i < lunghezza - 1)
        {
            while (array[i] < array[i + 1])
            {
                i++;
            }
            quante++;
        }
    }
    cout << quante << endl;
}
/*
for (i = 0; i < lunghezza; i ++){
    if(array[i]>= array[i+1]){

    }else{
        quante++ ;
    }


}
cout << quante <<endl;
}
*/
