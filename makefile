# makefile
main.exe: main.o Juego.o Cosa.o Pocion.o P_Salud.o P_Poder.o P_Nivel.o Rollo.o Mochila.o Cartera.o Maleta.o BolsaMagica.o Personaje.o Guerrero.o
	g++ main.o Juego.o Cosa.o Pocion.o P_Salud.o P_Poder.o P_Nivel.o Rollo.o Mochila.o Cartera.o Maleta.o BolsaMagica.o Personaje.o Guerrero.o -o run -lncurses -lpthread -std=c++0x

main.o: main.cpp Juego.h
	g++ main.cpp -c -lncurses -lpthread -std=c++0x

Juego.o: Juego.h Juego.cpp Guerrero.h
	g++ Juego.cpp -c -lncurses -lpthread -std=c++0x

# PERSONAJES
Personaje.o: Personaje.h Personaje.cpp Cartera.h Maleta.h BolsaMagica.h
	g++ Personaje.cpp -c -lncurses -lpthread -std=c++0x

Guerrero.o: Guerrero.h Guerrero.cpp Personaje.h
	g++ Guerrero.cpp  -c -lncurses -lpthread -std=c++0x

# COSAS
Cosa.o: Cosa.h Cosa.cpp
	g++ Cosa.cpp -c -lpthread -std=c++0x

Rollo.o: Rollo.h Rollo.cpp Cosa.h
	g++ Rollo.cpp -c -lpthread -std=c++0x

# POCIONES
Pocion.o: Pocion.h Pocion.cpp Cosa.h
	g++ Pocion.cpp -c -lpthread -std=c++0x

P_Salud.o: P_Salud.h P_Salud.cpp Pocion.h
	g++ P_Salud.cpp -c -lpthread -std=c++0x

P_Poder.o: P_Poder.h P_Poder.cpp Pocion.h
	g++ P_Poder.cpp -c -lpthread -std=c++0x

P_Nivel.o: P_Nivel.h P_Nivel.cpp Pocion.h
	g++ P_Nivel.cpp -c -lpthread -std=c++0x

# MOCHILAS
Mochila.o: Mochila.h Mochila.cpp P_Salud.h P_Poder.h P_Nivel.h Rollo.h
	g++ Mochila.cpp -c -lpthread -std=c++0x

Cartera.o: Cartera.h Cartera.cpp Mochila.h P_Salud.h P_Poder.h P_Nivel.h Rollo.h
	g++ Cartera.cpp -c -lpthread -std=c++0x