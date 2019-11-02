n = io.read("*number")
count = 0
for i=1,5 do
    num = io.read("*number")
    if n == num then
        count = count +1
    end
end
print(count)