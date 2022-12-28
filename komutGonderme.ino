#include "ledShow.h"
#include "serialCommand.h"
LedShow show;
SerialCommand sc;
void setup() {
  sc.setBautRate(115200);  sc.setup();  show.setup();
}
void loop() {
  sc.read();
  if(sc.modul=="led"&&sc.action=="flipflop") show.setAction("flipflop");
  if(sc.modul=="led"&&sc.action=="disco") show.setAction("disco");
  show.show();
}
