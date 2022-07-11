#ifdef SENSORS_MP6050_H_
#define SENSORS_MP6050_H_


// typedef struct Mpu6050_Config_tag Mpu6050_Config_t; 
typedef struct /*Mpu6050_Config_tag*/{
    int i2caddr;
    int accelerate;
} Mpu6050_Config_t;


Mpu6050_Config_t * mpu6050_init          (int addr);
void               mpu6050_updateData     (Mpu6050_Config_t *pMpu6050_t, int newAcelerate);
int                mpu6050_getData        (Mpu6050_Config_t *pMpu6050_t);
void               mpu6050_delete         (Mpu6050_Config_t *pMpu6050_t);


#endif