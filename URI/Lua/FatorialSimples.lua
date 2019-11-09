num = io.read("*number")

for i=num-1,1,-1 do
    num = num*i
end
if num == 0 then
    num = 1
end
print(num)