

all: build/main.ihx
	sudo stcgal -t 32000 $< 

build/main.ihx: src/main.c
	sdcc $< -Iinc -o build/
