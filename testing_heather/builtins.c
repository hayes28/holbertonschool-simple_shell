#include "main.h"

/**
 *   * env_cmd - prints environment variables
 *     */
void env_cmd(void)
{
		print_array(environ);
}
