# make dynamic lib
gcc -fPIC dlib.c -c
gcc -shared -o dlib.so dlib.o

# make static lib
gcc -c slib.c
ar crs slib.a slib.o
