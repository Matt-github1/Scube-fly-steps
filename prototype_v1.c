#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "prototype_v1_aux.h" 
/* CONSTANTS AND MAIN VARIABLES OF THE PROGRAM
 * States :
 *    0 : does nothing, wait commands
 *   11 : initialisation
 *   12 : sensor initialisation
 *   13 : ready for launch
 *   14 : sensor error
 *   21 : powered ascent
 *  211 : sensor error
 *   22 : coasting ascent
 *  221 : degraded trajectory
 *   31 : fast descent
 *  311 : nominal fast descent
 *  312 : first parachute failure
 *   32 : slow descent
 *  321 : nominal slow descent
 *  322 : second parachute failure
 */



/****************************
********MAIN FUNCTION******** 
****************************/

int main()
{   
    /***************
    **Constant def**
    ***************/

    /** States **/
    const int ST_WAIT                     = 0;
    const int ST_INITIALISATION           = 11;
    const int ST_SENSORS_INITIALISATION   = 12;
    const int ST_READY_TO_LAUNCH          = 13;
    const int ST_SENSORS_ERROR            = 14;
    const int ST_POWED_ASCENT             = 21;
    const int ST_DEGRADED_TRAJECTORY_1    = 211;
    const int ST_COASTING_ASCENT          = 22;
    const int ST_DEGRADED_TRAJECTORY_2    = 221;
    const int ST_FAST_DESCENT             = 31;
    const int ST_NOMINAL_FAST_DESCENT     = 311;
    const int ST_FIRST_PARACHUTE_FAILURE  = 312;
    const int ST_SLOW_DESCENT             = 32;
    const int ST_NOMINAL_SLOW_DESCENT     = 321;
    const int ST_SECOND_PARACHUTE_FAILURE = 322;

    int state = ST_INITIALISATION;
    int combustion_time = 0           // TBD
    int apogee_time = 0               // TBD
    int security_time = 0             // TBD
    int stabilisation_time_1 = 0      // TBD
    int stabilisation_time_2 = 0      // TBD
    int local_time = 0                // current time of the system, to increment
    bool engine_on = true
    int max_vertical_speed = 0        // TBD
    int min_altitude = 0              // TBD

    while (true)
    {
        local_time++
        /*********************
        ***BACKGROUND TASKS*** 
        *********************/
        //do tasks

        /***********
        ***STATES*** 
        ***********/
        if (state == 11)
        {
            // initialise variables, clocks, registery ...;
            // state = 12;
        }
        else if (state == 12)
        {
/*          if (UMBILICAL_PLUGGED)
 *          {
 *             check communication with sensors;
 *             if (communication failed)
 *             {
 *                 state = 14;
 *             }
 *             calibrate sensors;
 *             if (calibration failed)
 *             {
 *                 state = 14;
 *             }
 *             check values are correct;
 *             if (check failed)
 *             {
 *                 state = 14;
 *             }
 *             if (state == 12) //aka no error
 *             {
 *                 state = 13;
 *             }
 *          }
 */
        }
        else if (state == 13)
        {
/*      if (launch detected)
 *         {
 *             state = 21;
 *         }
 */
        }
        else if (state == 14)
        {
            // send error message;
            // state = 0;
        }
        else if (state == 21)
        {
/*          if (trajectory out of security cone)
 *          {
 *              state = 211;
 *          }
 *          else if (t > combustion_time || engine off)
 *          {
 *              state = 22;
 *          }
 */
        }
        else if (state == 211)
        {
            // turn off engine;
            // state = 221;
        }  
        else if (state == 22)
        {
/*          if (apogee detected && (conditions on time || t > time_apogee + t_sec))
 *          {
 *              state = 31;
 *          }
 */
        }
        else if (state == 221)
        {
/*          if (apogee detected)
 *          {
 *              deploy parachute 1;
 *              state = 31;
 *          }
 */
        else if (state == 31)
        {
/*          if (t > stabilisation time 1)
 *          {
 *              if (Vz < Vmax)
 *              {
 *                  state = 311;
 *              }
 *              else
 *              {
 *                  state = 312;
 *              }
 *          }
 */
        }
        else if (state == 311)
        {
/*          if (z < z0)
 *          {
 *              deploy parachute 2;
 *              state = 32;
 *          }   
 */
        }
        else if (state 312)
        {
            // deploy parachute 2;
            // state = 32;
        }
        else if (state == 32)
        {
/*          if (t > stabilisation time 2)
 *          {
 *              if (Vz < Vmax)
 *              {
 *                  state = 321;
 *              }
 *              else
 *              {
 *                  state = 322;
 *              }
 *          }
 */      
        }

        else if (state == 321)
        {
/*          if (landing)
 *          {
 *              happy ending;
 *          }   
 */
        }
        else
        {
            // boom I guess;
        }
    }
}
