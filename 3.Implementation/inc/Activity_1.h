/**
 * @file Activity_1.h
 * @author Pratiksha Ramesh Gosavi
 * @brief Port Initialisation
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

void initialise();//TO INITIALISE PORTS

#define occupied (!(PIND&(3<<PD0)))//Check if seat is occupied


#endif
