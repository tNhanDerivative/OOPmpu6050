#include <stdlib.h>

#include <stdio.h>
#include "mpu6050.h"


int main(void){
    Mpu6050_Config_t * p_hSensor1 = mpu6050_init(14);
    printf("hello");
    mpu6050_delete(p_hSensor1);
    return 0;
}