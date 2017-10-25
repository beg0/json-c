#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>

#include "json.h"

int main(int argc, char **argv)
{
	json_object* my_object;

	MC_SET_DEBUG(1);

	my_object = json_object_new_object();

	json_object_object_add_int(my_object, "int", 42);
	json_object_object_add_int64(my_object, "int64", 149597870691LL);
	json_object_object_add_double(my_object, "double", 3.141592);
	json_object_object_add_boolean(my_object, "boolean", 1);
	json_object_object_add_string(my_object, "string", "value");
	json_object_object_add_stringf(my_object, "formated_string", "%s string", "formated");

	printf("my_object.to_string()=%s\n", json_object_to_json_string(my_object));

	json_object_put(my_object);

	return EXIT_SUCCESS;
}
