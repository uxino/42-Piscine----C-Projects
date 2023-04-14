cat /etc/passwd | sed '/^#/d' | awk 'NR%2==0 {print $1}' | rev | sort -r | awk -v line1="$FT_LINE1" -v line2="$FT_LINE2" 'NR>=line1 && NR<=line2' | paste -sd, - | sed 's/,$/./'
