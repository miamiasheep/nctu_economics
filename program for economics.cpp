#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
void game(){
    cout<<"�v��:�Ҷq��������]�p���C��"<<endl;
    cout<<"�A�O�@�Ӿ֦�50�U���������"<<endl;
    cout<<"�Ҽ{��{��A���i��b�@�Ѥ��������h�����(�ͥͷN�n��ɶ���)"<<endl;
    cout<<"�ҥH�@�^�X�u��R��@�˪F��(�U�@��)"<<endl;
    cout<<"==================================================="<<endl;
    cout<<"�C���W�h:�A�C�^��i�H��@���ӫ~�ʶR�y�n�M��@�˪F��A�i�ۤv����ʶR�ƶq�C"<<endl;
    cout<<"�C�^�X���|���ƥ�o�͡A�h���ܤ@��(�Φh��)���~����άƦܧA�����]"<<endl;
    cout<<"�A�|����l����50�U���A�p�G�A�Ȩ�100�U���AĹ"<<endl;
    cout<<"�R���ɭԤ���W�L�{�����B!!�_�h�P�w��!!"<<endl;
    cout<<"�ۤϪ��p�G�A�����k0�A�h�A��C"<<endl;
    cout<<"�Y���Q�R��A�N�H�K��@���A���ƶq��0�Y�i"<<endl;
    cout<<"Hint:�`�N�O���{�����!!�i��o�ͤQ�U�H�W�l��"<<endl;
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
                    cout<<"�A��"<<belong[i]<<"�ӽ��G"<<endl;
                    break;
                case 2:
                    cout<<"�A��"<<belong[i]<<"��۪o"<<endl;
                    break;
                case 3:
                   cout<<"�A��"<<belong[i]<<"�����"<<endl;
                   break;
                case 4:
                   cout<<"�A��"<<belong[i]<<"���A"<<endl;

                    break;
                case 5:
                   cout<<"�A��"<<belong[i]<<"�x�q��"<<endl;

                    break;
                case 6:
                   cout<<"�A��"<<belong[i]<<"�x��"<<endl;

                    break;




                }


            }
        }
        cout<<"What things do you want to buy in this turn?"<<endl;
        cout<<"1. ���G" <<"����: "<<itemPrice[1]<<endl;
        cout<<"2. �۪o"<<"����: "<<itemPrice[2]<<endl;
        cout<<"3. ����"<<"����: "<<itemPrice[3]<<endl;
        cout<<"4. ��A"<<"����: "<<itemPrice[4]<<endl;
        cout<<"5. �q��"<<"����: "<<itemPrice[5]<<endl;
        cout<<"6. ���l"<<"����: "<<itemPrice[6]<<endl;
    aaa:
        cout<<"please input a digit representing what do you want to buy according to the list(�п�J1-6)?"<<endl;
        cin>>choice;
        if(choice<1||choice>6){
            cout<<"�A��J���o!!"<<endl;
            goto aaa;
        }
        cout<<"�A�n�R�X��(�п�J����� 0 is OK)?"<<endl;
        cin>>number;
        if(itemPrice[choice]*number>yourMoney){
            cout<<"@@�A�ڥ��S���R�o��h�F��!!���n���������!!�ھڳW�h!!�A�}���F"<<endl;
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
                    cout<<"�A��"<<belong[i]<<"�ӽ��G(1)"<<endl;
                    break;
                case 2:
                    cout<<"�A��"<<belong[i]<<"��۪o(2)"<<endl;
                    break;
                case 3:
                   cout<<"�A��"<<belong[i]<<"�����(3)"<<endl;
                   break;
                case 4:
                   cout<<"�A��"<<belong[i]<<"���A(4)"<<endl;

                    break;
                case 5:
                   cout<<"�A��"<<belong[i]<<"�x�q��(5)"<<endl;

                    break;
                case 6:
                   cout<<"�A��"<<belong[i]<<"�x��(6)"<<endl;

                    break;




                }


            }
        }
        cout<<endl;

        cout<<"�A�n�椰��"<<endl;
        cin>>choice;
         if(choice<1||choice>6){
            cout<<"�A��J���o!!"<<endl;
            goto bbb;
        }
        cout<<"�A�n��X��"<<endl;
        cin>>number;
        if((itemPrice[choice]*number+yourMoney)>=1000000){
            cout<<"�AĹ�F!!!"<<endl;
            break;
        }
        if(number>belong[choice]){
            cout<<"@@�ݨӧA�O�ݿ��F�Τ��Q��@@!!"<<endl;
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
            cout<<"�䭷�ӤF�A�A���G���q�ش�A�ѵ��_�C�����A�ɭP���G�������ؼW"<<endl;
            itemPrice[1]=itemPrice[1]*1.5;
            break;
        case 1:
            cout<<"�A���L�ѡA���G���q�ش�A�ѵ��_�C�k���A�ɭP���G�������ش�"<<endl;
            itemPrice[1]=itemPrice[1]*0.7;
            break;
        case 2:
            cout<<"�g���f�o�͡A���O�N�@���C�A�ݨD�_�C�����A�ɭP���׻����ش�"<<endl;
            itemPrice[3]=itemPrice[3]*0.7;
            break;
        case 3:
            cout<<"succeccful advertisement�P�P�A���O�N�@�W���A�ݨD�_�C�k���A�ɭP���׻����ؼW"<<endl;
            itemPrice[3]=itemPrice[3]*1.5;
            break;
        case 4:
            cout<<"�෽�M���A�ѵ��_�C�����A�ɭP�۪o�����ؼW"<<endl;
            itemPrice[2]=itemPrice[2]*2.0;
            break;
        case 5:
            cout<<"���u�F!!�쥻����A�ݨD����!!�ݨD�_�C�����A�ɭP����@��"<<endl;
            itemPrice[4]=itemPrice[4]*0.5;
            break;
        case 6:
            cout<<"�����P�N��!!�쥻����A�ݨD���W!!�ݨD�_�C�k���A�ɭP����@�W"<<endl;
            itemPrice[4]=itemPrice[4]*2;
            break;
        case  7:
            cout<<"�q���M���L��!!�ɭP�ݨD���C�A�ݨD�_�C�����A�ɭP����@��"<<endl;
            itemPrice[5]=itemPrice[5]*0.7;
            itemPrice[6]=itemPrice[6]*0.7;

            break;
        case 8:
            int aa;
            cout<<"�A��M�ܦ��g�پǪ���!�i�H�M�w���l���ݨD���u!!(1:����,2:�k��)"<<endl;
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
            cout<<"�A��M�ܦ��g�پǪ���!�i�H�M�w�q�����ݨD���u!!(1:����,2:�k��)"<<endl;
            cin>>bb;
            if(bb==1){
                itemPrice[5]=itemPrice[5]*0.9;
            }
            if(bb==2){
                itemPrice[5]=itemPrice[5]*1.7;
            }
            break;
        case 10:
            cout<<"���ݦb�A���M�ߤW�Ӯ��ӦѮv���ҡA�ᬰ�P�ʡA���A�Q�U��"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"�AĹ�F!!!!"<<endl;
                goto ff;
            }
            break;
        case 11:
            rob=((rand()*123)%250000);
            cout<<"�Q�m�T�F!!�¯٧A��X"<<rob<<"��"<<endl;
            yourMoney=yourMoney-rob;
            if(yourMoney<0){
                cout<<"�A��F!!!!"<<endl;
                goto ff;
            }
            break;
        case 12:
            cout<<"�ͽ�෽�޳N����!!���N�~����U���A�۪o����U��"<<endl;
            itemPrice[2]=itemPrice[2]*0.7;
            break;
        case 13:
            cout<<"���ݦb�A���M�ߤW�Ӯ��ӦѮv���ҡA�ᬰ�P�ʡA���A�Q�U��"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"�AĹ�F!!!!"<<endl;
                goto ff;
            }
            break;
        case 14:
            cout<<"�Ȧ�o��Q��!!!"<<endl;
            yourMoney=yourMoney*1.2;
            if(yourMoney>=1000000){
                cout<<"�AĹ�F!!!!"<<endl;
                goto ff;
            }
            break;
        case 15:
            cout<<"���ݦb�A���M�ߤW�Ӯ��ӦѮv���ҡA�ᬰ�P�ʡA���A�Q�U��"<<endl;
            yourMoney=yourMoney+100000;
            if(yourMoney>=1000000){
                cout<<"�AĹ�F!!!!"<<endl;
                goto ff;
            }
            break;
        case 16:
            cout<<"�F����ú�|�F!!��ú�X20%������"<<endl;
            yourMoney=yourMoney*0.8;
            if(yourMoney<0){
                cout<<"�A��F!!!!"<<endl;
                goto ff;
            }
            break;
        case 17:
            cout<<"�o�ͳq�f����!!�A�쥻���������ȳ�1/2!!"<<endl;
            yourMoney=yourMoney*0.5;
            if(yourMoney<0){
                cout<<"�A��F!!!!"<<endl;
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

    cout<<"�ڬO�@�ӥi�H���A�гy��Ĺ���{��(���R����Q�q)"<<endl;
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
    cout<<"�зӤW�϶��ǿ�JPeopleA�BPeopleB�b��JobA�MJobB�����ɶ�����(�п�J�Ʀr)"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            counter++;
            cout<<counter<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"�A��J���x�}��:"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  "<<"|"<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  "<<"|"<<endl;
    cout<<"---------------------------------------------"<<endl;

    if(a[0][0]>a[1][0]){cout<<"PeopleA�bJobA�W�������u��";}
    if(a[0][0]<a[1][0]){cout<<"PeopleB�bJobA�W�������u��";}
    if(a[1][0]>a[1][1]){cout<<"PeopleA�bJobB�W�������u��";}
    if(a[1][0]<a[1][1]){cout<<"PeopleA�bJobB�W�������u��";}
    cout<<endl;
    cout<<endl;
    cout<<"�n!!���n�Ĥ@�B���R!!�n�}�l�@����Ĺ�F!!!"<<endl;
    cout<<endl;
    cout<<"�Ĥ@�B: ���R�o��ӤH�n�����Job�����|����(���Ҽ{�t�@��Job)!!!"<<endl<<endl<<endl;
    cout<<"PeopleA��JobA�@�ӳ�즨�������|������ "<<a[1][0]/a[0][0]<<" ��JobB"<<endl;
    cout<<"PeopleA��JobB�@�ӳ�즨�������|������ "<<a[0][0]/a[1][0]<<" ��JobA"<<endl;
    cout<<"PeopleB��JobA�@�ӳ�즨�������|������ "<<a[1][1]/a[0][1]<<" ��JobB"<<endl;
    cout<<"PeopleA��JobB�@�ӳ�즨�������|������ "<<a[0][1]/a[1][1]<<" ��JobA"<<endl;
    system("pause");
    cout<<endl;

    cout<<"�ĤG�B:�Ҽ{���|�����A�гy��Ĺ����!!"<<endl<<endl;
    if((a[1][0]/a[0][0])>(a[1][1]/a[0][1])){
        cout<<"JobA���ӵ�B���AJobB��A��"<<endl;
    }
    else if((a[1][0]/a[0][0])<(a[1][1]/a[0][1])){
        cout<<"JobA���ӵ�A���AJobB��B��"<<endl;

    }
    else {

        cout<<"oops!!�~�M�@��!!!���N�H�����t�a!!"<<endl;
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
    cout<<"�ڬO�@�ӥi�H���A��Nash���Ū��{��!!"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|  1,2     |  3,4      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|   5,6    |  7,8      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"�ХH���ϼƦr�ҼаO�����ǿ�J(�п�J���)"<<endl;
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
    cout<<"�A��J���x�}��: "<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"|"<<"   "<<a[0][0]<<","<<b[0][0]<<"   |"<<" "<<a[0][1]<<","<<b[0][1]<<"   |"<<"   "<<endl;
    cout<<"---------------------------------------"<<endl;
     cout<<"|"<<"   "<<a[1][0]<<","<<b[1][0]<<"   |"<<" "<<a[1][1]<<","<<b[1][1]<<"   |"<<"   "<<endl;
    cout<<"----------------------------------------"<<endl;
    if((a[0][0]>=a[0][1])&&(a[0][0]>=a[1][0])&&(b[0][0]>=b[0][1])&&(b[0][0]>=b[1][0])){
        cout<<"���W���O��Nash ����"<<endl<<"�謰:("<<a[0][0]<<","<<b[0][0]<<")"<<endl;
        isNash=true;
    }
    if((a[0][1]>=a[0][0])&&(a[0][1]>=a[1][1])&&(b[0][1]>=b[0][0])&&(b[0][1]>=b[1][1])){
        cout<<"�k�W���O��Nash����"<<endl<<"�謰:("<<a[0][1]<<","<<b[0][1]<<")"<<endl;
        isNash=true;
    }
    if((a[1][0]>=a[0][0])&&(a[1][0]>=a[1][1])&&(b[1][0]>=b[0][0])&&(b[1][0]>=b[1][1])){
         cout<<"���U���O��Nash����"<<endl<<"�謰:("<<a[1][0]<<","<<b[1][0]<<")"<<endl;
        isNash=true;
    }
    if((a[1][1]>=a[0][1])&&(a[1][1]>=a[1][0])&&(b[1][1]>=b[0][1])&&(b[1][1]>=b[1][0])){
         cout<<"�k�U���O��Nash����"<<endl<<"�謰:("<<a[1][1]<<","<<b[1][1]<<")"<<endl;
        isNash=true;
    }
    if(!isNash){
        cout<<"�ְ��!!�ڥ��S��Nash����"<<endl;
    }
    system("pause");

}
void test(){
    char ans;
    cout<<"�аݨ��@�I��Nash����?"<<endl;

     cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|  1,0     |  0,1      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<"|   0,1    |  1,0      |"<<endl;
    cout<<"|          |           |"<<endl;
    cout<<" ----------------------"<<endl;
    cout<<"1. ���W�� 2.�k�W�� 3.���U�� 4.�k�U�� 5.�ڥ��S��Nash����"<<endl;
inputFirst:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
    if(!isDigit(ans)){
                cout<<"���n�å��n��?�Х��Ʀr!!!�Э��s��J!!"<<endl;
                goto inputFirst;
            }
    if(ans=='5'){cout<<"����!!����F!!�~��U�@�D"<<endl;}
    if(ans!='5'){cout<<"�����F~~�U���[�o!!�A�ݬ����q�a~~"<<endl;return;}
    cout<<"========================================================"<<endl;
    cout<<"�аݧ������N�L�����u�A�Ѯv�W�ҤS�٬�����L�����u??"<<endl;
    cout<<"1. �Ѥ~�� 2.�m�@�� 3.�S�Ϋ� 4.�̱j�� 5.�t��"<<endl;
    inputSecond:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"���n�å��n��?�Х��Ʀr!!!�Э��s��J!!"<<endl;
                goto inputSecond;
            }
    if(ans=='2'){cout<<"����!!����F!!�~��U�@�D"<<endl;}
    if(ans!='2'){cout<<"�����F~~�U���[�o!!�A�ݬ����q�a~~"<<endl;return;}
    cout<<"========================================================"<<endl;
    cout<<"�аݷ�A�ұo�W�[�ɴN�Q�R�V�h���]�f�s��??"<<endl;
    cout<<"1. ���`�](normal good) 2.���ʰ](neutral good) 3.�H���](inferior good) 4.�̨ΰ](best good) 5.�H�W�ҫD"<<endl;
    inputThird:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"���n�å��n��?�Х��Ʀr!!!�Э��s��J!!"<<endl;
                goto inputThird;
            }

    if(ans=='1'){cout<<"����!!����F!!�~��U�@�D"<<endl;}

    if(ans!='1'){cout<<"�����F~~�U���[�o!!�A�ݬ����q�a~~"<<endl;return;}


    cout<<"========================================================"<<endl;
    cout<<"�U�Ϭ���صL�����u?"<<endl;
    cout<<"^                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"|   ____________      "<<endl;
    cout<<"|                     "<<endl;
    cout<<"----------------------"<<endl;
    cout<<"����:���W��V�V�W"<<endl;
    cout<<" 1.�t�� 2.���l�� 3.�������N 4.�h�U�f�� 5.�H�W�ҫD"<<endl;
    inputFourth:
    cout<<" please input your ans:  "<<endl;
    cin>>ans;
     if(!isDigit(ans)){
                cout<<"���n�å��n��?�Х��Ʀr!!!�Э��s��J!!"<<endl;
                goto inputFourth;
            }
    if(ans=='4'){cout<<"����!�A�w�g�����L��"<<endl;
            cout<<"_____________"<<endl;
            cout<<"|   .   .   |"<<endl;
            cout<<"|    ____   |"<<endl;
            cout<<"|    ";
            cout<<"\\";
            cout<<"__/   |"<<endl;
            cout<<"|__________ | "<<endl;


    }
    if(ans!='4'){cout<<"�����F~~�U���[�o!!�A�ݬ����q�a~~"<<endl;return;}
    system("pause");
}
int main(){
int play;
while(true){

    cout<<"���{�����D�w�٦���Nash�����I���{���M�s�@��Ĺ���{��"<<endl;
    cout<<"�зӫ��ܾާ@: "<<endl;

    int input;
reInput:
    //system("pause");

    cout<<"�аݧA�n??"<<endl;
    cout<<"1. ��nash����"<<endl;
    cout<<"2. �g�D��"<<endl;
    cout<<"3. ����Ĺ����"<<endl;
    cout<<"4. ���Ӥp�C��!!!"<<endl;
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
        cout<<"���U!!���n�å��n��!!�Э��s��J!!"<<endl;
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
