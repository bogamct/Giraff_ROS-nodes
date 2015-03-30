#ifndef ROBOT7_CONSTANTS_H
#define ROBOT7_CONSTANTS_H

#define WHEELBASE      0.44     // in meters
#define WHEEL_DIAMETER 0.145    // in meters
// no longer used #define KI_DEFAULT 50
#define ROBOT_NUM 7

// 14 * 256.0 is for the AMT102
//#define WHEEL_CLICKS_PER_OUTPUT_REVOLUTION  (24 * 250.0)
#define WHEEL_CLICKS_PER_OUTPUT_REVOLUTION  (14 * 128.0)


/*Old numbers 3 July Patrik
#define MOTOR0_KD 1000
#define MOTOR0_KI 3
#define MOTOR0_KP 800

#define MOTOR0_KD 3000
#define MOTOR0_KI 20
#define MOTOR0_KP 10000
*/

#define MOTOR0_KD 1000
#define MOTOR0_KI 3
#define MOTOR0_KP 2000

#define MOTOR1_KD MOTOR0_KD
#define MOTOR1_KI MOTOR0_KI
#define MOTOR1_KP MOTOR0_KP

#endif
