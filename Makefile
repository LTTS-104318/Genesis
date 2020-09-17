SRC = source/print.c\
main.c

PROJECT_NAME = print.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
