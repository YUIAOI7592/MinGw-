# MinGwChieseWchar_test
測試中文顯示

多方嘗試後：
#include <fcntl.h>
#include <io.h>
int main()
{
  _setmode(_fileno(stdout), _O_U16TEXT);\n
  ...\n
  ...\n
  ...\n
}
