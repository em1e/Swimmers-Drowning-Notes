LANG_ALL=C ifconfig -a | grep -e 'ether ' | awk '{print $2}'
