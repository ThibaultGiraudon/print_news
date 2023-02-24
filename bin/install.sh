#!/bin/bash

cd "$HOME" || exit

mkdir temp_____

cd temp_____ || exit
rm -rf print_news

# download github
git clone --recursive https://github.com/Thib1708/print_news.git

cd ./print_news
make 
mkdir articles
cd ..

cp -r print_news "$HOME"

cd "$HOME" || exit
rm -rf temp_____
if grep "zsh" "$SHELL"; then
	RC_FILE="$HOME/.zshrc"
fi
else 
	RC_FILE="$HOME/.bashrc"
fi

echo "try to add alias in file: $RC_FILE"

# set up the alias
if ! grep "SUBJECT=" "$RC_FILE" &> /dev/null; then
	echo "cmds not present"
	printf "\nexport SUBJECT=\"Apple\"\n
export COUNTRY=\"fr\"\n
export API_KEY=\"\"\n
export CITY=\"Lyon\"\n\n
curl -s fr.wttr.in/\$CITY\\\?tpq > ~/todays_news\n\n
curl https://newsapi.org/v2/everything -G -d q=\$SUBJECT -d sortBy=popularity -d apiKey=\$API_KEY> ~/print_news/articles/\$SUBJECT\n\n
curl https://newsapi.org/v2/top-headlines -G -d country=\$COUNTRY -d sortBy=popularity -d apiKey=\$API_KEY > ~/print_news/articles/\$COUNTRY\n
cd ~\n
./print_news/print_news ./print_news/articles/\$SUBJECT ./print_news/articles/\$COUNTRY >> ~/todays_news\n
cat ~/todays_news |& less" "$HOME" >> "$RC_FILE"
printf "\033[1;32mcmds add\033[0m\n"
printf "\033[48;5;5mopen ~/.zshrc and copy/paste your api_key in export API_KEY=\"\"\033[0m\n"
fi
