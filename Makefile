# Copyright © 2015-2023 Jakub Wilk <jwilk@jwilk.net>
# SPDX-License-Identifier: MIT

CFLAGS = -g -O2 -Wall

.PHONY: all
all: incusb

.PHONY: test
test: incusb
	./incusb

.PHONY: clean
clean:
	rm -f incusb

# vim:ts=4 sts=4 sw=4 noet
