#!/bin/bash
if [ -z $compiler ]
then
  if [ which gcc 2&>/dev/null ]
  then
    compiler=gcc
  else
    echo "cannot find GCC. Please install GCC and run this script again."
    echo "Ubuntu users: this can be done by running \"sudo apt-get install gcc\""
    exit
  fi
fi
export compiler

for level in $(ls -d level*)
do
  cd $level
  ./build.sh
  cd ..
done
