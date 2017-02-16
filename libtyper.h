#ifndef LIBTYPER_H
#define LIBTYPER_H 1

#endif

#include <stdint.h> // uint32_t datatype
#include <unistd.h> // usleep() and fflush()
#include <stdio.h> // putchar()
#include <string.h> // strlen()

int typer(const char str[], uint32_t typespeed);

