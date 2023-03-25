#!/bin/bash

test() {
	echo "$1"
	$1
}

test_xargs() {
	echo "./ft_sed $1"
	echo "$1" | xargs ./ft_sed
}

echo "[Error Cases]:"
test "./ft_sed"
test "./ft_sed foo"
test "./ft_sed foo bar"
test "./ft_sed foo bar foobar"
test_xargs "tests/en.txt '' foo"

echo

echo "[Success Cases]:"
test_xargs "tests/en.txt replace '<subst>'"
diff --color tests/en.txt tests/en.txt.replace

test "./ft_sed tests/ja.txt 置換 変更"
diff --color tests/ja.txt tests/ja.txt.replace
