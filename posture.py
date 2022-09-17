#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import wiringpi

def posture(plug):
    wiringpi.wiringPiSetupGpio()
    wiringpi.pinMode(25,1)
    
    if plug == 1:
        wiringpi.digitalWrite(25,1)

