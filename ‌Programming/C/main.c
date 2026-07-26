//单行注释：// 我是注释
//多行注释：/* 我是注释 */

/*
#include<stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("%d\n",23+43);//%d说明后面有一个整数要输出在这个位置上
    printf("23+43=%d\n",23+43);

    return 0;
}
*/








/*变量定义

#include<stdio.h>

int main()
{
    int price =0;//定义了一个变量，变量的名字是price，类型是int，初始值是0
    printf("请输入金额：");
    scanf("%d",&price);//要求scanf函数读入下一个整数，读到的结果赋值给变量price
    int change =100 - price;//固定不变的数，是常数。直接写在程序里我们称作直接量(literal)
    printf("找你%d元。\n",change);
    
    return 0;
}
*/






/*变量赋值与初始化

#include<stdio.h>

int main()
{
    //int i;
    int i=0;//变量初始化:<类型名称> <变量名称> = <初始化>
    int j;
    j=i+10;
    printf("%d\n",j);
    
    return 0;
}    
*/






/*变量输入

#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a, &b);//关于scaf,引号里面是要你输入的，输出0可能是出错了
    scanf("%d,%d", &a, &b);
    scanf("price%d %d", &a, &b);
    printf("%d %d\n",a, b);
    
    return 0;
}    
*/






/*常量vs变量

#include<stdio.h>

int main()
{
    int price =0;
    printf("请输入金额：");
    scanf("%d",&price);
    int change =100 - price;
    printf("找你%d元。\n",change);

    const int AMOUNT =100;
    //const是一个修饰符，加在int的前面，用来给变量加上一个const(不变的)的属性，表示这个变量的值一旦初始化，就不能再修改
    int price1 =0;
    printf("请输入金额：");
    scanf("%d",&price1);
    int change1 =AMOUNT - price1;
    printf("找你%d元。\n",change1);

    int amount =100;
    int price2 =0;
    printf("请输入金额：");
    scanf("%d",&price2);
    printf("请输入票面(1,5,10,20,50,100):");
    scanf("%d", &amount);
    int change2 =amount - price2;
    printf("找你%d元。\n",change2);
    
    return 0;
}    
*/






/*用scanf去读两个甚至更多的变量，在格式字符串里面多放%d

#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("请输入两个整数：");
    scanf("%d %d", &a , &b);
    printf("%d + %d = %d\n", a, b , a+b);
    
    return 0;
}    
*/






/*浮点数

#include<stdio.h>

int main()
{
    int foot,inch;
    printf("请输入你的身高的是英尺和英寸，如'5 7'表示5英尺7英寸:");
    scanf("%d %d",&foot,&inch);
    printf("你的身高是%f米\n",((foot+inch/12.0)*0.3048));

    double foot1,inch1;//除了double表示双精度浮点数,还有float表示单精度浮点数
    printf("请输入你的身高的是英尺和英寸，如'5 7'表示5英尺7英寸:");
    scanf("%lf %lf",&foot1,&inch1);
    printf("你的身高是%f米\n",((foot1+inch1/12)*0.3048));
    
    return 0;
}    
    */
    //整数        int    printf（“%d”,...） scanf("%d",...)
    //带小数点的数 double  printf（“%f”,...) scanf("%lf",...)







/*表达式

#include<stdio.h>

int main()
{
    int hour1 , minute1 ;
    int hour2 , minute2 ;
    printf("请输入时间：");
    scanf("%d %d",&hour1 ,&minute1);
    scanf("%d %d",&hour2 ,&minute2);
    int t1 = hour1 *60 + minute1 ;
    int t2 = hour2 *60 + minute2 ;
    int t = t2 - t1 ;
    printf("时间差是%d小时%d分钟\n",t/60,t%60);
    
    return 0;
}
    */







