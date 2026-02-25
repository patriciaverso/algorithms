#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if (argc < 3) {
		printf("Usage: %s \e[3mtarget list\e[0m\nwhere target is the item to be searched on the list, which is a space-separated assortment of items.\n", argv[0]);
	}
	char* target = argv[1];
	int count = 2;
	while (count < argc) {
		if (strcmp(argv[count], target) == 0) {
			printf("found item in position %d\n", count - 2);
			return 0;
		}
		count++;
	}
	printf("not found\n");
	return 1;
}
