rangeLimit = 100
errorLimit = 0.00001


oldX = 1
for i in range(rangeLimit):
    temp = ((7/oldX) + oldX)/2
    error = abs(temp - oldX)
    print("[%.11f] Error : %.11f"%(temp, error))
    if (-0.00001 <= error <= 0.00001) :
        break
    oldX = temp

    
