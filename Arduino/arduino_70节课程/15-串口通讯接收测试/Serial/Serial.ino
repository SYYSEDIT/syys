/*
 http://shop34791330.taobao.com/ //德飞莱旗舰店
 http://qixingchong.tmall.com/   //七星虫旗舰店
 http://www.doflye.net //德飞莱技术论坛
 http://www.doflye.net/forum-98-1.html //德飞莱论坛arduino版块
 
 串口通讯简单测试

 如果使用LY-51S独立模块开发板，参考以下链接：
 http://www.doflye.net/viewthread.php?tid=5353&extra=
 
 */

// 引脚定义
const int analogInPin = A0;  // 模拟输入引脚
const int analogOutPin = 9; //  PWM输出引脚

int sensorValue = 0;        // 电位器电压值
int outputValue = 0;        // 模拟量输出值（PWM）

void setup() {
  // 初始化串口参数
  Serial.begin(9600); 
}

void loop() {
         

  // 打印结果到串口监视器
  //这里可以使用arduino自带的串口调试器，也可以使用德飞莱串口调试软件
  //下载地址：http://doflye.net/viewthread.php?tid=4929
  Serial.print("1.www.doflye.net\n" );                       
       
  Serial.print("2.thanks for using mcu-box\n");      


  // 等待2s进行下一个循环
  // 取保能稳定读取下一次数值
  delay(2000);                     
}
