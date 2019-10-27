temp1 = io.read("*number")
temp2 = io.read("*number")
temp3 = io.read("*number")

--1
if (temp1 > temp2 and temp2 <= temp3) then
    io.write(":)\n")
--2
elseif (temp1 < temp2 and temp2 >= temp3) then 
    io.write(":(\n")
--3
elseif (temp1 < temp2 and temp2 < temp3 and (temp3-temp2)<(temp2-temp1)) then
    io.write(":(\n")
--4
elseif (temp1 < temp2 and temp2 < temp3 and (temp3-temp2)>=(temp2-temp1)) then
    io.write(":)\n")
--5
elseif (temp1 > temp2 and temp2 > temp3 and (temp2-temp3)<(temp1-temp2)) then
    io.write(":)\n")
--6
elseif (temp1 > temp2 and temp2 > temp3 and (temp2-temp3)>=(temp1-temp2)) then
    io.write(":(\n")
--7
elseif (temp1 == temp2) then
    if(temp2 < temp3) then
        io.write(":)\n")
    else 
        io.write(":(\n")
    end
end

