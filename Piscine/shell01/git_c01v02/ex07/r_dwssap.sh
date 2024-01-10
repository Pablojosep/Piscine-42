cat /etc/passwd | awk -F ":x:" '{print $1}' | awk 'NR % 2 == 0'| sort -r | tr '\n' ',' | sed 's/,$/./'


