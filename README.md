# bestia-na-kolach
### tu wrzucam pliki dotyczące projektu arduino do pojazdu na Odyseje Umysłu aby uniknąć kolejnej awarii dysku

## INSTRUKCJA PODŁĄCZENIA PINÓW:
### Arduino srebrne (sw_laugh)
1. NONE
2. Guzik, opisać jako "Śmiech"
3. Buzzer, pin sterujący
4. Guzik, opisać jako "LEDY uśmiech"
5. Ledy, pin sterujący, podłączyć do przełącznika Domyślnie ma być SMUTNY
6. Guzik, opisać jako "Przód/Tył"
7. Przód/tył, podłączyć do przełącznika. Domyślnie ma iść NAPRZÓD
8. NONE
9. NONE
10. NONE
11. Guzik, opisać jako "Mikrofon"
12. Podczepić do Arduino złote(mikrofon-silnik) na PIN 8

### Arduino złote (mikrofon-silnik)
1. NONE
2. NONE
3. NONE
4. NONE 
5. NONE 
6. NONE
7. NONE
8. Podczepić do Arduino srebrne (sw_laugh) na PIN 12
9. Podczepić do mikrofonu na PIN DOUT

### Mikrofon
DOUT - Podczepić do Arduino złote (mikrofon-silnik) na PIN 9  
AOUT - Zostawić puste  
GND - Podczepić do uziemienia  
VCC - Podczepić na 5V  

### Buzzer (Od lewej, buzzer nad pinami)
1. Podczepić do GND
2. Podczepić do 5V
3. Podczepić do Arduino srebrne (sw_laugh) na PIN 3

W razie problemów z podłączeniem, pisz na mess
