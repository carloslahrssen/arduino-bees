from GPIOLibrary import GPIOProcessor


import time

GP = GPIOProcessor()


try:
    Pin23= GP.getPin23()
    Pin23.input()

    Pin25 = GP.getPin25()
    Pin25.input()



    while(1):
        print(Pin25.getValue())
    

finally:
    GP.cleanup()


    


