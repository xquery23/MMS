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
public:
    
    void Insert(){

    }
    void Find(){

    }
    void Revise(){

    }
}MMS;
const int N=2e5+10;
int ans,n,T;
signed main(void){
//  freopen(".in","r",stdin);
//  freopen(".out","w",stdout);
    printf("欢迎使用 MMS 系统\n");
    printf("------------------------\n");
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
        else MMS.Revise();
    }
    return 0;
}
/*

*/