#ifndef _PIMORONI_IS31FL3731_5X5RGB_H_
#define _PIMORONI_IS31FL3731_5X5RGB_H_

#include <Adafruit_IS31FL3731.h>

int16_t map_to_standard_layout[75][2] = { {6, 7}, {4, 8}, {3, 8},  {13, 7}, {14, 7},
                                          {5, 7}, {5, 8}, {2, 8},  {12, 7}, {15, 0},
                                          {4, 7}, {6, 8}, {1, 8},  {11, 7}, {8, 0},
                                          {3, 7}, {0, 7}, {0, 8},  {10, 7}, {9, 0},
                                          {2, 7}, {1, 7}, {15, 7}, {9, 7},  {10, 0},
                                          {5, 4}, {3, 1}, {2, 1},  {12, 1}, {13, 1},
                                          {4, 4}, {4, 1}, {1, 1},  {11, 1}, {15, 5},
                                          {4, 5}, {5, 1}, {1, 2},  {10, 1}, {9, 5},
                                          {3, 5}, {0, 5}, {0, 2},  {9, 1},  {10, 5},
                                          {2, 5}, {1, 5}, {15, 2}, {9, 2},  {11, 5},
                                          {5, 5}, {3, 2}, {2, 2},  {12, 2}, {13, 2},
                                          {5, 6}, {4, 2}, {2, 3},  {11, 2}, {15, 6},
                                          {4, 6}, {5, 2}, {1, 3},  {10, 2}, {9, 6},
                                          {3, 6}, {0, 6}, {0, 3},  {10, 3}, {10, 6},
                                          {2, 6}, {1, 6}, {15, 3}, {9, 3},  {11, 6} };

class Pimoroni_IS31FL3731_5x5RGB : public Adafruit_IS31FL3731
{
  public:
    Pimoroni_IS31FL3731_5x5RGB(void)
    : Adafruit_IS31FL3731(16, 9) {} // The mapping was determined using the example schematic in the IS31FL3731 datasheet - this uses a 16x9 array

    void drawPixel(int16_t x, int16_t y, uint16_t color)
    {
      if (x >= 15 || y >= 5 || x < 0 || y < 0) {
        return;
      }
      int16_t corrected_x = map_to_standard_layout[y + x*5][1];
      int16_t corrected_y = map_to_standard_layout[y + x*5][0];

      setLEDPWM(corrected_y + corrected_x * 16, color, _frame);
      return;
    }
};
#endif
