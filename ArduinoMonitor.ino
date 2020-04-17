#include "ArduinoMonitor.h"
#include <math.h>

void setup() {
  Serial.begin(9600);
}

// Uncomment the following line to disable monitor output
// #define NO_MONITOR_OUTPUT

void loop() {
  for (float v = 0.0; v <= 360.0; v += 0.01) {
    float s = sin(v) * 100;
    float really_long_cosine_variable_name = cos(v) * 100;

    // Print these two variables in a plotter compatible format: s:2.56 c:7.28
    MONITOR(s);
    MONITOR2("c", really_long_cosine_variable_name);
    MONITOR_ENDL();    
  }
}
