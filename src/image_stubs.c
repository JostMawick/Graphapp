/* Stub functions for missing image functionality */
#include <stdio.h>
#include <stddef.h>
#include "app.h"

/* Stub for app_read_image */
Image *app_read_image(const char *filename, int format)
{
    return NULL; /* Return NULL to indicate no image loading support */
}

/* Stub for app_read_image_file */
Image *app_read_image_file(FILE *file, int format)
{
    return NULL; /* Return NULL to indicate no image loading support */
}
