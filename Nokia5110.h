/*
 * Nokia5110.h
 *
 *  Created on: Jan 2, 2023
 *      Author: naudhizb
 */

#ifndef SRC_NOKIA5110_H_
#define SRC_NOKIA5110_H_

void Nokia5110_Init();
void Nokia5110_setContrast(unsigned char contrast);
void Nokia5110_stop();
void Nokia5110_clear();
void Nokia5110_clearLine();
void Nokia5110_setPower(unsigned char on);
inline void Nokia5110_display();
inline void Nokia5110_noDisplay();
void Nokia5110_setInverse(unsigned char inverse);
void Nokia5110_setContrast(unsigned char level);
void Nokia5110_home();
void Nokia5110_setCursor(unsigned char column, unsigned char line);
void Nokia5110_createChar(unsigned char chr, const unsigned char *glyph);
void Nokia5110_write(unsigned char chr);
void Nokia5110_drawBitmap(const unsigned char *data, unsigned char columns, unsigned char lines);
void Nokia5110_drawColumn(unsigned char lines, unsigned char value);
void Nokia5110_send(unsigned char type, unsigned char data);
void Nokia5110_Print(const char *str);
#endif /* SRC_NOKIA5110_H_ */
