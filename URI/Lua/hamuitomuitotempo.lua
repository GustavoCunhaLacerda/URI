n = io.read("*number")
for i=1,n do
    anos = io.read("*number")
    anos = 2015 - anos
    if anos <= 0 then
        anos=anos*-1
        anos=anos+1
        print(anos.." A.C.")
    else
        print(anos.." D.C.")
    end
end