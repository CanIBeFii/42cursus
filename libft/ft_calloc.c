#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size){
	void	*prt;

	prt = malloc(nmemb * size);
	if(!prt)
		return (NULL);
	ft_bzero(prt, nmemb * size);
	return (prt);
}