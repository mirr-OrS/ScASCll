run-clang: main.c
	@echo "Compiling main.c using clang..."
	clang main.c -o game
	@echo "Running game..."
	@./game

run-gcc: main.c
	@echo "Compiling main.c using gcc..."
	gcc main.c -o game
	@echo "Running game..."
	@./game

clean: game
	@echo "Removing executable..."
	@rm -f game