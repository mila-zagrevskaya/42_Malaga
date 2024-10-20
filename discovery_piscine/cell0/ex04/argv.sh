#!/bin/bash
if [ $# -eq 0 ]
then
 echo "No arguments supplied"
 exit;
fi

for i in "$@"
if [$# -ge 3]
do
 echo $i
fi
done