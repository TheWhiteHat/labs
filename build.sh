#!/bin/bash
for level in $(ls -d level*)
do
  cd $level
  ./build.sh
  cd ..
done
