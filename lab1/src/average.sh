#!/bin/bash

res=0
for param in "$#"
do
   res=$(($res + $param))
done
res=$(($res/$#))
echo "$res"