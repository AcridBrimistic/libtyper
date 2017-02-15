// libtyper.c
/*
 * Copyright (C) 2017 Hannu Pakarinen
 *
 * This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 *
 *
 *
 */
#include "libtyper.h"

#include <unistd.h> // usleep() and fflush()
#include <stdio.h> // putchar()
#include <string.h> // strlen()

int typer(char str[], uint32_t typespeed) {

int i;
int length_str = strlen(str);

for (i = 0 ;i < length_str; i++) {

usleep(typespeed * 1000); // convert to milliseconds

putchar(str[i]);
fflush(stdout);

}
return 0;
}
