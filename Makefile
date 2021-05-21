run:
	gcc -g -Wall -Wextra -Wpedantic main.c item.c -o main
	./main input.txt
	rm main