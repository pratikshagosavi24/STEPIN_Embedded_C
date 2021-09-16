/**
 * @file Activity_1.c
 * @author Pratiksha Ramesh Gosavi
 * @brief to initialise ports
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity_1.h"
/**
 * @brief to initialise ports
 * 
 */

void initialise()
{
    DDRB|=(1<<PB0);
    DDRD&=~(3<<PD0);
    PORTD|=(3<<PD0);
}
