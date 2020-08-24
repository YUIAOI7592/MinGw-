#define UNICODE
#include <cstdlib>
#include <string>
#include <iostream>
#include <fcntl.h>
using namespace std;
int main()
{
    system("cls");
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << L"A簡A單A" << endl;
    wcout << L"B簡B單B" << endl;
    system("pause");
    return 0;
}