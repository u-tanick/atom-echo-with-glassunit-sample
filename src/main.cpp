#include <M5Unified.h>
#include <M5UnitGLASS.h>

M5UnitGLASS display;

void setup() {
    auto cfg = M5.config();
    M5.begin(cfg);

    display.init(GPIO_NUM_26, GPIO_NUM_32, 400000u);

    display.begin();
    display.fillScreen(TFT_BLACK);

    // 疑似スタックチャンアバター（目と口）
    display.fillCircle(32, 25, 2, TFT_WHITE);
    display.fillCircle(92, 26, 2, TFT_WHITE);
    display.fillRect(46, 40, 35, 2, TFT_WHITE);

}

void loop() {

  delay(1000);
  // まばたき（ランダム）
  if(rand() % 5 == 0){
    display.fillCircle(32, 25, 2, TFT_BLACK);
    display.fillCircle(92, 26, 2, TFT_BLACK);
    display.fillRect(30, 26, 5, 2, TFT_WHITE);
    display.fillRect(90, 27, 5, 2, TFT_WHITE);
    delay(1000);
    display.fillRect(30, 26, 4, 2, TFT_BLACK);
    display.fillRect(90, 27, 4, 2, TFT_BLACK);
    display.fillCircle(32, 25, 2, TFT_WHITE);
    display.fillCircle(92, 26, 2, TFT_WHITE);
  }

  // 口びっくり（ランダム）
  if(rand() % 5 == 0){
    display.fillRect(46, 40, 35, 2, TFT_BLACK);
    display.fillRect(46+6, 40-6, 35-12, 2+10, TFT_WHITE);
    delay(1000);
    display.fillRect(46+6, 40-6, 35-12, 2+10, TFT_BLACK);
    display.fillRect(46, 40, 35, 2, TFT_WHITE);
  }

}