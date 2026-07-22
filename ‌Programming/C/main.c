#include<stdio.h>
//单行注释：// 我是注释
//多行注释：/* 我是注释 */
int main()
{
    /*
    printf("Hello World!\n");
    printf("%d\n",23+43);//%d说明后面有一个整数要输出在这个位置上
    printf("23+43=%d\n",23+43);
    */

    /*变量定义
    int price =0;//定义了一个变量，变量的名字是price，类型是int，初始值是0
    printf("请输入金额：");
    scanf("%d",&price);//要求scanf函数读入下一个整数，读到的结果赋值给变量price
    int change =100 - price;//固定不变的数，是常数。直接写在程序里我们称作直接量(literal)
    printf("找你%d元。\n",change);
    */

    /*变量赋值与初始化
    //int i;
    int i=0;//变量初始化:<类型名称> <变量名称> = <初始化>
    int j;
    j=i+10;
    printf("%d\n",j);
    */

    /*变量输入
    int a = 0;
    int b = 0;
    scanf("%d %d",&a, &b);//关于scaf,引号里面是要你输入的，输出0可能是出错了
    scanf("%d,%d", &a, &b);
    scanf("price%d %d", &a, &b);
    printf("%d %d\n",a, b);
    */

    /*常量vs变量
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
    */

    /*
    //用scanf去读两个甚至更多的变量，在格式字符串里面多放%d
    int a;
    int b;
    printf("请输入两个整数：");
    scanf("%d %d", &a , &b);
    printf("%d + %d = %d\n", a, b , a+b);
    */

    /*浮点数
    int foot,inch;
    printf("请输入你的身高的是英尺和英寸，如'5 7'表示5英尺7英寸:");
    scanf("%d %d",&foot,&inch);
    printf("你的身高是%f米\n",((foot+inch/12.0)*0.3048));

    double foot1,inch1;//除了double表示双精度浮点数,还有float表示单精度浮点数
    printf("请输入你的身高的是英尺和英寸，如'5 7'表示5英尺7英寸:");
    scanf("%lf %lf",&foot1,&inch1);
    printf("你的身高是%f米\n",((foot1+inch1/12)*0.3048));
    */
    //整数        int    printf（“%d”,...） scanf("%d",...)
    //带小数点的数 double  printf（“%f”,...) scanf("%lf",...)

    //表达式
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
