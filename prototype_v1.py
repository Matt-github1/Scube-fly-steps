from time import sleep

# CONSTANTS AND MAIN VARIABLES OF THE PROGRAM
""" States :
      0 : does nothing, wait commands
     11 : initialisation
     12 : sensor initialisation
     13 : ready for launch
     14 : sensor error
     21 : powered ascent
    211 : sensor error
     22 : coasting ascent
    221 : degraded trajectory
     31 : fast descent
    311 : nominal fast descent
    312 : first parachute failure
     32 : slow descent
    321 : nominal slow descent
    322 : second parachute failure
"""
state = 11

# MAIN FUNCTION

while True:
    # BACKGROUND TASKS

    # STATES
    if state == 11:
        # initialise variables, clocks, registery ...
        # state = 12
    elif state == 12:
        # if UMBILICAL_PLUGGED:
            # check communication with sensors
            # if communication failed:
                # state = 14
            # calibrate sensors
            # if calibration failed:
                # state = 14
            # check values are correct
            # if check failed:
                # state = 14
            # if state == 12 (aka no error):
                # state = 13
    elif state == 13:
        # if launch detected:
            # state = 21
    elif state == 14:
        # send error message
        # state = 0
    elif state == 21:
        # if trajectory out of security cone:
            # state = 211
        # elif t > combustion_time or engine off, state = 22
    elif state == 211:
        # turn off engine
        # state = 221
    elif state == 22:
        # if apogee detected:
            # state = 31
    elif state == 221:
        # if apogee detected:
            # state = 31
    elif state == 31:
        # deploy parachute 1
        # state = 311
    elif state == 311:
        # if t > stabilisation time:
            # if Vz < Vmax (slow descent):
                # deploy parachute 2
                # state = 312
            # else (paraachute 1 failure ?):
                # state = 32
    elif state 312:
        # if z < z0



    # sleep(TIME_TO_WAIT)
