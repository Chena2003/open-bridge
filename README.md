### 开启桥

#### 项目简介

市面上，常见的开启桥类型右四种，立转式，平转式，提升式和折叠式。样式如下图所示：

![1](http://rdh7dk38q.hn-bkt.clouddn.com/img/1.png)

我们小组经过思考和讨论决定采取立转式的开启桥方案，利用 arduino 单片机去驱动舵机运动，从而抬升桥面，开启桥。

#### 模型：

我们采用Fusion 360构建开启桥模型。模型如下：

![2](http://rdh7dk38q.hn-bkt.clouddn.com/img/2.png)

再用3D切割，拼接起来。实物图如下：

![3](http://rdh7dk38q.hn-bkt.clouddn.com/img/3.png)

#### 代码

使用Servo库中的attach，write等方法完成代码。

![4](http://rdh7dk38q.hn-bkt.clouddn.com/img/4.png)

#### 实物演示

演示视频可见：https://www.aliyundrive.com/s/CsTunYX1mzq
