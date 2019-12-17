from bs4 import BeautifulSoup
from urllib.request import Request, urlopen

id_uri = '357363'

site = 'https://www.urionlinejudge.com.br/judge/pt/profile/'+id_uri

hdr = {'User-Agent': 'Mozilla/5.0'}
req = Request(site,headers=hdr)
page = urlopen(req)
soup = BeautifulSoup(page, features = "html.parser")

lista_infos = soup.findAll("ul", {"class":"pb-information"}) 
infos_fmt = []
for infos_html in lista_infos:
    lista = infos_html.find_all("li")

    for infos in lista:
        infos_fmt.append(infos.text)

dado_bruto =[]
for infos in infos_fmt:
    dado_bruto.append((infos.replace("\n", "")).replace(" ", ""))

BOLD = '\033[1m'
END = '\033[0m'

lista_name = soup.findAll("p", {"itemprop":"name"}) 
print(BOLD+lista_name[0].text+END) #nome

print("{}".format(dado_bruto[0].replace(':', ': '))) # posicao
print("{}".format(dado_bruto[4].replace(':', ': '))) # pontos
print("{}".format(dado_bruto[5].replace(':', ': '))) # resolvidos
print("{}".format(dado_bruto[6].replace(':', ': '))) # tentado
print("{}\n\n".format(dado_bruto[7].replace(':', ': '))) # submissoes
