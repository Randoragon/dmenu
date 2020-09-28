# dmenu - dynamic menu

This repo holds my fork of dmenu - the efficient dynamic menu for X.
The version of dmenu which was originally forked is the stable 5.0
release.

## Applied Patches

- [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch/)
- [fuzzyhighlight](https://tools.suckless.org/dmenu/patches/fuzzyhighlight/)
- [multi selection](https://tools.suckless.org/dmenu/patches/multi-selection/)

## Requirements

In order to build dmenu you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install

