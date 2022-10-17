new_array=("one" "t w o" "three" 4 5 cat dog mouse frog 10)

for str in ${new_array[@]}; do
  echo $str
done
