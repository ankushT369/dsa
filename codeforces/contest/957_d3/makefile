# Define the compiler
CXX = g++

# Define the compiler flags
CXXFLAGS = -Wall -g

all : A B C D

# Targets and their respective dependencies
A: A.cc
	$(CXX) $(CXXFLAGS) -o A A.cc

B: B.cc
	$(CXX) $(CXXFLAGS) -o B B.cc

C: C.cc
	$(CXX) $(CXXFLAGS) -o C C.cc

D: D.cc
	$(CXX) $(CXXFLAGS) -o D D.cc


# Clean rule to remove the generated executables
clean:
	rm -f A B C D

