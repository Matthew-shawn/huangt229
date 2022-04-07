# Kinetic analysis of elastic neutrino-nucleus scattering

这个分析主要目的是求出核子的反冲能量$E_{r}$(the kinetic energy of nucleus)[^1]

## Kinetic process image

![n-nS](https://user-images.githubusercontent.com/61552940/162331057-200e9fd4-0431-460b-8eb8-b7d2c309efc1.png)


以上就是动力学过程简图[^2][^3]

## Physical analysis

### Conservation of momentum

- 由纵方向上的动量守恒，可消除$\varphi$这个变量

$$
\begin{equation}
P_{A}sin{\theta}=P^{\prime}_{\nu}sin{\varphi} \Rightarrow sin\varphi = \frac{P_{A}}{P^{\prime}_{\nu}}sin\theta 
\end{equation}
$$

- 由横方向上的动量守恒，有

$$
\begin{equation}
P_{\nu} = P_{A}·cos\theta + P^{\prime}_{\nu}·sin\varphi 

\end{equation}
$$
利用[(1)](###Conservation of momentum)式和简单的三角函数关系，我们可以得到下式
$$
P_{\nu}^{2}+P_{A}^{2}-2P_{\nu}P_{A}cos{\theta}=P^{\prime2}_{\nu}
$$
由此我们得到了$P_{A}$和$P^{\prime}_{\nu}$及$P_{\nu}$的关系式。下面我将利用能量守恒定律，并最终得到$E_{r}$关于$P_{\nu}、M、cos\theta$的关系式。[^4]

### Conservation of energy

$$
\begin{equation}
P_{\nu}+M=P^{\prime}_{\nu}+\sqrt{M^{2}+P^{2}_{A}} 
\end{equation}
$$

经过化简和移项，可以得到
$$
\begin{equation}
P^{\prime}_{\nu}=\frac{p_{\nu}^{2}+MP_{\nu}-P_{A}P_{\nu}·cos\theta}{P_{\nu}+M} 
\end{equation}
$$
与[(3)](###Conservation of momentum)式联立解有
$$
\begin{equation}
\begin{aligned}
P_{A}^{2}((P_{\nu}+M)^{2}-P_{\nu}^{2}·cos^{2}\theta) &= 2P_{\nu}P_{A}M(M+P_{\nu})·cos\theta \\
P_{A}&=\frac{2MP_{\nu}(M+P_{\nu})·cos\theta}{(M+P_{\nu})^{2}-P_{\nu}^{2}·cos^{2}\theta} 
\end{aligned}
\end{equation}
$$

又由
$$
E_{r}=\frac{P_{A}^{2}}{2M}
$$
和
$$
E_{\nu}=\sqrt{m_{\nu}^2+P_{\nu}^{2}}\approx P_{\nu}
$$
$$
(M+P_{\nu})^{2}\approx(M+P_{\nu})^{2}-P_{\nu}^{2}·cos^{2}\theta
$$



有
$$
E_{r}\approx \frac{2ME_{\nu}^{2}cos^{2}\theta}{(M+E_{\nu})^{2}-E_{\nu}^{2}cos^2\theta}
$$


## Result and discussion

从$E_{r}$的表达式里面我们可以看到

- 当$cos\theta = 1$时，我们可以取到$E_{r}$最大值
  $$
  E_{r}^{max}=\frac{2E_{\nu}^{2}}{2E_{\nu}+M}
  $$
  一般情况下，当我们研究反应堆中微子或者散裂中子源轰击标靶产生的中微子时，$M\gg E_{\nu}$
  $$
  E_{r}\approx\frac{2E_{\nu}^{2}}{M}
  $$

- 当$cos\theta = 0$时，$E_{r}$取最小值为0

- 而对于给定反冲能量$E_{r}$的过程，对应的最小射入中微子能量$E_{\nu}^{min}$为
  $$
  \begin{equation}
  E_{\nu}^{\min }\left(E_{r}\right)=\frac{E_{r}}{2}\left(1+\sqrt{1+\frac{2 M}{E_{r}}}\right)=\frac{E_{r}+\left|\vec{P}_{A}\right|}{2} \simeq\left\{\begin{array}{cll}
  \sqrt{M E_{r} / 2} & \text { for } \quad E_{r} \ll M \\
  E_{r}+M / 2 & \text { for } \quad E_{r} \gg M
  \end{array}\right.
  \end{equation}
  $$


[^1]:We adopt natural unit here.
[^2]:其中$E_{A}=\sqrt{M^{2}+P_{A}^{2}}$​，$M$​为核子质量
[^3]:这里中微子质量远小于我们分析的任一具有质量量纲的量，故此处分析忽略中微子质量$m_{\nu}$​​
[^4]:这里我们会最后发现最后是和$E_{\nu}、M、cos\theta$的关系

