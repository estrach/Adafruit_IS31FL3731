# Adafruit IS31FL3731 [![Build Status](https://github.com/adafruit/Adafruit_IS31FL3731/workflows/Arduino%20Library%20CI/badge.svg)](https://github.com/adafruit/Adafruit_IS31FL3731/actions)[![Documentation](https://github.com/adafruit/ci-arduino/blob/master/assets/doxygen_badge.svg)](http://adafruit.github.io/Adafruit_IS31FL3731/html/index.html)

Augmented to support the [Pimoroni 5x5 RGB LED matrix](https://shop.pimoroni.com/products/5x5-rgb-matrix-breakout?variant=21375941279827) with the help of this [comment](https://forum.arduino.cc/t/pimoroni-5x5-rgb-matrix/895888/9).
Uses the [schematic] from the description and the [datasheet](https://www.lumissil.com/assets/pdf/core/IS31FL3731_DS.pdf) for the IS31FL3731_DS to find a mapping between the pins used on the 5x5 LED matrix and the example 16x9 matrix.
Layout is addressed as 15x5, with the x axis addressing red as 0-5, green as 5-10 and blue as 10-15.
