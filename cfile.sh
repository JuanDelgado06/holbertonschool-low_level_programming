#!/bin/bash
echo "Nombre del archivo C ?"
read NF
touch $NF
echo "#include <stdio.h>" >> $NF
nano $NF
