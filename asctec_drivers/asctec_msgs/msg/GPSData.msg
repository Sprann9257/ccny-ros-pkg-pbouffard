Header header
# latitude/longitude in deg * 10^7
int32 latitude
int32 longitude

#GPS height in mm
int32 height

#speed in x (E/W) and y(N/S) in mm/s
int32 speed_x
int32 speed_y

#GPS heading in deg * 100
int32 heading

#accuracy estimates in mm and mm/s
int32 horizontal_accuracy
int32 vertical_accuracy
int32 speed_accuracy

#number of satellite vehicles used in NAV solution
int32 numSV

#GPS status information; 0x03 = valid GPS fix
int32 status
