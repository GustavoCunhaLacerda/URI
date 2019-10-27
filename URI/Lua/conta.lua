n = io.read("*number")
for i = n, 1, -1 
do
    num = io.read("*number")
    if (num%2 == 1) then
        io.write("1\n");
    else
        io.write("0\n");
    end
end