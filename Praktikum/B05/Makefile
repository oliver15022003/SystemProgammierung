CC = gcc
CFLAGS = -g -Wall -pedantic -std=c11
INCLUDE_DIR = include

# Pfade zu den Quelldateien und dem Ausgabeverzeichnis
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Hauptziel: Erstellt das ausführbare Programm
all: $(BIN_DIR)/main

# Ziel zur Erstellung des ausführbaren Programms
$(BIN_DIR)/main: $(OBJ_DIR)/main.o $(OBJ_DIR)/ringbuffer.o
	$(CC) $(CFLAGS) -o $@ $^

# Ziel zur Erstellung des main.o-Objekts
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c $(INCLUDE_DIR)/ringbuffer.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $< -I$(INCLUDE_DIR)

# Ziel zur Erstellung des ringbuffer.o-Objekts
$(OBJ_DIR)/ringbuffer.o: $(SRC_DIR)/ringbuffer.c $(INCLUDE_DIR)/ringbuffer.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $< -I$(INCLUDE_DIR)

# Erstellt das Ausgabeverzeichnis, falls es nicht existiert
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN_DIR)

# Aufräumen: Löscht die erzeugten Dateien
clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)