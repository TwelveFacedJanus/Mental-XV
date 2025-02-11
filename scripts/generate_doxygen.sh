#!/bin/bash

cd .. && doxygen Doxyfile
moxygen --anchors --output doc/menta-doc-%s.md doc/xml