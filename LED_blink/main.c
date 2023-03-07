# include < avr / io .h >
# include < util / delay .h >
# include < stdint .h >
int16_t main ()
{
int16_t high_time = 500;
int16_t low_time = 500;
DDRB |= 1 << 5; // PB5 je izlaz
while (1)
{
PORTB |= 1 << 5; // LED ON
_delay_ms ( high_time ) ; // Pauza 1 s
PORTB &= ~(1 << 5) ; // LED OFF
_delay_ms ( low_time ) ; // Pauza 1 s
}
return 0;
}