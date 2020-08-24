# MinGwChieseWchar_test
## 測試中文顯示

多方嘗試後：<br />
#include <fcntl.h><br />
#include <io.h><br />
int main()<br />
{<br />
  _setmode(_fileno(stdout), _O_U16TEXT);<br />
  ...<br />
  ...<br />
  ...<br />
}<br />
