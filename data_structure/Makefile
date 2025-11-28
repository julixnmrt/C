CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC_DIR = src
OBJ_DIR = build
TARGET = test

# fichiers sources
SRC = $(SRC_DIR)/main.c $(SRC_DIR)/linked_list.c

# fichiers objets
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/linked_list.o

all: $(TARGET)

# créer l'exécutable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# compilation des objets
$(OBJ_DIR)/main.o: main.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c main.c -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/linked_list.o: $(SRC_DIR)/linked_list.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/linked_list.c -o $(OBJ_DIR)/linked_list.o

# créer le dossier build s'il n'existe pas
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# exécuter le programme
run: $(TARGET)
	@./$(TARGET)

# nettoyer
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
