LIBS = -lGLEW -lGL -lglfw -lSOIL

texprog: main.o texture.o
	g++ -g -Wall -o texprog main.o texture.o Animation.o $(LIBS)
	
main.o: main.cpp texture.o Animation.o
	g++ -g -Wall -c main.cpp $(LIBS)
	
texture.o: texture.cpp texture.h
	g++ -g -Wall -c texture.cpp $(LIBS)

Animation.o: Animation.cpp Animation.hpp
	g++ -g -Wall -c Animation.cpp $(LIBS)

	
clean:
	rm texprog main.o texture.o Animation.o
