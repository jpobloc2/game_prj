object.o: object.cc object.h
player.o: player.cc player.h object.h bullet.h
objectTest.o: objectTest.cc player.h object.h bullet.h asteroid.h
bullet.o: bullet.cc bullet.h object.h
asteroid.o: asteroid.cc asteroid.h object.h
