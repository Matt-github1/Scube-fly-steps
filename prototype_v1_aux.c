#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "prototype_v1_aux.h" 

void initialisation(void)
{
     //initialise variables, clocks, registery ... 
}
       
bool check_umbilical_plugged(void)
{
      return false;
}

bool check_sensors_communication(void)
{
      return false;
}

bool check_values(void)
{
      return false;
}

bool launch_detected(void)
{
      return false;
}

float vertical_speed(void)
/*returns the measured vertical speed*/
{
      return 0;
}


bool apogee_detected(void)
      return false;

bool landing_detected(void)
      return false;

void send_error_message(int code)
      /*send the error message corresponding to the code*/


bool trajectory_in_security_cone(void)
      return true;

void engine(char* instruction, bool* p_engine_on)
      if (intruction == "on")
      {
            //turn on the engine
            *p_engine_on = true;
      }
      else if (instruction == "off")      
      {
            //turn off the engine
            *p_engine_on = false;
      }


altitude():
      "returns the measured altitude"
      return 0

deploy_fisrt_parachute():
      return

deploy_second_parachute():
      return