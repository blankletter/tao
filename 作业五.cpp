#define _CRT_SECURE_NO_WARNINGS
//选作题
//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
// 2021-11-14
#include <stdio.h>
#include<math.h>
struct info 
{
    int len;
    int wid;
};
int main()
{
    struct info array[20];
    int x, y,i=0;
    char b[20],a;
    while (1)
    {
        scanf("%s", b);
        a = getchar();
        sscanf(b, "%dx%d",&array[i].len, &array[i].wid);
        i++;
        if (a == '\n')
        {break;}
    }
    scanf("%d %d", &x, &y);
    int min_ = fabs(x-array[0].len)+fabs(y-array[0].wid);
    int num = 0;
    for (int j = 1; j < i; j++)
    {if (fabs(x - array[i].len) + fabs(y - array[i].wid) < min_)
        {
            min_ = fabs(x - array[i].len) + fabs(y - array[i].wid);
            num = i;
    }}
    printf("选中的分辨率是%dx%d\n",array[num].len,array[num].wid);
    return 0;
}
