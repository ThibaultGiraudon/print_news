rm -rf print_news

# download github
git clone --recursive https://github.com/Thib1708/print_news.git

cd ./print_news
make 
mkdir articles
chmod 751 ./bin/main.sh
cd ..

cp -r print_news "$HOME"

cd "$HOME" || exit
rm -rf temp_____

RC_FILE="$HOME/.zshrc"

# set up the alias
if ! grep "SUBJECT=" "$RC_FILE" &> /dev/null; then
	echo "cmds not present"
	printf "\nexport SUBJECT=\"Apple\"\n
export COUNTRY=\"fr\"\n
export API_KEY=\"\"\n
export CITY=\"Lyon\"\n
alias news=%s/print_news/bin/main.sh" "$HOME" >> "$RC_FILE"
printf "\033[1;32mcmds add\033[0m\n"
printf "\033[48;5;5mopen ~/.zshrc and copy/paste your api_key in export API_KEY=\"\"\033[0m\n"
fi

