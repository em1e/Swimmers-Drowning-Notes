#!bin/bash

t=0
while [ $t -lt 900 ]
do
	clear
	echo "The 15 minute timer in on."
	echo "Time has been running for" $t "seconds out of 900."
	echo "Using {norminette -R CheckForbiddenSourceHeader}"
	norminette -R CheckForbiddenSourceHeader
	let t+=5
	sleep 5
	if [ $t -eq 900 ]
	then
		clear
		echo "Times up! Not checking for norminette until restarted."
		echo "Continue with {bash /Users/vkettune/Desktop/Handy/norminetteCheck.sh}"	
		norminette -R CheckForbiddenSourceHeader
	fi
done
