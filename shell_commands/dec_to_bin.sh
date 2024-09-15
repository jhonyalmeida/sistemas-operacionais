#!/usr/bin/bash

val=$1
base=$2
result=""

while [ $val != 0 ] ; do
   result=$(($val%$base))$result # novo dígito + dígitos passados
   echo $result
   val=$(($val/$base))
done

echo "Hello world"
echo $result 