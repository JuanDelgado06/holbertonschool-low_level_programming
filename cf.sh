#!/bin/bash
echo "Nombre del Archivo"
read NF
touch $NF
BIN="#!/bin/bash"
echo $BIN >> $NF
echo "Escribe tu codigo"
read MYCODE
echo $MYCODE >> $NF
chmod u+x $NF
nano $NF
