n = io.read("*number")
m = io.read("*number")
for i=1,m do
    a = io.read()
    if a == "fechou" then
        n=n+1
    else
        n=n-1
    end 
end
print(n)