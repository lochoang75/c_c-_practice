COMPILER=g++
FLAGS= -Wall
.PHONY: all clean

all:  
	$(COMPILER) $(FLAGS) $< -o $@

fig09_03: fig09_03.cpp Time.cpp
	$(COMPILER) $(FLAGS) $< Time.cpp -o $@

fig09_06: fig09_06.cpp Time.cpp
	$(COMPILER) $(FLAGS) $< Time.cpp -o $@

fig09_16: fig09_16.cpp Time.cpp
	$(COMPILER) $(FLAGS) $< Time.cpp -o $@
clean:
	rm -f *.o 
