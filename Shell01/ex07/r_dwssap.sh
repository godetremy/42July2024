FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | sed -n '2~2p' |  cut -d : -f1 | rev | sort -r | sed "$FT_LINE1 , $FT_LINE2 p; ~q" | sed -z 's/\n/,/g'
