while 1 do
    x = io.read("*number")
    y = io.read("*number")
    if x > 0 and y > 0 then
        print("primeiro")
    end
    if x < 0 and y > 0 then
        print("segundo")
    end
    if x < 0 and y < 0 then
        print("terceiro")
    end
        if x > 0 and y < 0 then
        print("quarto")
    end

    if x == 0 or y == 0 then
        break
    end
end