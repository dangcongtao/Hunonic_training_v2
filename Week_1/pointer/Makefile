.PHONY: all
BUILD_DIR = build
all:
	rm -rf $(BUILD_DIR)/
	mkdir $(BUILD_DIR)
	gcc -o $(BUILD_DIR)/ptr_1d pointer_1D_array.c

	gcc -o $(BUILD_DIR)/ptr_2d pointer_2D_array.c

run_ptr1: 
	./$(BUILD_DIR)/ptr_1d
run_ptr2:
	./$(BUILD_DIR)/ptr_2d
