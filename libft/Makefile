#GCC FLAGS
CFLAGS = -Wall -Wextra -Werror
CC = gcc
TESTS = ./.tests
AR = ar rc


libft.a: ft_tolower.o ft_toupper.o
	$(AR) libft.a ft_toupper.o ft_tolower.o

ft_tolower.o: ft_tolower.c
	$(CC) -c -o ft_tolower.o ft_tolower.c

ft_toupper.o: ft_toupper.c
	$(CC) -c -o ft_toupper.o ft_toupper.c

test:
	@$(CC) $(CFLAGS) -o .tests/test_tolower.o .tests/test_tolower.c
	@$(CC) $(CFLAGS) -o .tests/test_toupper.o .tests/test_toupper.c
	@.tests/test_tolower.o
	@.tests/test_toupper.o
clean:
	rm -f *.o

fclean: clean
	rm -f *.a

