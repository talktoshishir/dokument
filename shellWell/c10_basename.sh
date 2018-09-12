#!/bin/bash

echo "I was called with $# parameters"
echo "My name is $0"
echo "My first parameter is $1"
echo "My second parameter is $2"
echo "All parameters are $@"

echo "My name is fir se `basename $0`"



#while [ "$#" -gt "0" ]
#do
#  echo "\$1 is $1"
#  shift
#done 

if [ "$?" -ne "0" ]; then
  echo "Sorry, we had a problem there!"
fi
