#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*result;

	fd = open("gnltest.txt", O_RDONLY);
	while (1)
	{
		result = get_next_line(fd);
		printf("%s", result);
		if (result == NULL)
			break ;
		free(result);
	}
	close(fd);
	return (0);
	
}
/*{
	int	fd;
	char	*result;

	fd = open("text.txt", O_RDONLY);
	while (1)
	{
		result = chop(fd);
		if (result == NULL)
			break ;
		printf("%s", result);
	}
	close(fd);
	return (0);
}*/
