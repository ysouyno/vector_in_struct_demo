main.out : main.cpp
	g++ -o main.out main.cpp
.PHONY : clean
clean :
	rm -f main.out
