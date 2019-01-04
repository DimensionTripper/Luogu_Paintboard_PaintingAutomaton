# **Luogu Paintboard Painting Automaton**

## 使用

请在`cookies.txt`中用以下格式存放cookie
``` plain
UM_distinctid __client_id _uid
UM_distinctid __client_id _uid
...
```
在源码中可以指定图片的左上角坐标，修改`base_x`和`base_y`即可

## 关于坐标的获取方式

进入[https://www.luogu.org/paintBoard](https://www.luogu.org/paintBoard)，按下`F12`后进入`Network`下，用鼠标点击画板上任意一个像素块，在`F12`窗口下新出现的`paint`项中即可找到该像素块的坐标

## 关于图片
请首先将图片转换为`ppm`格式，**建议使用GIMP**

然后修改`Magic.cpp`中的读入文件名就好了

想在开始绘画之前查看效果的话请使用`Inverse_Magic.cpp`

P.S. `Magic`中使用的是带权方差找最接近颜色的算法，想修改色调可以随便修改权值

请使用`python3`，并确保安装`requests`库和`colorama`库

## 待解决Bug

* 有时会发生未知错误导致无法进行正常的图片维护，具体表现为报错`list out of range`导致程序停止运行

## Q&A

Q: 为什么不把这些东西都写进参数里呢？

A: 没时间，肝作业去了
