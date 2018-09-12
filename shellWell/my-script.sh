#!/bin/bash

#3C
#echo "Hello World"
#echo "Hello      World"       # This is a comment, too!
#echo "Hello World"
#echo "Hello * World"
#echo Hello * World
#echo Hello      World
#echo "Hello" World
#echo Hello "     " World
#echo "Hello "*" World"
#echo `hello` world
#echo 'hello' world

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


#6C
echo "abc is \$MY_NAME"


#7C
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


#while :
#do
#  echo "Please type something in (^C to quit)"
#  read INPUT_STRING
#  echo "You typed: $INPUT_STRING"
#done

while f=`line`
do
  case $f in
	hello)		echo English	;;
	howdy)		echo American	;;
	gday)		echo Australian	;;
	bonjour)	echo French	;;
	namaste)	echo HINDI	;;
	"guten tag")	echo German	;;
	*)		echo Unknown Language: $f
		;;
   esac
done < myfile


#while read f
#do
#  case $f in
#	hello)		echo English	;;
#	howdy)		echo American	;;
#	gday)		echo Australian	;;
#	bonjour)	echo French	;;
#	namaste)	echo HINDI	;;
#	"guten tag")	echo German	;;
#	*)		echo Unknown Language: $f
#		;;
#   esac
#done < myfile

#mkdir rc{0,1,2,3,4,5,6,S}.d
#for runlevel in 0 1 2 3 4 5 6 S
#do
#  mkdir rc${runlevel}.d
#done

#ls -ld {,usr,usr/local}/{bin,sbin,lib}


#8C



