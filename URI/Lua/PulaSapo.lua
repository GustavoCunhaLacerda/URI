salto = io.read("*number")
qte = io.read("*number")
canos = {}
win = true
for i=1,qte
do
    canos[i] = io.read("*number")   
end
for i=1,qte-1
do
    aux = canos[i]-canos[i+1]
    if aux < -salto or aux > salto then
        win = false
        break
    end
end
if win == true then
    print("YOU WIN")
else
    print("GAME OVER")
end