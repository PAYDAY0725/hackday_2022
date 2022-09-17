import wiringpi

class piras:

    def posture(plug):
        wiringpi.wiringPiSetupGpio()
        wiringpi.pinMode(25,1)

        if plug == 1:
            wiringpi.digitalWrite(25,1)
        else:
            wiringpi.digitalWrite(25,0)
