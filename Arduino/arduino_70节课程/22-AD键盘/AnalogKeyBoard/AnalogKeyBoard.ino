/*
 http://shop34791330.taobao.com/ //德飞莱旗舰店
 http://qixingchong.tmall.com/   //七星虫旗舰店
 http://www.doflye.net //德飞莱技术论坛
 http://www.doflye.net/forum-98-1.html //德飞莱论坛arduino版块
 
 AD键盘，通过不同的按键接通不同位置的电阻，产生不同的输出电压，
 把对应的键值传到串口显示

 如果使用LY-51S独立模块开发板，参考以下链接：
 http://www.doflye.net/thread-5295-1-1.html
 
 */

// 引脚定义
const int analogInPin = A0;  // 模拟输入引脚


int sensorValue = 0;        // 电位器电压值
int keyValue =0;

void setup() {
  // 初始化串口参数
  Serial.begin(9600); 
}

void loop() {
  // 读取模拟量值
  sensorValue = analogRead(analogInPin);            
  // 变换数据区间

  //可以比较得到的AD值判断哪个按键按下，比较值建议设置一个区间，比如
  //按键值是600，我们可以判断590<a<610，在这个范围内都可以认为是按键有效。
  // 打印结果到串口监视器
  //这里可以使用arduino自带的串口调试器，也可以使用德飞莱串口调试软件
  //下载地址：http://doflye.net/viewthread.php?tid=4929
  Serial.print("KeyPress is = AD Key " );                       
  Serial.print(keyValue);      
  
  // 等待2ms进行下一个循环
  // 取保能稳定读取下一次数值
  delay(2);                     
}
