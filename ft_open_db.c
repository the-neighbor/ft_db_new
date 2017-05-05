#include "ft_db.h"

t_dbinfo	*ft_open_db(char *filename, int *fd)
{
	t_dbinfo	*dbmeta;

	dbmeta = NULL;
	*fd = ft_open_file(filename);
	if (*fd >= 0)
	{
		dbmeta = (t_dbinfo*)ft_memalloc(sizeof(t_dbinfo));
		if (dbmeta)
			ft_update_status(*fd, dbmeta);
	}
	return (dbmeta);
}
