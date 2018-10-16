#include <stdio.h>
#include "func1.h"
#include "func2.h"

int turbo_on()
{
  printf("turbo_on\n");
}

int turbo_off()
{
  printf("turbo_off\n");
}

int main()
{
  turbo_on();

  func1();
  func2();

  turbo_off();

  return 0;
}
