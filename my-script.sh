#!/bin/sh

#3C
echo "Hello World"
echo "Hello      World"       # This is a comment, too!
echo "Hello World"
echo "Hello * World"
echo Hello * World
echo Hello      World
echo "Hello" World
echo Hello "     " World
echo "Hello "*" World"
echo `hello` world
echo 'hello' world

#4C
#MY_WORLD="Hello Boss"
#echo $MY_WORLD
#echo What is your name?
#read MY_NAME
#echo "Hello $MY_NAME - hope you're well."


#echo "What is your name?"
#read USER_NAME
#echo "Hello $USER_NAME"
#echo "I will create you a file called ${USER_NAME}_file"
#touch "${USER_NAME}_file"


#!/bin/sh
for i in hello 1 * 2 goodbye 
do
  echo "Looping ... i is set to $i"
done

INPUT_STRING=Hello
while [ "$INPUT_STRING" != "bye" ]
do
echo "Enter something or bye to exit"
read INPUT_STRING
echo "You entered $INPUT_STRING"
done
