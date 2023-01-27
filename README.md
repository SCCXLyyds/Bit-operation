# Bit-operation
Data structure and algorithm
算法1
(lowbit) O(nlogn)O(nlogn)
使用lowbit操作，进行，每次lowbit操作截取一个数字最后一个1后面的所有位，每次减去lowbit得到的数字，直到数字减到0，就得到了最终1的个数，
lowbit原理
根据计算机负数表示的特点，如一个数字原码是10001000，他的负数表示形势是补码，就是反码+1，反码是01110111，加一则是01111000，二者按位与得到了1000，就是我们想要的lowbit操作
算法2
(暴力枚举) O(nlongn)O(nlongn)
blablabla
时间复杂度分析：blablabla
思路
对于每个数字a，a&1得到了该数字的最后一位，之后将a右移一位，直到位0，就得到了1的个数

![image](https://user-images.githubusercontent.com/121226086/214992090-b860b55f-94a1-4102-8aed-94da844fa81a.png)
