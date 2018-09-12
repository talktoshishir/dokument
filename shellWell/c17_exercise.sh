#!/bin/sh
#set -x
#trap read debug

if [ -f addressBook.txt ]; then
    echo "File Exist"
else
    touch "addressBook.txt"
fi

if [ $1 == "-h" ]; then
    echo "Please enter your options :"
    echo "  -s field_to_search"
    echo "  -a Name Surname PhoneNumber Email (With Spaces in between)"
    echo "  -d field_to_delete"
    exit
fi

usrOption=$1

echo $usrOption

if [[ $usrOption == -s || $usrOption == -d ]]; then
    lookOutFor=$2
else
    name=$2
    surname=$3
    phone=$4
    email=$5
fi

case $usrOption in
    -a) echo "$name $surname $phone $email" >> addressBook ;; 
    -s) echo "Looking for field $lookOutFor."
        #while f=`line`
        #do
        #    for i in $f
        #    do
        #        if [ $i == $lookoutfor ]; then
        #          echo $f
        #        fi
        #    done
        #done < addressbook

        break 
        ;;

    -d) break ;;
     *) echo "Not a valid option ";;
esac



while f=`line`
do
    for i in $f
    do
        if [ $i == $lookoutfor ]; then
          echo $f
        fi
    done
done < addressbook.txt





