CC=gcc
all:
	$(CC) -g -o bank main.c  callbacks.c `pkg-config --cflags --libs gtk+-2.0 libglade-2.0` -export-dynamic
