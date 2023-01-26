BUILD_DIR = build
CC = gcc

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

programs.o: ./src/programs.c ./src/programs.h build_dir
	$(CC) -c ./src/programs.c -o ./$(BUILD_DIR)/programs.o	

run: programs.o build_dir
	gcc ./src/main.c ./$(BUILD_DIR)/programs.o -o ./$(BUILD_DIR)/main && ./$(BUILD_DIR)/main

clean:
	rm -r ./$(BUILD_DIR)/*	