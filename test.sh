clang++ -std=c++98 -Wall -Wextra -Werror tests/main_intra.cpp -o app
./app 777
# time ./app 777
rm -r app


clang++ -std=c++98 -Wall -Wextra -Werror tests/ft_main.cpp -o app
./app
# time ./app
rm -r app


clang++ -std=c++98 -Wall -Wextra -Werror tests/speed_test.cpp -o app
./app
rm -r app

