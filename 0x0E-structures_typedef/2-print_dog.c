#include <stdio.h>
#include <stdlib.h>
#include "test.h"

/**
 * print_dog - function
 *
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %s", d->age);
		if (d->owner == NULL)
			printf("Name: (nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
