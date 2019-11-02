
p = io.read("*number")
j1 = io.read("*number")
j2 = io.read("*number")
r = io.read("*number")
a = io.read("*number")
if (r == 1 and a == 1) then
    print("Jogador 2 ganha!")
elseif ( (p == 1 and (j1+j2)%2 == 0) or (p == 0 and (j1+j2)%2 == 1) or (r == 1 and a == 0)) then
    print("Jogador 1 ganha!")
else
    print("Jogador 2 ganha!")
end
    