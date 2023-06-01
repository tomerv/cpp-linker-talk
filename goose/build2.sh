set -v
g++ -c talk.cpp -o talk.o
g++ -c shout.cpp -o shout.o
g++ -c capitalize.cpp -o capitalize.o
g++ -c main.cpp -o main.o

g++ *.o -o main
