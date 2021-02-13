#include <iostream>
#include<locale.h>
using namespace std;

int main ( )
{
	setlocale(LC_ALL,"turkish");
    char metin[100], ch;//100 karakterde metin girilebilinir.
    int i, anahtar;//say� t�r�ne anahtar atand�.

    cout << "Sifrelenecek Metni Girin: ";
    cin.getline(metin, 100);//d��ar�dan metin komudu �a�r�ld�.
    cout << "say� t�r�nden Anahtari  Girin: ";
    cin >> anahtar;//d��ar�dan anahtar istendi.

    for (i = 0; metin[i] != '\0'; ++i){//dizi t�rnde metin giri�i ve bo�luklar dahil olmayacak �ekilde �ifreleme i�lemi ger�ekle�tirelecek.
        ch = metin[i];

        if (ch >= 'a' && ch <= 'z'){//karakter a ve z de�erleri dahil , a dan b�y�k ve e�itse ve z den k���k ve e�itse karakter
            ch = ch + anahtar;//karakter �zerine anahtar de�ri eklensin.

            if (ch > 'z'){// e�er karakter z den b�y�kse
                ch = ch - 'z' + 'a' - 1;//karakter z den ��kar a y� ekle ve tersini al
            }
            metin[i] = ch;//karakter de�erini metin i de�erinde d�nd�r.
        }

        else if (ch >= 'A' && ch <= 'Z'){//karakter b�y�k a dan b�y�k e�it ise ve karakter b�y�k z den k���k e�it ise
            ch = ch + anahtar;//karakter zerine anahtar ekle

            if (ch > 'Z'){//karakter b�y�k z den k���k ise
                ch = ch - 'Z' + 'A' - 1;//karakterden b�y�k z yi ��kar b�y�k a de�eri ekle ve tersini al
            }
            metin[i] = ch;// karakter metin i de�erinde d�nd�r
        }
    }

    cout << "Sifrelenmis Metin: " << metin;//�ifrelenmi� mmetni ekrana yazd�r.

    return 0;
}
