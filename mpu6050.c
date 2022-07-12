#ifdef SENSORS_MP6050_C_
#define SENSORS_MP6050_C_
#include <stdlib.h>
#include "mpu6050.h"

// typedef struct Mpu6050_Config_tag{
//     int i2caddr;
//     int accelerate;
// } Mpu6050_Config_t;

Mpu6050_Config_t * mpu6050_init(int addr){
    Mpu6050_Config_t *pMpu6050_t = malloc(sizeof(Mpu6050_Config_t));
    pMpu6050_t->i2caddr = addr;
    return pMpu6050_t;
}

void mpu6050_updateData(Mpu6050_Config_t *pMpu6050_t, int newAcelerate){
    pMpu6050_t->accelerate = newAcelerate;
}

int mpu6050_getData(Mpu6050_Config_t *pMpu6050_t){
    return pMpu6050_t->accelerate;
}

void mpu6050_delete(Mpu6050_Config_t *pMpu6050_t){
    free(*pMpu6050_t);
}


#endif