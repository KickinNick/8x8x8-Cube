#include <iostream>
#include "SPIDevice.h"
#include <unistd.h>
#include <stdint.h>
using namespace std;
using namespace exploringBB;

SPIDevice spi(1,0);
void setup()
{
  spi.setSpeed(5000);
}

int main()
{
  setup();
  uint16_t test = 0x0000;
  spi.write(test); 
 // spi.write(test);
  return 0;
}
