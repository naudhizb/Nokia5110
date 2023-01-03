/*
 * Nokia5110p.h
 *
 *  Created on: Jan 2, 2023
 *      Author: naudhizb
 */

#ifndef SRC_NOKIA5110P_H_
#define SRC_NOKIA5110P_H_

void Nokia5110p_Init();
void Nokia5110p_Send(unsigned char type, unsigned char data);
void Nokia5110p_Delay(unsigned int ms);
void Nokia5110p_Reset();


#endif /* SRC_NOKIA5110P_H_ */
