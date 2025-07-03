#include <Limit.h>

Limit Limit;

void setup() {
  Serial.begin(115200);
  Limit.init(10, 20); 
}

void loop() {
  int val = 8;
  int low = 10;
  int high = 15;

  Limit.limit(&val, low, high);
  Serial.println(val);
  delay(1000);
}
