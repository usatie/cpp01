#!/bin/bash

./ft_sed tests/ja.txt 置換 変更
diff --color tests/ja.txt tests/ja.txt.replace

./ft_sed tests/en.txt replace "<subst>"
diff --color tests/en.txt tests/en.txt.replace
