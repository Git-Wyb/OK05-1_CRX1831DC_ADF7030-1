#ifndef __ID_DECODE_H__
#define __ID_DECODE_H__
/***********************************************************************/
/*  FILE        :ID_Decode.h                                           */
/*  DATE        :Mar, 2014                                             */
/*  Programmer	:xiang 'R                                              */
/*  CPU TYPE    :STM8L151G6     Crystal: 16M HSI                       */
/*  DESCRIPTION :                                                      */
/*  Mark        :ver 1.0                                               */
/***********************************************************************/

//void EXIT_init(void);
//void ID_Decode_function(void);
void ID_Decode_IDCheck(void);
void Signal_DATA_Decode(UINT8 NUM_Type);
void eeprom_IDcheck(void);
void BEEP_and_LED(void);
void ID_Decode_OUT(void);
void Receiver_BEEP(void);
void TEST_beep(void);
void BEEP_Module(UINT16 time_beepON, UINT16 time_beepOFF);
u32 ID_Receiver_DATA_READ(u8 *address);


void Freq_Scanning(void);
void DataReceive(void);

#endif
