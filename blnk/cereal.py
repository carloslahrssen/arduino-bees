import serial;
import sys

ser = serial.Serial('/dev/tty96B0', 9600);


while True:
    print(ser.readline())
    sys.stdout.flush()
