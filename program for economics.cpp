#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
void game(){
    cout<<"宗旨:考量市場機制設計的遊戲"<<endl;
    cout<<"你是一個擁有50萬資金的投資客"<<endl;
    cout<<"考慮到現實你不可能在一天之內完成多筆交易(談生意要花時間的)"<<endl;
    cout<<"所以一回合只能買賣一樣東西(各一樣)"<<endl;
    cout<<"==================================================="<<endl;
    cout<<"遊戲規則:你每回何可以選一項商品購買囤積和賣一樣東西，可自己選擇購買數量。"<<endl;
    cout<<"每回合都會有事件發生，去改變一項(或多項)場品價格或甚至你的錢財"<<endl;
    cout<<"你會有原始金錢50萬元，如果你賺到100萬元你贏"<<endl;
    cout<<"買的時候不能超過現有金額!!否則判定輸!!"<<endl;
    cout<<"相反的如果你金錢歸0，則你輸。"<<endl;
    cout<<"若不想買賣，就隨便選一項，但數量為0即可"<<endl;
    cout<<"Hint:注意保有現有資金!!可能發生十萬以上損失"<<endl;
    cout<<"======================================================"<<endl;
    int yourMoney=500000;

    int itemPrice[7]={0,50,100,70,2000,30000,200000};
    //int priceFruit=50,priceOil=100,priceMeat=70,priceClothes=2000,priceComputers=30000,priceCars=200000;
    int chance;
    bool firstRun=true;
    int belong[10];
    int choice;
    int rob;
    int number;
    for(int i=0;i<10;i++){
        belong[i]=0;
    }
    while(true){
        cout<<"____________________________________________________"<<endl;
        cout<<"the money you have now is "<<yourMoney<<endl;
        cout<<"now you have: "<<endl;
        for(int i=1;i<=6;i++){
            if(belong[i]!=0){
                switch(i){
                case 1:
                    cout<<"你有"<<belong[i]<<"個蔬果"<<endl;
                    break;
                case 2:
                    cout<<"你有"<<belong[i]<<"桶石油"<<endl;
                    break;
                case 3:
                   cout<<"你有"<<belong[i]<<"斤牛肉"<<endl;
                   break;
                case 4:
                   cout<<"你有"<<belong[i]<<"件衣服"<<endl;

                    break;
                case 5:
                   cout<<"你有"<<belong[i]<<"台電腦"<<endl;

                    break;
                case 6:
                   cout<<"你有"<<belong[i]<<"台車"<<endl;

                    break;




                }


            }
        }
        cout<<"What things do you want to buy in this turn?"<<endl;
        cout<<"1. 蔬果" <<"價格: "<<itemPrice[1]<<endl;
        cout<<"2. 石油"<<"價格: "<<itemPrice[2]<<endl;
        cout<<"3. 牛肉"<<"價格: "<<itemPrice[3]<<endl;
        cout<<"4. 衣服"<<"價格: "<<itemPrice[4]<<endl;
        cout<<"5. 電腦"<<"價格: "<<itemPrice[5]<<endl;
        cout<<"6. 車子"<<"價格: "<<itemPrice[6]<<endl;
    aaa:
        cout<<"please input a digit representing what do you want to buy according to the list(請輸入1-6)?"<<endl;
        cin>>choice;
        if(choice<1||choice>6){
            cout<<"你輸入錯囉!!"<<endl;
            goto aaa;
        }
        cout<<"你要買幾個(請輸入正整數 0 is OK)?"<<endl;
        cin>>number;
        if(itemPrice[choice]*number>yourMoney){
            cout<<"@@你根本沒錢買這麼多東西!!不要投機取巧唷!!根據規則!!你破產了"<<endl;
            break;
        }
        yourMoney=yourMoney-itemPrice[choice]*number;
        belong[choice]=belong[choice]+number;
        cout<<"now you have: "<<yourMoney<<" dollars"<<endl;

    bbb:
          cout<<endl;
        cout<<endl;
          cout<<"now you have: "<<endl;
        for(int i=1;i<=6;i++){
            if(belong[i]!=0){
                switch(i){
                case 1:
                    cout<<"你有"<<belong[i]<<"個蔬果(1)"<<endl;
                    break;
                case 2:
                    cout<<"你有"<<belong[i]<<"桶石油(2)"<<endl;
                    break;
                case 3:
                   cout<<"你有"<<belong[i]<<"斤牛肉(3)"<<endl;
                   break;
                case 4:
                   cout<<"你有"<<belong[i]<<"件衣服(4)"<<endl;

                    break;
                case 5:
                   cout<<"你有"<<belong[i]<<"台電腦(5)"<<endl;

                    break;
                case 6:
                   cout<<"你有"<<belong[i]<<"台車(6)"<<endl;

                    break;




                }


            }
        }
        cout<<endl;

        cout<<"你要賣什麼"<<endl;
        cin>>choice;
         if(choice<1||choice>6){
            cout<<"你輸入錯囉!!"<<endl;
            goto bbb;
        }
        cout<<"你要賣幾個"<<endl;
        cin>>number;
        if((itemPrice[choice]*number+yourMoney)>=1000000){
            cout<<"你贏了!!!"<<endl;
            break;
        }
        if(number>belong[choice]){
            cout<<"@@看來你是看錯了或不想賣@@!!"<<endl;
        }
        else{
        yourMoney=yourMoney+itemPrice[choice]*number;
        belong[choice]=belong[choice]-number;
        }
        cout<<"now you have: "<<yourMoney<<" dollars"<<endl;
        srand(time(0));
        chance=(rand()%18);

        switch(chance){
        case 0:
            cout<<"颱風來了，，蔬果產量遽減，供給寶劍左移，導致蔬果類價格遽增"<<endl;
            itemPrice[1]=itemPrice[1]*1.5;
            break;
        case 1:
            cout<<"農產過剩，蔬果產量遽減，供給寶劍右移，導致蔬果類價格遽減"<<endl;
            itemPrice[1]=itemPrice[1]*0.7;
            break;
        case 2:
            cout<<"狂牛病發生，消費意願降低，需求寶劍左移，導致牛肉價格遽減"<<endl;
            itemPrice[3]=itemPrice[3]*0.7;
            break;
        case 3:
            cout<<"succeccful advertisement促銷，消費意願增高，需求寶劍右移，導致牛肉價格遽增"<<endl;
            itemPrice[3]=itemPrice[3]*1.5;
            break;
        case 4:
            cout<<"能源危機，供給寶劍左移，導致石油價格遽增"<<endl;
            itemPrice[2]=itemPrice[2]*2.0;
            break;
        case 5:
            cout<<"換季了!!原本的衣服需求遞減!!需求寶劍左移，導致價格劇減"<<endl;
            itemPrice[4]=itemPrice[4]*0.5;
            break;
        case 6:
            cout<<"找到明星代言!!原本的衣服需求遞增!!需求寶劍右移，導致價格劇增"<<endl;
            itemPrice[4]=itemPrice[4]*2;
            break;
        case  7:
            cout<<"電腦和車過時!!導致需求降低，需求寶劍左移，導致價格劇減"<<endl;
            itemPrice[5]=itemPrice[5]*0.7;
            itemPrice[6]=itemPrice[6]*0.7;

            break;
        case 8:
            int aa;
            cout<<"你突然變成經濟學的神!可以決定車子的需求曲線!!(1:左移,2:右移)"<<endl;
            cin>>aa;
            if(aa==1){
                itemPrice[6]=itemPrice[6]*0.9;
            }
            if(aa==2){
                itemPrice[6]=itemPrice[6]*1.8;
            }
            break;
         case 9:
            int bb;
            cout<<"你突然變成經濟學的神!可以決定電腦的需求曲線!!(1:左移,2:右移)"<<endl;
            cin>>bb;
            if(bb==1){
                itemPrice[5]=itemPrice[5]*0.9;
            }
            if(bb==2){
                itemPrice[5]=itemPrice[5]*1.7;
            }
            break;
        case 10:
            cout<<"神看在你有專心上帥氣的譚老師的課，頗為感動，給你十萬元"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"你贏了!!!!"<<endl;
                goto ff;
            }
            break;
        case 11:
            rob=((rand()*123)%250000);
            cout<<"被搶劫了!!威脅你交出"<<rob<<"元"<<endl;
            yourMoney=yourMoney-rob;
            if(yourMoney<0){
                cout<<"你輸了!!!!"<<endl;
                goto ff;
            }
            break;
        case 12:
            cout<<"生質能源技術提升!!替代品價格下降，石油價格下降"<<endl;
            itemPrice[2]=itemPrice[2]*0.7;
            break;
        case 13:
            cout<<"神看在你有專心上帥氣的譚老師的課，頗為感動，給你十萬元"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"你贏了!!!!"<<endl;
                goto ff;
            }
            break;
        case 14:
            cout<<"銀行發放利息!!!"<<endl;
            yourMoney=yourMoney*1.2;
            if(yourMoney>=1000000){
                cout<<"你贏了!!!!"<<endl;
                goto ff;
            }
            break;
        case 15:
            cout<<"神看在你有專心上帥氣的譚老師的課，頗為感動，給你十萬元"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"你贏了!!!!"<<endl;
                goto ff;
            }
            break;
        case 16:
            cout<<"政府來繳稅了!!請繳出20%的金錢"<<endl;
            yourMoney=yourMoney*0.8;
            if(yourMoney<0){
                cout<<"你輸了!!!!"<<endl;
                goto ff;
            }
            break;
        case 17:
            cout<<"發生通貨膨脹!!你原本金錢的價值剩1/2!!"<<endl;
            yourMoney=yourMoney*0.5;
            if(yourMoney<0){
                cout<<"你輸了!!!!"<<endl;
                goto ff;
            }
            break;



        }//switch
        cout<<endl;

        system("pause");
    }//while
    ff:
    system("pause");

}
void doubleWin(){
    double a[2][2];
    int counter=0;

    cout<<"我是一個可以幫你創造雙贏的程式(分析比較利益)"<<endl;
    cout<<"           PeopleA      PeopleB "<<endl;
    cout<<"          ----------------------"<<endl;
    cout<<"         |          |           |"<<endl;
    cout<<" JobA    |    1     |    2      |"<<endl;
    cout<<"         |          |           |"<<endl;
    cout<<"           ----------------------"<<endl;
    cout<<"         |          |           |"<<endl;
    cout<<" JobB    |   3      |    4      |"<<endl;
    cout<<"         |          |           |"<<endl;
    cout<<"          ----------------------"<<endl;
    cout<<"請照上圖順序輸入PeopleA、PeopleB在做JobA和JobB的單位時間產能(請輸入數字)"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            counter++;
            cout<<counter<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"你輸入的矩陣為:"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  "<<"|"<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  "<<"|"<<endl;
    cout<<"---------------------------------------------"<<endl;

    if(a[0][0]>a[1][0]){cout<<"PeopleA在JobA上有絕對優勢";}
    if(a[0][0]<a[1][0]){cout<<"PeopleB在JobA上有絕對優勢";}
    if(a[1][0]>a[1][1]){cout<<"PeopleA在JobB上有絕對優勢";}
    if(a[1][0]<a[1][1]){cout<<"PeopleA在JobB上有絕對優勢";}
    cout<<endl;
    cout<<endl;
    cout<<"好!!做好第一步分析!!要開始共創雙贏了!!!"<<endl;
    cout<<endl;
    cout<<"第一步: 分析這兩個人要做兩個Job的機會成本(指考慮另一個Job)!!!"<<endl<<endl<<endl;
    cout<<"PeopleA做JobA一個單位成本的機會成本為 "<<a[1][0]/a[0][0]<<" 個JobB"<<endl;
    cout<<"PeopleA做JobB一個單位成本的機會成本為 "<<a[0][0]/a[1][0]<<" 個JobA"<<endl;
    cout<<"PeopleB做JobA一個單位成本的機會成本為 "<<a[1][1]/a[0][1]<<" 個JobB"<<endl;
    cout<<"PeopleA做JobB一個單位成本的機會成本為 "<<a[0][1]/a[1][1]<<" 個JobA"<<endl;
    system("pause");
    cout<<endl;

    cout<<"第二步:考慮機會成本，創造雙贏策略!!"<<endl<<endl;
    if((a[1][0]/a[0][0])>(a[1][1]/a[0][1])){
        cout<<"JobA應該給B做，JobB給A做"<<endl;
    }
    else if((a[1][0]/a[0][0])<(a[1][1]/a[0][1])){
        cout<<"JobA應該給A做，JobB給B做"<<endl;

    }
    else {

        cout<<"oops!!居然一樣!!!那就隨機分配吧!!"<<endl;
    }
    cout<<endl;
    cout<<endl;
    system("pause");
}
bool isDigit(char x){
    if(x>='0'&&x<='9')return true;
    return false;
}
void findNash(){
    int a[2][2];
    int b[2][2];
    int counter=0;
    bool isNash=false;
    cout<<"我是一個可以幫你找Nash平衡的程式!!"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|  1,2     |  3,4      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|   5,6    |  7,8      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"請以此圖數字所標記的順序輸入(請輸入整數)"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            counter++;

            cout<<counter<<": ";

            cin>>a[i][j];

            counter++;

            cout<<counter<<": ";
            cin>>b[i][j];


        }
    }
    cout<<"你輸入的矩陣為: "<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"|"<<"   "<<a[0][0]<<","<<b[0][0]<<"   |"<<" "<<a[0][1]<<","<<b[0][1]<<"   |"<<"   "<<endl;
    cout<<"---------------------------------------"<<endl;
     cout<<"|"<<"   "<<a[1][0]<<","<<b[1][0]<<"   |"<<" "<<a[1][1]<<","<<b[1][1]<<"   |"<<"   "<<endl;
    cout<<"----------------------------------------"<<endl;
    if((a[0][0]>=a[0][1])&&(a[0][0]>=a[1][0])&&(b[0][0]>=b[0][1])&&(b[0][0]>=b[1][0])){
        cout<<"左上角是個Nash 平衡"<<endl<<"質為:("<<a[0][0]<<","<<b[0][0]<<")"<<endl;
        isNash=true;
    }
    if((a[0][1]>=a[0][0])&&(a[0][1]>=a[1][1])&&(b[0][1]>=b[0][0])&&(b[0][1]>=b[1][1])){
        cout<<"右上角是個Nash平衡"<<endl<<"質為:("<<a[0][1]<<","<<b[0][1]<<")"<<endl;
        isNash=true;
    }
    if((a[1][0]>=a[0][0])&&(a[1][0]>=a[1][1])&&(b[1][0]>=b[0][0])&&(b[1][0]>=b[1][1])){
         cout<<"左下角是個Nash平衡"<<endl<<"質為:("<<a[1][0]<<","<<b[1][0]<<")"<<endl;
        isNash=true;
    }
    if((a[1][1]>=a[0][1])&&(a[1][1]>=a[1][0])&&(b[1][1]>=b[0][1])&&(b[1][1]>=b[1][0])){
         cout<<"右下角是個Nash平衡"<<endl<<"質為:("<<a[1][1]<<","<<b[1][1]<<")"<<endl;
        isNash=true;
    }
    if(!isNash){
        cout<<"少唬我!!根本沒有Nash平衡"<<endl;
    }
    system("pause");

}
void test(){
    char ans;
    cout<<"請問那一點為Nash平衡?"<<endl;

     cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|  1,0     |  0,1      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|   0,1    |  1,0      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"1. 左上角 2.右上角 3.左下角 4.右下角 5.根本沒有Nash平衡"<<endl;
inputFirst:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
    if(!isDigit(ans)){
                cout<<"不要亂打好嗎?請打數字!!!請重新輸入!!"<<endl;
                goto inputFirst;
            }
    if(ans=='5'){cout<<"恭喜!!答對了!!繼續下一題"<<endl;}
    if(ans!='5'){cout<<"答錯了~~下次加油!!再看看講義吧~~"<<endl;return;}
    cout<<"========================================================"<<endl;
    cout<<"請問完全替代無異曲線，老師上課又稱為什麼無異曲線??"<<endl;
    cout<<"1. 天才型 2.鄉愿型 3.沒用型 4.最強的 5.龜毛型"<<endl;
    inputSecond:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"不要亂打好嗎?請打數字!!!請重新輸入!!"<<endl;
                goto inputSecond;
            }
    if(ans=='2'){cout<<"恭喜!!答對了!!繼續下一題"<<endl;}
    if(ans!='2'){cout<<"答錯了~~下次加油!!再看看講義吧~~"<<endl;return;}
    cout<<"========================================================"<<endl;
    cout<<"請問當你所得增加時就想買越多的財貨叫做??"<<endl;
    cout<<"1. 正常財(normal good) 2.中性財(neutral good) 3.劣等財(inferior good) 4.最佳財(best good) 5.以上皆非"<<endl;
    inputThird:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"不要亂打好嗎?請打數字!!!請重新輸入!!"<<endl;
                goto inputThird;
            }

    if(ans=='1'){cout<<"恭喜!!答對了!!繼續下一題"<<endl;}

    if(ans!='1'){cout<<"答錯了~~下次加油!!再看看講義吧~~"<<endl;return;}


    cout<<"========================================================"<<endl;
    cout<<"下圖為何種無異曲線?"<<endl;
    cout<<"^                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"----------------------"<<endl;
    cout<<"附註:遞增方向向上"<<endl;
    cout<<" 1.龜毛型 2.雅痞型 3.完全替代 4.柳下惠型 5.以上皆非"<<endl;
    inputFourth:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"不要亂打好嗎?請打數字!!!請重新輸入!!"<<endl;
                goto inputFourth;
            }
    if(ans=='4'){cout<<"恭喜!你已經全部過關"<<endl;
            cout<<"_____________"<<endl;
            cout<<"|   .   .   |"<<endl;
            cout<<"|    ____   |"<<endl;
            cout<<"|    ";
            cout<<"\\";
            cout<<"__/   |"<<endl;
            cout<<"|__________ | "<<endl;


    }
    if(ans!='4'){cout<<"答錯了~~下次加油!!再看看講義吧~~"<<endl;return;}
    system("pause");
}
int main(){
int play;
while(true){

    cout<<"此程式有題庫還有找Nash平衡點的程式和製作雙贏的程式"<<endl;
    cout<<"請照指示操作: "<<endl;

    int input;
reInput:
    //system("pause");

    cout<<"請問你要??"<<endl;
    cout<<"1. 找nash平衡"<<endl;
    cout<<"2. 寫題目"<<endl;
    cout<<"3. 找雙贏策略"<<endl;
    cout<<"4. 玩個小遊戲!!!"<<endl;
    cin>>input;

    if(input==1)
    {
        findNash();
        goto finish;
    }
    if(input==2)
    {
        test();
        goto finish;
    }
     if(input==3)
    {
        doubleWin();
        goto finish;
    }
     if(input==4)
    {
        game();
        goto finish;
    }
    else if(input!=1&&input!=2&&input!=3&&input!=4){
        cout<<"拜託!!不要亂打好嗎!!請重新輸入!!"<<endl;
        goto finish;
    }
finish:
    cout<<"Do you want to play again??(Yes:1,No:0)"<<endl;
    cin>>play;
    if(play==1){
      continue;
    }
    else{
        break;
    }




}

 cout<<endl;
    cout<<endl;
    cout<<"Bye"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"__________"<<endl;
    cout<<"|        |"<<endl;
    cout<<"|  Q  Q  |"<<endl;
    cout<<"|        |"<<endl;
    cout<<"|   ---  |"<<endl;
    cout<<"----------"<<endl;


system("pause");

return 0;
}
