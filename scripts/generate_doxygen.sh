#!/bin/bash

cd .. && doxygen Doxyfile
moxygen --anchors --output doc/mental-doc.md doc/xml