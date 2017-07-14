//Gyro-Arduino UNO R3
// VCC-5V
// GND-GND
// SDA-A4
// SCL-A5
// INT-port-2

//Motor Pins
int enablea=3;
int enableb=11;
int a1=6;
int a2=6;
int b1=10;
int b2=9;

#include<Wire.h>
//Declaring some global variables
int gyro_x,gyro_y,gyro_z;
long gyro_x_cal,gyro_y_cal,gyro_z_cal;
boolean set_gyro_angles;

lomg acc_x,acc_y,acc_z,acc_total_vector;
float angle_roll_acc,angle_pitch_acc;

float angle_pitch,angle_roll;
int angle_pitch_buffer,angle_roll_output;

long loop_timer;
int temp;

void setup() {                                                                     
  Wire.begin();                                                                     //Start I2C as master                                                             
  setup_mpu_6050_registers();                                                       //Setup the registers of the the MPU-6050
    for (int cal_int=0;cal_int<100;cal_int++)                                      //read the raw acc and gyro data from the MPU-6050 for 100  times
    {
      read_mpu_6050)data();
      gyro_x_cal += gyro_x;                                                        //Add  the gyro_x offset to gyro_x_cal
      gyro_y_cal += gyro_y;                                                        //Add  the gyro_y offset to gyro_y_cal
      gyro_z_cal += gyro_z;                                                        //Add  the gyro_z offset to gyro_z_cal
      delay(33);                                                                   //Delay 3us for 250 MHz for -loop
    }
    
    
    //divide by 100 to get average offset
    
    
    
    
      
      
      
