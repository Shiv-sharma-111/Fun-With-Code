#script.sh
#!/bin/bash
clear
sum=0
i="y"
echo "enter one number."
read n1
echo "enter second number."
read n2
echo "1. addition"
echo "2. subtraction"
echo "3. multiplication"
echo "4. division"
echo "Enter your choice"
read ch
case $ch in
    1)sum=`expr $n1 + $n2`
    echo "sum="$sum;;
    2)sum=`expr $n1 - $n2`
    echo "sub="$sum;;
    3)sum=`expr $n1 \* $n2`
    echo "mul="$sum;;
    4)sum=`expr $n1 / $n2`
    echo "div="$sum;;
    *)echo "invalid choice";;
esac
echo "Do you want to continue? if yes press y"
read i
if [ $i != "y" ]
then
    exit
fi
done




