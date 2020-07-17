#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "++++++++++++++++++++++++++++++++++++\n";
    cout << "            Iнформацiя:           \n";
    cout << "Група: IПЗ-I 18к                  \n";
    cout << "ПІБ: Соляной Александр Олегович\n";
    cout << "Номер теми: 1.1 \n";
    cout << "Номер завдання: 16 " << "\n";
    cout << "+++++++++++++++++++++++++++++++++++\n\n";

    int mas[10] = { 1,10,2,20,3,30,4,40,5,50 };
    for (int i = 0; i < 10; i += 2)
    {
        cout << mas[i] << '\t' << mas[i + 1] << '\n';

    }
    system("pause>>void");
}