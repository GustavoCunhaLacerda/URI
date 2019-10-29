n = io.read("*number")
maior = io.read("*number")
m_maior = io.read("*number")

for i=2,n
do
    matricula = io.read("*number")
    nota = io.read("*number")
    if nota > m_maior then
        m_maior = nota
        maior = matricula
    end
end

if m_maior < 8 then
    print("Minimum note not reached")
else
    print(maior)
end