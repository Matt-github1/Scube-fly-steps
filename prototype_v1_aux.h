/**
 * @file prototype_v1_aux.h
 *
 * @brief Implements the functions needed in the main loop
 *
 * @author Scube Supaero
 *
 *
 *
 * The API of naive ppm writer is defined as follows:
 *
 * - a function to initialize the system
 */
#ifndef PROTOTYPE_V1_AUX_H
#define PROTOTYPE_V1_AUX_H
/**
 * @brief Initializes the system
 *
 * @pre The system is ready
 *
 * @return Nothing
 */
void initialisation(void);

/**
 * @brief Checks if the system is umbilically plugged
 *
 * @return `true` is the system is umbilically plugged
 */  
bool check_umbilical_plugged(void);

bool check_sensors_communication(void);

bool check_values(void);

bool launch_detected(void);

float vertical_speed(void);

#endif