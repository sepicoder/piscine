ldapsearch -Q sn="*bon*" | grep "sn: " | awk '{print $2}' | wc -l | bc
