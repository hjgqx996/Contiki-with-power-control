#ifndef __TIMESYNCH_H__
#define __TIMESYNCH_H__

/*synchronization frame, Ling Wang, 12/1/2017*/
/*++ type ++ time slot number ++ clock time ++ sequence time++*/
/*| 8 bits |   32 bits |  16 bits | 16 bits|*/
//#define TIME_SYNCH_BEACON_LENGTH (sizeof(uint8_t) + sizeof(rtimer_clock_t) + sizeof(uint16_t))
#define TIME_SYNCH_BEACON_LENGTH (sizeof(uint8_t) + sizeof(uint32_t) + sizeof(rtimer_clock_t) + sizeof(uint16_t))

void time_synch_init();
void time_synch_send();
#endif /* __TIMESYNCH_H__ */
