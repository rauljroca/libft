# libft

- [Makefile](Makefile)
- [libft.h](libft.h)

## CHAR
#### Classification
- [ft_isalpha.c](ft_isalpha.c)
- [ft_isdigit.c](ft_isdigit.c)
- [ft_isalnum.c](ft_isalnum.c)
- [ft_isascii.c](ft_isascii.c)
- [ft_isprint.c](ft_isprint.c)
#### Manipulation
- [ft_toupper.c](ft_toupper.c)
- [ft_tolower.c](ft_tolower.c)
- [ft_split.c](ft_split.c) - char	**ft_split(const char *s, char c)

## STRING
#### Examination
- [ft_strlen.c](ft_strlen.c)
- [ft_strncmp.c](ft_strncmp.c)
- [ft_strchr.c](ft_strchr.c)
- [ft_strrchr.c](ft_strrchr.c)
- [ft_strnstr.c](ft_strnstr.c)
#### Manipulation
- [ft_strlcpy.c](ft_strlcpy.c)
- [ft_strlcat.c](ft_strlcat.c)
- [ft_strdup.c](ft_strdup.c) - char	*ft_strdup(const char *s1)
  <br>Utilice la función strdup para duplicar la cadena dada en C
- [ft_strmapi.c](ft_strmapi.c) - char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
- [ft_striteri.c](ft_striteri.c) - void ft_striteri(char *s, void (*f)(unsigned int, char*))
- [ft_substr.c](ft_substr.c) - char	*ft_substr(char const *s, unsigned int start, size_t len)
  <br>Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
- [ft_strjoin.c](ft_strjoin.c) - char	*ft_strjoin(char const *s1, char const *s2)
- [ft_strtrim.c](ft_strtrim.c) - char	*ft_strtrim(char const *s1, char const *set)

## WRITE IN FILE DESCRIPTOR
- [ft_putchar_fd.c](ft_putchar_fd.c)
- [ft_putstr_fd.c](ft_putstr_fd.c)
- [ft_putendl_fd.c](ft_putendl_fd.c)
- [ft_putnbr_fd.c](ft_putnbr_fd.c)

## CONVERSION
- [ft_atoi.c](ft_atoi.c)
- [ft_itoa.c](ft_itoa.c)

## MEMORY
#### Manipulation
- [ft_memset.c](ft_memset.c)
- [ft_bzero.c](ft_bzero.c)
- [ft_memcpy.c](ft_memcpy.c)
- [ft_memmove.c](ft_memmove.c)
#### Examination
- [ft_memchr.c](ft_memchr.c)
- [ft_memcmp.c](ft_memcmp.c)
#### Dynamic management
- [ft_calloc.c](ft_calloc.c) - void	*ft_calloc(size_t count, size_t size)
  <br>Automatically initialize the memory region with zero.

## LISTS (bonus)
- [ft_lstnew.c](ft_lstnew.c)
- [ft_lstadd_front.c](ft_lstadd_front.c)
- [ft_lstsize.c](ft_lstsize.c)
- [ft_lstlast.c](ft_lstlast.c)
- [ft_lstadd_back.c](ft_lstadd_back.c)
- [ft_lstdelone.c](ft_lstdelone.c)
- [ft_lstclear.c](ft_lstclear.c)
- [ft_lstiter.c](ft_lstiter.c)
- [ft_lstmap.c](ft_lstmap.c)

## INFO
- [Subject](https://cdn.intra.42.fr/pdf/pdf/55911/es.subject.pdf)
- [c08](https://youtu.be/ewtSjBQVdiM)
- [Diagrama](https://coggle.it/diagram/YK0nO2mu1V3F8Hug/t/libft-a)
- [Makigaz - Tutorial de C](youtube.com/playlist?list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW)
- [Makigaz - Desarrollando en C](youtube.com/playlist?list=PLTd5ehIj0goMZ33qJ7JmuXjSO8RoefiZS)
- [Tópicos de programación](https://www.cs.utah.edu/~germain/PPS/Topics/index.html)
- [Makigaz - Makefile](https://www.youtube.com/watch?v=L96rUUHfC78&list=PLMa9fq02Eqo-6-LRcDQ786lRYi7W3bW9i&index=4)
- Otros: cplusplus.com, pythontutor, `killall -KILL a.out`
- [Trabajar con varios repos](https://stackoverflow.com/questions/14290113/git-pushing-code-to-two-remotes)

## TESTS
### libft-war-machine
https://github.com/y3ll0w42/libft-war-machine
<br>Se copia como hermana de la carpeta libft y se corre con `bash grademe.sh`
<br>Ver `deepthought` y `/tests`
### libft-unit-test
https://github.com/alelievr/libft-unit-test
<br>Se copia como hermana de la carpeta libft y se corre con `make f`
<br>`./run_test -b` -> time used by your libft
### libftTester
https://github.com/Tripouille/libftTester
<br>`make m` (obligatorios) || `make b` (bonus) || `make a` (todos)




<!--
- []()
# The largest heading
## The second largest heading
###### The smallest heading
**This is bold text**
***All this text is important***
<sub>This is a subscript text</sub>
Use `git status` to list all new or modified files that haven't yet been committed.
Some basic Git commands are:
```
git status
git add
git commit
```
This site was built using [GitHub Pages](https://pages.github.com/).
- George Washington
- John Adams
- Thomas Jefferson
-->
