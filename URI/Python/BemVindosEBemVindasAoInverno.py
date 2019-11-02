temp = [int(x) for x in input().split()]
temp1 = temp[0]
temp2 = temp[1]
temp3 = temp[2]

if (temp1 > temp2 and temp2 <= temp3):
    print(":)")

elif (temp1 < temp2 and temp2 >= temp3): 
    print(":(")

elif (temp1 < temp2 and temp2 < temp3 and (temp3-temp2)<(temp2-temp1)):
    print(":(")

elif (temp1 < temp2 and temp2 < temp3 and (temp3-temp2)>=(temp2-temp1)):
    print(":)")

elif (temp1 > temp2 and temp2 > temp3 and (temp2-temp3)<(temp1-temp2)):
    print(":)")

elif (temp1 > temp2 and temp2 > temp3 and (temp2-temp3)>=(temp1-temp2)):
    print(":(")

elif (temp1 == temp2):
    if(temp2 < temp3):
        print(":)")
    else: 
        print(":(")