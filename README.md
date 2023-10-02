## Libft

This project is focused on making our first library. I had few notions about the use of Git, so it lacks of clearer commits information, branches and organtization. The library, that will be upgraded along the '42 cursus', will be very important because the C projects usually don't  allow the use of the standard library of C, with some execptions. That's why it's so necessary to implemment our own functions and add it to the Libft.

### Requirements

- Declaring global variables is prohibited.
- If you need to separate a complex function into several, be sure to use the word
static for it. This way, the functions will remain in the appropriate file.
- Put all your files in the root of your repository.
- It is prohibited to deliver unused files.
- All .c files must be compiled with the -Wall -Werror -Wextra flags.
- You must use the ar command to generate the library. The use of libtool is
forbidden.
- Your libft.a has to be created in the root of the repository.

### Functions

#### int		ft_isprint(int c)
tests for any printing character

#### int		ft_isdigit(int c)
tests for any digit character

#### int		ft_isascii(int c)
tests for any ascii character 

#### int		ft_isalpha(int c)
tests for any alphabetic character

#### int		ft_toupper(int c)
coverts lower case to upper case

#### int		ft_tolower(int c)
converts upper case to lower case

#### int		ft_isalnum(int c)
tests for any character for which isalpha(3) or isdigit(3) is true.

#### void	*ft_memcpy(void *dst, const void *src, size_t n)
copies n bytes from memory area src to memory area dst. Overlap undefined
#### void	*ft_memset(void *b, int c, size_t len)**
writes len bytes of value c (converted to an unsigned char) to the string b.

#### void	*ft_memmove(void *dst, const void *src, size_t len)
copies len bytes from string src to string dst.  The two strings may overlap

#### void	ft_bzero(void *s, size_t n)
writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

#### size_t	ft_strlen(const char *s)
computes the length of the string s

#### size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
copy and concatenate strings
take the full size of the destination buffer and guarantee NUL-termination
copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0.

#### int		ft_strncmp(const char *s1, const char *s2, size_t n)

#### size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
appends string src to the end of dst

#### char	*ft_strchr(const char *s, int c)
locates the ocurrence of the character in the string

#### char	*ft_strrchr(const char *s, int c)
locates the last ocurrence of the character in the string
return an integer greater than, equal to, or less than 0

#### void	*ft_memchr(const void *s, int c, size_t n)
locates the first occurrence of c (converted to an unsigned char) in string s.

#### int		ft_memcmp(const void *s1, const void *s2, size_t n)
compares byte string s1 against byte string s2.  
Both strings are assumed to be n bytes long.

#### char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
locates the first occurrence of the null-terminated string needle
in the string haystack

#### int		ft_atoi(const char *str)
converts the initial portion of the string pointed to by
str to int representation.

#### void	*ft_calloc(size_t count, size_t size)
allocates enough space for count objects that are size
bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.

#### char	*ft_strdup(const char *s1)
allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it

#### char	*ft_substr(char const *s, unsigned int start, size_t len)
Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.

#### char	*ft_strjoin(char const *s1, char const *s2)
Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.

Valor devuelto: La nueva string.
NULL si falla la reserva de memoria.

#### char	*ft_strtrim(char const *s1, char const *set)
Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)

#### char	**ft_split(char const *s, char c)
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.

#### char	*ft_itoa(int n)
Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.

#### char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f

#### void	ft_striteri(char *s, void (*f)(unsigned int, char*))
A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.

#### void	ft_putchar_fd(char c, int fd)
Envía el carácter ’c’ al file descriptor
especificado.

#### void	ft_putstr_fd(char *s, int fd)
Envía la string ’s’ al file descriptor
especificado.

#### void	ft_putendl_fd(char *s, int fd)
Envía la string ’s’ al file descriptor dado,
seguido de un salto de línea.

#### void	ft_putnbr_fd(int n, int fd)
Envía el número ’n’ al file descriptor dado.

#### t_list	*ft_lstnew(void *content)
Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL.

#### void	ft_lstadd_front(t_list **lst, t_list *new)
Añade el nodo ’new’ al principio de la lista ’lst’.

#### int		ft_lstsize(t_list *lst)
devuelve tamaño de la lista

#### t_list	*ft_lstlast(t_list *lst)
devuelve ultimo nodo

#### void	ft_lstadd_back(t_list **lst, t_list *new)
añade el nodo 'new' al final de la lista 'lst'

#### void	ft_lstdelone(t_list *lst, void (*del)(void *))
libera contenido de nodo 'lst' y el propio nodo

#### void	ft_lstclear(t_list **lst, void (*del)(void *))
elimina y libera el nodo al que apunta el puntero 
pasado por parametro

#### void	ft_lstiter(t_list *lst, void (*f)(void *))
itera la lista y aplica 'f' a cada nodo

#### t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
