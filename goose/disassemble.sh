set -v
objdump -d talk.o -C -r > talk.o.dis
objdump -d shout.o -C -r > shout.o.dis
objdump -d main.o -C -r > main.o.dis
objdump -d main -C -r > main.dis
