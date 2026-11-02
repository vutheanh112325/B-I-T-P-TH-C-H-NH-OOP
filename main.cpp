class phuong_tien{
private:
    int ma_xe;
    string loai_xe;
    int gio_vao;
    int tg_do;
public:
    phuong_tien();
    phuong_tien(int ma, string loai, int gio, int tg);
    int lay_ma_xe() const;
    string lay_loai_xe() const;
    double tinh_phi() const;
    void hien_thi() const;
};
class bai_xe{
private:
    int ma_bai;
    char kich_thuoc;
    phuong_tien pt1,pt2,pt3;//dung mang
    bool co1,co2,co3;
public:
    bai_xe();
    bai_xe(int ma, char kt);
    int lay_ma() const;
    bool them(phuong_tien v);
    bool xoa(int ma_xe);
    bool chua(int ma_xe) const;
    void hien_thi() const;
    bool co_loai(string loai, int& dem, double& tong) const;
};
phuong_tien(){
    ma_xe=0;
    loai_xe="";
    gio_vao=0;
    tg_do=0;
}
phuong_tien(int ma, string loai, int gio, int tg){
    ma_xe=ma;
    loai_xe=loai;
    gio_vao=gio;
    tg_do=tg;
}
tinh_phi(){
    double gia=0;
    if(loai_xe=="Car")
        gia=6.00;
    else if(loai_xe=="Motorcycle")
        gia=4.00;
    else if(loai_xe=="Bicycle")
        gia=2.00;
    double chi_phi=0;
    if(tg<=2){
        if(gio>5 && gio<10 || gio>14 && gio<19){
            chi_phi=gia*1.3*tg;
        }
        else{
            chi_phi=gia*0.95*tg;
        }
    }
    else{
        if(gio>5 && gio<10 || gio>14 && gio<19){
            chi_phi=(gia*1.3*2)+(gia*0.9*(tg-2));
        }
        else{
            chi_phi=(gia*0.95*2)+(gia*0.9*(tg-2));
        }
    }
}
hien_thi(){
    cout<<"Ma xe: "<<ma_xe<<endl;
    cout<<"Loai xe: "<<loai_xe<<endl;
    cout<<"Gio vao: "<<gio_vao<<endl;
    cout<<"Thoi gian do: "<<tg_do<,endl;
}
