from time import sleep

# CONSTANTS AND MAIN VARIABLES OF THE PROGRAM
  # States :
ST_WAIT                     = 0
ST_INITIALISATION           = 11
ST_SENSORS_INITIALISATION   = 12
ST_READY_TO_LAUNCH          = 13
ST_SENSORS_ERROR            = 14
ST_POWED_ASCENT             = 21
ST_DEGRADED_TRAJECTORY_1    = 211
ST_COASTING_ASCENT          = 22
ST_DEGRADED_TRAJECTORY_2    = 221
ST_FAST_DESCENT             = 31
ST_NOMINAL_FAST_DESCENT     = 311
ST_FIRST_PARACHUTE_FAILURE  = 312
ST_SLOW_DESCENT             = 32
ST_NOMINAL_SLOW_DESCENT     = 321
ST_SECOND_PARACHUTE_FAILURE = 322

state = ST_INITIALISATION
combustion_time = 0           # TBD
apogee_time = 0               # TBD
security_time = 0             # TBD
stabilisation_time_1 = 0      # TBD
stabilisation_time_2 = 0      # TBD
local_time = 0                # current time of the system, to increment
engine_on = True
max_vertical_speed = 0        # TBD
min_altitude = 0              # TBD

# FUNCTIONS

def initialisation():
      # initialise variables, clocks, registery ...
 
def check_umbilical_plugged():
      return True

def check_sensors_communication():
      return True

def check_values():
      return True

def launch_detected():
      return True

def vertical_speed():
      "returns the measured vertical speed"
      return 0

def apogee_detected():
      return False

def landing_detected():
      return False

def send_error_message(code):
      "send the error message corresponding to the code"

def trajectory_in_security_cone():
      return True

def engine(instruction):
      if intruction == "on":
            engine_on = True
            # turn on the engine
      elif instruction == "off":
            engine_on = False
            # turn off the engine

def altitude():
      "returns the measured altitude"
      return 0

def deploy_fisrt_parachute():
      return

def deploy_second_parachute():
      return

# MAIN FUNCTION

while True:
    # BACKGROUND TASKS
    local_time += 1

    # STATES
    if state == ST_INITIALISATION:
        initialisation()
        state = ST_SENSORS_INITIALISATION
    elif state == ST_SENSORS_INITIALISATION:
        if checkUmbilicalPlugged():
            result = check_sensors_communication()
            if not result:
                state = ST_SENSORS_ERROR
            result = calibrate_sensors()
            if not result:
                state = ST_SENSORS_ERROR
            result = check_values()
            if not result:
                state = ST_SENSORS_ERROR
            if state == ST_SENSORS_INITIALISATION: # aka no error
                state = ST_READY_TO_LAUNCH
    elif state == ST_READY_TO_LAUNCH:
        if launch_detected():
            state = ST_POWED_ASCENT
    elif state == ST_SENSORS_ERROR:
        send_error_message(0);
        state = 0
    elif state == ST_POWED_ASCENT:
        if not trajectory_in_security_cone():
            state = ST_DEGRADED_TRAJECTORY_1
        elif local_time > combustion_time or engine_off:
            state = ST_COASTING_ASCENT
    elif state == ST_DEGRADED_TRAJECTORY_1:
        engine("off");
        state = ST_DEGRADED_TRAJECTORY_2
    elif state == ST_COASTING_ASCENT:
        if apogee_detected() and abs(apogee_time - local_time) < security_time  or \
                  local_time > apogee_time + security_time:
            state = ST_FAST_DESCENT
    elif state == ST_DEGRADED_TRAJECTORY_2:
        if apogee_detected():
            deploy_first_parachute()
            state = ST_FAST_DESCENT
    elif state == ST_FAST_DESCENT:
    if local_time > stabilisation_time_1:
        if vertical_speed() < max_vertical_speed:
            state = ST_NOMINAL_FAST_DESCENT
        else:
            state = ST_FIRST_PARACHUTE_FAILURE
    elif state == ST_NOMINAL_FAST_DESCENT:
        if altitude() < min_altitude:
            deploy_second_parachute()
            state = ST_SLOW_DESCENT
    elif state ST_FIRST_PARACHUTE_FAILURE:
        deploy_second_parachute()
        state = ST_SLOW_DESCENT
    elif state == ST_SLOW_DESCENT:
        if local_time > stabilisation_time_2:
            if vertical_speed < max_vertical_speed:
                state = ST_NOMINAL_SLOW_DESCENT
            else:
                state = ST_SECOND_PARACHUTE_FAILURE
    elif state == ST_NOMINAL_SLOW_DESCENT:
        if landing_detected():
            # happy ending
    else:
        # boom I guess

    sleep(TIME_TO_WAIT)
