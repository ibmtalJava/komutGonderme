#include "ledShow.h"
LedShow show;
void setup() {
  show.setup();
}

void loop() {
  show.setAction("flipflop");
  show.show();
  show.setAction("disco");
  show.show();
}
