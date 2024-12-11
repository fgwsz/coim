#!/bin/bash
# 确保脚本执行目录下存在coim文件夹和coim.hpp文件
if [ ! -d "coim" ]; then
    echo "错误：'coim'文件夹不存在。"
    exit 1
fi
if [ ! -f "coim.hpp" ]; then
    echo "错误：'coim.hpp'文件不存在。"
    exit 1
fi
# 清空coim.hpp文件
> coim.hpp
# 分别查找大写和小写开头的.hpp文件
upper_files=$(find coim -name "[A-Z]*.hpp")
lower_files=$(find coim -name "[a-z]*.hpp")
# 分别对大写和小写开头的文件进行排序
upper_sorted=$(echo "$upper_files" | sort)
lower_sorted=$(echo "$lower_files" | sort)
# 将找到的文件以#include形式添加到coim.hpp中，先大写后小写
echo "#pragma once" >> coim.hpp
# 添加大写开头的文件
while read -r file; do
    echo "#include <$file>" >> coim.hpp
done <<< "$upper_sorted"
# 添加小写开头的文件
while read -r file; do
    echo "#include <$file>" >> coim.hpp
done <<< "$lower_sorted"
echo "操作完成，coim.hpp已更新"
