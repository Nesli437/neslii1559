#include<iostream>//giri� ��k�� k�t�phanesi
#include<cmath>//matematik k�t�phanesi
#include<locale.h>//t�rk�e karakter k�t�phanesi
using namespace std;

float alan(int x,float alani){//fonksiyon girii yap�ld� e�kenar ��gnin alan�n�hesaplatmak i�in

    float alan1,a;
    float kokuc;
	kokuc=1.7320508075688772 ;//k�k ���n float tr�nde de�eri
    cout<<"e� kenar �cgenin kenar�n� giriniz:"<<endl;
    cin>>x;
    alan1=(pow(x,2)*kokuc)/4;//alan i�lemi yap�ld� pow �s alma i�lemi g�r�yor.
    cout<<"e�kenar ucgenin alan�:"<<alan1;
    return alan1;

}

int main(){
	setlocale(LC_ALL,"turkish");//t�rk�e karakter yazmay� sa�layan kod

   float a,x;
   n(x,a);//fonksiyon atand�
     return 0;
}