/*运算符优先级

#include<stdio.h>

int main()
{
    double a,b,c;
    printf("请输入两个整数：");
    scanf("%lf %lf", &a,&b);
    c=(a+b)/2.0;
    printf("这两个数的平均值是：%f\n",c);
    
    return 0;
}
    */







/*交换变量

#include<stdio.h>

int main()
{
    int a=5,b=6,t;
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);
    
    return 0;
}
*/








/*复合赋值和递增递减

#include<stdio.h>

int main()
{
    int total=1; 
    printf("total += 5 是%d\n",total += 5);// += -= *= /= %=
    printf("total=%d\n",total);
    printf("total *= 5 是%d\n",total *= 5);
    int a;
    a=10;
    printf("a++=%d\n",a++);
    printf("a=%d\n",a);
    printf("++a=%d\n",++a);
    printf("a=%d\n",a);
    
    return 0;
}
*/
    



//做判断
/*
#include<stdio.h>

int main()
{
    int hour1,minute1;
    int hour2,minute2;
    
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    
    int ih=hour2-hour1;
    int im=minute2-minute1;
    if ( im<0 ){
        im=60+im;
        ih --;
    }

    printf("时间差是%d小时%d分\n",ih,im);

    return 0;
}
*/





//判断的条件 = = 相等，!= 不相等
/*
#include<stdio.h>

int main()
{
    printf("%d\n", 5==3);
    printf("%d\n", 5>3);
    printf("%d\n", 5<=3);
    printf("%d\n", 7>=3+4);

    return 0;
}
*/




//找零计算器
/*
#include<stdio.h>

int main()
{
    int price=0,bill=0;
    printf("请输入你的票面：\n");
    scanf("%d",&bill);
    printf("请输入你的金额：\n");
    scanf("%d",&price);

    if (bill>price){
        printf("找你%d元\n",bill-price);
    }

    return 0;
}

*/





//否则的话
/*
#include<stdio.h>

int main()
{
    int price=0,bill=0;
    printf("请输入你的票面：\n");
    scanf("%d",&bill);
    printf("请输入你的金额：\n");
    scanf("%d",&price);

    if (bill>price){
        printf("找你%d元\n",bill-price);
    }else{
        printf("你的钱不够\n");
    }

    return 0;
}
*/



//if语句再探

/* 
#include<stdio.h>

int main()
{
    const double RATE = 8.25;
    const int STANDARD = 40 ;
    double pay = 0.0;
    int hours;

    printf("请输入工作的小时数：");
    scanf("%d",&hours);
    printf("\n");
    if (hours>STANDARD)
        pay=STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
    else
        pay=hours*RATE;
    printf("应付工资：%f\n",pay);

    return 0;
}
    */
/*
#include<stdio.h>

int main()
{
    const int PASS=60;
    int score;

    printf("请输入成绩：");
    scanf("%d",&score);\

    printf("你输入的成绩是%d\n",score);
    if (score<PASS)
        printf("很遗憾，这个成绩没有及格");
    else
        printf("祝贺你，这个成绩及格了");
        printf("再见\n");
    return 0;
}
*/






//嵌套的if-else
/*
#include<stdio.h>

int main()
{
    int a=0,c=0,b=0;
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    if (a>b){
        if (a>c){
            max=a;
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }
    printf("max=%d",max);

    return 0;
}
*/





//级联的if-else
/*
#include<stdio.h>

int main()
{
    int x=0,f=0;
    scanf("%d",&x);

    if (x<0){
        f=-1;
    }else if(x==0){
        f=0;
    }else{
        f=2*x;
    }

    printf("f(x)=%d",f);

    return 0;
}
    */





//多路分支switch-case

#include<stdio.h>

int main()
{
    int x=0;
    scanf("%d",&x);

    switch (x){
        case 1:
            printf("你好");
            break;
        case 2:
            printf("早上好");
            break;
        case 3:
            printf("下午好");
            break;
        case 4:
            printf("晚上好");
            break;
        default:
            printf("啊，什么啊"); 
    }

    return 0;
}