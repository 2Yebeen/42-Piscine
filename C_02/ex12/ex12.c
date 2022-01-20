#include <stdio.h>
#include <string.h>
// #include <sys/mman.h>

char *ft_print_memory(char *str, unsigned int size);

int main(int argc, char **argv) {
	if (sizeof(void *) != 8) {
		puts("Test environment must be 64 bit");
		return -2;
	}
	if (argc < 2) {
		puts("Invalid args");
		return -1;
	}
	// void *addr = (void *) 0x123450000;
	// size_t length = strlen(argv[1]);
	// void *check = mmap(addr, length + 1, PROT_READ, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	// if (check != addr || check == (void *) -1) {
	// 	printf("Failed to alloc: %p\n", check);
	// 	return -3;
	// }
	// printf("%p\n%p\n", addr, check);
	// memcpy(addr, argv[1], sizeof(char *) * length);
	// char *result = ft_print_memory(addr, length);
	// putchar('\n');
	// munmap(addr, length + 1);
	char *result = ft_print_memory(argv[1], strlen(argv[1]));
	putchar('\n');
	return result == argv[1] ? 0 : 1;
}
