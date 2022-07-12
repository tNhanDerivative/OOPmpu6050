# output: main.o mpu6050.o
# 	gcc main.o mpu6050.o -o  output

# main.o: main.c ./sensors/mpu6050.h
# 	gcc -c main.c ./sensors/mpu6050.h

# mpu6050.o: ./sensors/mpu6050.c ./sensors/mpu6050.h
# 	gcc -c ./sensors/mpu6050.c 


# output: main.c ./sensors/mpu6050.c
# 	gcc main.c ./sensors/mpu6050.h ./sensors/mpu6050.c -o output

CC=clang-12
CFLAGS= -g -Wall
OBJS=main.o
BIN=output

all: $(BIN)

%o: %.c %.h
	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@

$(BIN): main.c $(OBJS)
	$(CC) $(FLAGS) $< -o $@

clean: 
	$(RM) -r $(OBJS) $(BIN) *.dSYM


# $@: The file name of the target of the rule. 
# $%: The target member name, when the target is an archive member. 
# $<: The name of the first prerequisite. If the target got its recipe from an implicit rule, this will be the first prerequisite added by the implicit rule (see Implicit Rules).
# $?: The names of all the prerequisites that are newer than the target, with spaces between them.
# $^: The names of all the prerequisites, with spaces between them. 

