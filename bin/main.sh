#!/bin/bash

curl -s fr.wttr.in/$CITY\?tpq > ~/todays_news

curl https://newsapi.org/v2/everything -G -d q=$SUBJECT -d sortBy=popularity -d apiKey=$API_KEY> ~/print_news/articles/$SUBJECT

curl https://newsapi.org/v2/top-headlines -G -d country=$COUNTRY -d sortBy=popularity -d apiKey=$API_KEY > ~/print_news/articles/$COUNTRY

cd ~

./print_news/print_news ./print_news/articles/$SUBJECT ./print_news/articles/$COUNTRY >> ~/todays_news

cat ~/todays_news 2>&1 | less
