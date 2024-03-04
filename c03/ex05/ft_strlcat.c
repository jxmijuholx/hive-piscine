unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[20] = "Hello ";
	char src[] = "World!";
	unsigned int size = sizeof(dest);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("Concatenated string: %s\n", dest);
	printf("Total length: %u\n", result);

	return (0);
}
*/