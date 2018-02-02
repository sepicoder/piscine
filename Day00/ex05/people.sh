ldapsearch -x -LLL "(uid=z*)" | grep "cn:" | sort -r -f | cut -c5-
