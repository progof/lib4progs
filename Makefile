BUILD_DIR = build
CC = gcc

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

lib4progs.o: ./src/main.c ./src/programs.h build_dir
	$(CC) -c ./src/main.c -o ./$(BUILD_DIR)/lib4progs.o	

lib4progs: lib4progs.o build_dir
	$(CC) -o ./$(BUILD_DIR)/lib4progs ./src/main.c ./$(BUILD_DIR)/lib4progs.o && ./$(BUILD_DIR)/lib4progs

run:
	gcc main.c && programs.h -o main && ./main

clean:
	rm -r ./$(BUILD_DIR)/*	