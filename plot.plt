set yrange[-1:1]
set xlabel "{試行回数}"

plot for [a=1:2] "process.dat" using 0:a title "W".(a) with linespoints

# 出力フォーマットとオプションの指定
set terminal pdf
# 出力ファイル名の指定
set output "plot.pdf"
# グラフ再描画
replot

# フォーマットと出力のリセット
set output
set terminal win
