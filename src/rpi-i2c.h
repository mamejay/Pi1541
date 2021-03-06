#ifndef RPI_AUX_H
#define RPI_AUX_H

#include "rpi-base.h"

extern void RPI_I2CInit(int BSCMaster, int fast);
extern void RPI_I2CSetClock(int BSCMaster, int clock_freq);
extern int RPI_I2CRead(int BSCMaster, unsigned char slaveAddress, void* buffer, unsigned count);
extern int RPI_I2CWrite(int BSCMaster, unsigned char slaveAddress, void* buffer, unsigned count);

#endif
