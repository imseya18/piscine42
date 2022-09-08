ifconfig | grep -o "ether .*$" | sed 's/ether //g' | tr -d ' '
