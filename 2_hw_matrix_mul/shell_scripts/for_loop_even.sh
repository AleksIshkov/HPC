for i in {100..1000}
do
 if [ $((i%2)) -eq 0 ];
 then
     echo $i;
 fi
done
