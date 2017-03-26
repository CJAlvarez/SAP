# makefile
main.exe: main.o Juego.o Cosa.o Pocion.o P_Salud.o P_Poder.o P_Nivel.o Rollo.o Mochila.o Cartera.o Maleta.o BolsaMagica.o Personaje.o Guerrero.o LordDrako.o Mago.o Fuego.o Aire.o Tierra.o Agua.o Vacio.o
	g++ main.o Juego.o Cosa.o Pocion.o P_Salud.o P_Poder.o P_Nivel.o Rollo.o Mochila.o Cartera.o Maleta.o BolsaMagica.o Personaje.o Guerrero.o LordDrako.o Mago.o Fuego.o Aire.o Tierra.o Agua.o Vacio.o -o run -lncurses -lpthread -std=c++0x

main.o: main.cpp Juego.h
	g++ main.cpp -c -lncurses -lpthread -std=c++0x

Juego.o: Juego.h Juego.cpp Agua.h Aire.h
	g++ Juego.cpp -c -lncurses -lpthread -std=c++0x

#____________________________________________________________________________________________________
# PERSONAJES
Personaje.o: Personaje.h Personaje.cpp Cartera.h Maleta.h BolsaMagica.h
	g++ Personaje.cpp -c -lncurses -lpthread -std=c++0x

# GUERREROS
Guerrero.o: Guerrero.h Guerrero.cpp Personaje.h
	g++ Guerrero.cpp -c -lncurses -lpthread -std=c++0x

LordDrako.o: LordDrako.h LordDrako.cpp Guerrero.h
	g++ LordDrako.cpp -c -lncurses -lpthread -std=c++0x

# MAGOS
Mago.o: Mago.h Mago.cpp Guerrero.h
	g++ Mago.cpp -c -lncurses -lpthread -std=c++0x

Fuego.o: Fuego.h Fuego.cpp Aire.h Mago.h
	g++ Fuego.cpp -c -lncurses -lpthread -std=c++0x

Aire.o: Aire.h Aire.cpp Tierra.h Mago.h
	g++ Aire.cpp -c -lncurses -lpthread -std=c++0x

Tierra.o: Tierra.h Tierra.cpp Agua.h Mago.h
	g++ Tierra.cpp -c -lncurses -lpthread -std=c++0x

Agua.o: Agua.h Agua.cpp Fuego.h Mago.h
	g++ Agua.cpp -c -lncurses -lpthread -std=c++0x

Vacio.o: Vacio.h Vacio.cpp Mago.h
	g++ Vacio.cpp -c -lncurses -lpthread -std=c++0x

#____________________________________________________________________________________________________
# MOCHILAS
Mochila.o: Mochila.h Mochila.cpp P_Salud.h P_Poder.h P_Nivel.h Rollo.h
	g++ Mochila.cpp -c -lpthread -std=c++0x

Cartera.o: Cartera.h Cartera.cpp Mochila.h 
	g++ Cartera.cpp -c -lpthread -std=c++0x

Maleta.o: Maleta.h Maleta.cpp Mochila.h
	g++ Maleta.cpp -c -lncurses -lpthread -std=c++0x

BolsaMagica.o: BolsaMagica.h BolsaMagica.cpp Mochila.h
	g++ BolsaMagica.cpp -c -lncurses -lpthread -std=c++0x

#____________________________________________________________________________________________________
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