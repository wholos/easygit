all:
	@g++ -o easygit src/main.cpp

install: all
	@sudo cp easygit /usr/bin/

clean:
	@rm easygit
