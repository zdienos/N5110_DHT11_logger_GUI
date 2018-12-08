#ifndef TinyDig3x7SqPL_font_h
#define TinyDig3x7SqPL_font_h

#include "Arduino.h"

const uint8_t TinyDig3x7SqPL[] PROGMEM =
{
-3, 8, ' ', 'F',   // -width, height, firstChar, lastChar
        0x02, 0x00, 0x00, 0x00,                  //  
        0x01, 0x00, 0x00, 0x00,                  // ! (short space)
        0x03, 0x03, 0x00, 0x03,                  // "
        0x01, 0x00, 0x00, 0x00,                  // #
        0x03, 0x66, 0xFF, 0x5A,                  // $
        0x03, 0x31, 0x0C, 0x23,                  // %
        0x01, 0x00, 0x00, 0x00,                  // &
        0x03, 0x07, 0x05, 0x07,                  // '
        0x02, 0x3E, 0x41, 0x00,                  // (
        0x02, 0x41, 0x3E, 0x00,                  // )
        0x03, 0x14, 0x08, 0x1C,                  // *
        0x03, 0x08, 0x1C, 0x08,                  // +
        0x01, 0xC0, 0x00, 0x00,                  // ,
        0x03, 0x08, 0x08, 0x08,                  // -
        0x01, 0x40, 0x00, 0x00,                  // .
        0x03, 0x70, 0x0C, 0x03,                  // /
        0x03, 0x7F, 0x41, 0x7F,                  // 0
        0x02, 0x02, 0x7F, 0x00,                  // 1
        0x03, 0x79, 0x49, 0x4F,                  // 2
        0x03, 0x41, 0x49, 0x7F,                  // 3
        0x03, 0x0F, 0x08, 0x7E,                  // 4
        0x03, 0x4F, 0x49, 0x79,                  // 5
        0x03, 0x7F, 0x49, 0x79,                  // 6
        0x03, 0x01, 0x71, 0x0F,                  // 7
        0x03, 0x7F, 0x49, 0x7F,                  // 8
        0x03, 0x4F, 0x49, 0x7F,                  // 9
        0x01, 0x28, 0x00, 0x00,                  // :
        0x02, 0x80, 0x48, 0x00,                  // ;
        0x03, 0x08, 0x14, 0x22,                  // <
        0x03, 0x14, 0x14, 0x14,                  // =
        0x03, 0x22, 0x14, 0x08,                  // >
        0x03, 0x02, 0x59, 0x06,                  // ?
        0x01, 0x00, 0x00, 0x00,                  // @
        0x03, 0x7F, 0x11, 0x7F,                  // A
        0x03, 0x7F, 0x49, 0x36,                  // B
        0x03, 0x7F, 0x41, 0x41,                  // C
        0x03, 0x7F, 0x41, 0x3E,                  // D
        0x03, 0x7F, 0x49, 0x41,                  // E
        0x03, 0x7F, 0x09, 0x01                   // F
};

#endif

