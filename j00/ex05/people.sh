ldapsearch -Q "uid=z*" | grep cn: | cut -d : -f2 | sort | sort -r
