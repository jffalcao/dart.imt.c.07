mytemps: mytemps.c weather.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra mytemps.c weather.so -o mytemps

weather.so: weather.c weather.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weather.c -o weather.so

launch: mytemps
	./mytemps