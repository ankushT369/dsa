# Makefile

# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Targets
all: a b c d e

a: A.cc
	$(CXX) $(CXXFLAGS) -o a A.cc

b: B.cc
	$(CXX) $(CXXFLAGS) -o b B.cc

c: C.cc
	$(CXX) $(CXXFLAGS) -o c C.cc

d: D.cc
	$(CXX) $(CXXFLAGS) -o d D.cc

e: E.cc
	$(CXX) $(CXXFLAGS) -o e E.cc

# Clean up the build files
clean:
	rm -f a b c d e

