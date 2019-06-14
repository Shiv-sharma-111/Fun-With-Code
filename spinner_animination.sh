#script.sh
#!/bin/bash
clear
#spinner=( 0oooo o0ooo oo0oo ooo0o oooo0 )
spinner=( '|' '/' '-' '\' )
copy(){
  echo "Copying file animation"
  spin &
  pid=$!
  
  for i in `seq 1 10`
  do
    sleep 1
  done

  kill $pid
  echo ""
}
spin(){
  while [ 1 ]
  do
    for i in "${spinner[@]}"
    do 
      echo -ne "\r$i"
      sleep 0.2
    done
  done  
}

copy