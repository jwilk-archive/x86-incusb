// Copyright © 2015-2023 Jakub Wilk <jwilk@jwilk.net>
// SPDX-License-Identifier: MIT

#include <assert.h>

static inline void incusb(unsigned char *n)
{
    asm(
        "addb $1, %0\n"
        "sbbb $0, %0\n"
        : "+r"(*n)
        :
        : "cc"
    );
}

int main(int argc, char **argv)
{
    int i;
    for (i = 0; i < 256; i++) {
        unsigned char x = i;
        incusb(&x);
        assert(x == (i == 255 ? i : i + 1));
    }
    return 0;
}

/* vim:set ts=4 sts=4 sw=4 et: */
