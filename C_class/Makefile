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

fig09_21: fig09_21.cpp Date.cpp Employee.cpp
	$(COMPILER) $(FLAGS) $< Date.cpp Employee.cpp -o $@

fig09_26: fig09_26.cpp Time.cpp
	$(COMPILER) $(FLAGS) $< Time.cpp -o $@

fig09_29: fig09_29.cpp Employee.cpp Date.cpp
	$(COMPILER) $(FLAGS) $< Date.cpp Employee.cpp -o $@

clean:
	rm -f *.o 
