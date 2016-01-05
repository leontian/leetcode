# Read from the file words.txt and output the word frequency list to stdout.
cat words.txt | tr ' ' '\n' | sort | uniq -c | sort -r | awk '{if ($2 != "") print $2" "$1}'

