# mytemps

## Files
- mytemps.c
- weather.c
- weather.h

## Building weather.so

```bash
gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weather.c -o weather.so
```
## Building and running mytemps

```bash
gcc -std=c11 -Wall -fmax-errors=10 -Wextra mytemps.c weather.so -o mytemps
./mytemps
```
