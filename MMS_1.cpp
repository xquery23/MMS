#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define dep(i,a,b) for(int i=a;i>=b;--i)
#define debug(x) cerr<<#x<<'='<<x<<'\n'
#define INF 0x3f3f3f3f
template <typename T>inline void read(T& n){
    bool f=true;n=0;char c=getchar();
    for(;!isdigit(c);c=getchar()) if(c=='-') f=false;
    for(; isdigit(c);c=getchar()) n=(n<<1)+(n<<3)+(c^48);
    n=f?n:-n;
}
class Material{
public:
    string place,id,date;       //存放地点 物品编号 采购日期
    int num,price;              //数量 价格
    Material(int _num=0,int _price=0,string _place="",string _id="",string _date=""):num(_num),price(_price),place(_place),id(_id),date(_date){}
    virtual string getType()=0; //纯虚函数获取类型
    virtual string getId()=0;   //纯虚函数获取编号
    virtual string getPlace()=0;//纯虚函数获取存放地点
    virtual string getDate()=0; //纯虚函数获取采购日期
    virtual int getNum()=0;     //纯虚函数获取数量
    virtual int getPrice()=0;   //纯虚函数获取价格
};
class Cameras:public Material{
public:
    int exposure,gain,res,fps;  //曝光 增益 分辨率 帧率
    Cameras(int _num=0,int _price=0,string _place="",string _id="",string _date="",int _exposure=0,int _gain=0,int _res=0,int _fps=0):
        Material(_num,_price,_place,_id,_date),exposure(_exposure),gain(_gain),res(_res),fps(_fps){}
    string getType(){    //重写获取类型函数
        return "相机";
    }
    string getId(){     //重写获取编号函数
        return id;
    }
    string getPlace(){  //重写获取存放地点函数
        return place;
    }
    string getDate(){   //重写获取采购日期函数
        return date;
    }
    int getNum(){       //重写获取数量函数
        return num;
    }
    int getPrice(){     //重写获取价格函数
        return price;
    }
    int getRes(){       //获取分辨率函数
        return res;
    }
    int getFps(){       //获取帧率函数
        return fps;
    }
    int getExposure(){ //获取曝光函数
        return exposure;
    }
    int getGain(){     //获取增益函数
        return gain;
    }


};
class computer:public Material{
public:
    string CPU,GPU;    //CPU GPU
    computer(int _num=0,int _price=0,string _place="",string _id="",string _date="",string _CPU="",string _GPU=""):
        Material(_num,_price,_place,_id,_date),CPU(_CPU),GPU(_GPU){}
    string getType(){   //重写获取类型函数
        return "小电脑";
    }
    string getId(){     //重写获取编号函数
        return id;
    }
    string getPlace(){  //重写获取存放地点函数
        return place;
    }
    string getDate(){   //重写获取采购日期函数
        return date;
    }
    int getNum(){       //重写获取数量函数
        return num;
    }
    int getPrice(){     //重写获取价格函数
        return price;
    }
    string getCPU(){    //获取CPU函数
        return CPU;
    }
    string getGPU(){    //获取GPU函数
        return GPU;
    }
};
class lidar:public Material{
public:
    double range,resolution; //测距范围 分辨率
    lidar(int _num=0,int _price=0,string _place="",string _id="",string _date="",double _range=0,double _resolution=0):
        Material(_num,_price,_place,_id,_date),range(_range),resolution(_resolution){}
    string getType(){   //重写获取类型函数
        return "激光雷达";
    }
    string getId(){     //重写获取编号函数
        return id;
    }
    string getPlace(){  //重写获取存放地点函数
        return place;
    }
    string getDate(){   //重写获取采购日期函数
        return date;
    }
    int getNum(){       //重写获取数量函数
        return num;
    }
    int getPrice(){     //重写获取价格函数
        return price;
    }
    double getRange(){      //获取测距范围函数
        return range;
    }
    double getResolution(){ //获取分辨率函数
        return resolution;
    }
};
class Lens:public Material{
public:
    int focal,len;      //焦距 长度
    Lens(int _num=0,int _price=0,string _place="",string _id="",string _date="",int _focal=0,int _len=0):
        Material(_num,_price,_place,_id,_date),focal(_focal),len(_len){}
    string getType(){   //重写获取类型函数
        return "镜头";
    }
    string getId(){     //重写获取编号函数
        return id;
    }
    string getPlace(){  //重写获取存放地点函数
        return place;
    }
    string getDate(){   //重写获取采购日期函数
        return date;
    }
    int getNum(){       //重写获取数量函数
        return num;
    }
    int getPrice(){     //重写获取价格函数
        return price;
    }
    int getFocal(){     //获取焦距函数
        return focal;
    }
    int getLen(){       //获取长度函数
        return len;
    }
};
class System{
private:
    vector<Material*> mater; //存放物资的指针数组
    int T;
public:
    void Insert(){
        printf("选择存入物品的种类\n");
        printf("输入 0 返回上一步\n");
        printf("输入 1 相机\n");
        printf("输入 2 小电脑\n");
        printf("输入 3 激光雷达\n");
        printf("输入 4 镜头\n");
        printf("------------------------\n");
        read(T);
        if(T==0) return;
        else if(T==1){
            Cameras cam;
            printf("请输入相机的相关信息\n");
            printf("存放地点:\n");cin>>cam.place;
            printf("物品编号:\n");cin>>cam.id;
            printf("采购日期:\n");cin>>cam.date;
            printf("数量:\n");read(cam.num);
            printf("价格:\n");read(cam.price);
            printf("曝光:\n");read(cam.exposure);
            printf("增益:\n");read(cam.gain);
            printf("分辨率:\n");read(cam.res);
            printf("帧率:\n");read(cam.fps);
            printf("信息录入成功\n");
            mater.push_back(new Cameras(cam.num,cam.price,cam.place,cam.id,cam.date,cam.exposure,cam.gain,cam.res,cam.fps));
        }
        else if(T==2){
            computer comp;
            printf("请输入小电脑的相关信息\n");
            printf("存放地点:\n");cin>>comp.place;
            printf("物品编号:\n");cin>>comp.id;
            printf("采购日期:\n");cin>>comp.date;
            printf("数量:\n");read(comp.num);
            printf("价格:\n");read(comp.price);
            printf("CPU:\n");cin>>comp.CPU;
            printf("GPU:\n");cin>>comp.GPU;
            printf("信息录入成功\n");
            mater.push_back(new computer(comp.num,comp.price,comp.place,comp.id,comp.date,comp.CPU,comp.GPU));
        }
        else if(T==3){
            lidar lid;
            printf("请输入激光雷达的相关信息\n");
            printf("存放地点:\n");cin>>lid.place;
            printf("物品编号:\n");cin>>lid.id;
            printf("采购日期:\n");cin>>lid.date;
            printf("数量:\n");read(lid.num);
            printf("价格:\n");read(lid.price);
            printf("测距范围:\n");cin>>lid.range;
            printf("分辨率:\n");cin>>lid.resolution;
            printf("信息录入成功\n");
            mater.push_back(new lidar(lid.num,lid.price,lid.place,lid.id,lid.date,lid.range,lid.resolution));
        }
        else if(T==4){
            Lens len;
            printf("请输入镜头的相关信息\n");
            printf("存放地点:\n");cin>>len.place;
            printf("物品编号:\n");cin>>len.id;
            printf("采购日期:\n");cin>>len.date;
            printf("数量:\n");read(len.num);
            printf("价格:\n");read(len.price);
            printf("焦距:\n");read(len.focal);
            printf("长度:\n");read(len.len);
            printf("信息录入成功\n");
            mater.push_back(new Lens(len.num,len.price,len.place,len.id,len.date,len.focal,len.len));
        }
        else {
            printf("指令输入错误,请重新输入\n");
        }
        
        printf("------------------------\n");
        Insert();
    }
    void Find(){

    }
    void Revise(){

    }
}MMS;
const int N=2e5+10;
signed main(void){
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    printf("欢迎使用 MMS 系统\n");
    printf("------------------------\n");
    int T=0;
    while(true){
        printf("输入 0 退出系统\n");
        printf("输入 1 写入信息\n");
        printf("输入 2 查找物资\n");
        printf("输入 3 修改信息\n");
        printf("------------------------\n");
        read(T);
        if(T==0) break;
        else if(T==1) MMS.Insert();
        else if(T==2) MMS.Find();
        else if(T==3) MMS.Revise();
        else printf("指令输入错误,请重新输入\n");
    }
    return 0;
}
/*

*/