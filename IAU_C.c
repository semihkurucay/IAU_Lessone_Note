#include<stdio.h>

int main(){
	float n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%f",&n1);
	
	printf("Sayi 2 girin : ");
	scanf("%f",&n2);
	
	double result = n1 * n2;
	printf("Kalvyeden girdiginiz %f ile ikinci girdiginiz %f sayisinin carpiminin sonucu %.2lf", n1,n2,result);
	
	return 0;
}

int main(){
	
	char c;
	
	printf("Bir karakter girin : ");
	scanf("%c", &c);
	
	printf("%c -> %i", c, c);
	
	return 0;
}

int main(){
	int n1, n2, temp;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n2);
	
	temp = n2;
	n2 = n1;
	n1 = temp;
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}

int main(){
	int n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	n2 = n1;
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}

int main(){
	int n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n2);
	
	n1 = n1 - n2;
	n2 = n1 + n2;
	n1 = n2 - n1;
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}

int main(){
	int sayi;
	
	printf("Sayi girin : ");
	scanf("%i", &sayi);
	
	if(sayi % 2 == 0){
		printf("Cift sayidir");
	}else{
		printf("Tek sayidir");
	}
	
	return 0;
}

int main(){
	
	int max, i = 0;
	
	for(i = 0; i < 3; i++){
		printf("Sayi girin : ");
		int sayi;
		scanf("%i", &sayi);
		
		if(i == 0){
			max = sayi;
		}
		
		if(max < sayi){
			max = sayi;
		}
	}
	
	printf("En buyuk sayi : %i", max);
	return 0;
}

---------------------------------------------------------------------------------

int main(){
	char key[] = {'i','o','a','e', 'u', 'I', 'O', 'A', 'E', 'U'};
	char value;
	int i = 0;
	
	printf("Harf girin : ");
	scanf("%c", &value);
	
	for(i; i < sizeof(key); i++){
		if(value == key[i]){
			printf("Sessli");
			return 0;
		}
	}
	
	printf("Sessiz");
	return 0;
}

int main(){
	float yol, varis;
	
	printf("Toplam yolu girin : ");
	scanf("%f", &yol);
	
	printf("Varmak istediginiz zamani girin : ");
	scanf("%f", &varis);
	
	printf("Ortalama hiziniz bu olmali : %.2f", yol/varis);
	return 0;
}

int main(){
	int year, mounth, day, yearB, mounthB, dayB;
	
	printf("Dogum tarihiniz girin : (GUN/AY/YIL)");
	scanf("%i/%i/%i", &dayB, &mounthB, &yearB);
	
	printf("Bugunun tarihini girin : ");
	scanf("%i/%i/%i", &day, &mounth, &year);
	
	if(day > 31 || dayB > 31 || mounth > 12 || mounthB > 12 || (year-yearB) < 0){
		printf("Hatalı değer girdiniz.");
		return 0;
	} 
	
	if(dayB > day){
		day += 30;
		mounth -= 1;
	}
	
	if(mounthB > mounth){
		mounth += 12;
		year -= 1;
	}
	
	printf("Dunyada %i gun %i ay %i yil varsiniz", (day - dayB), (mounth - mounthB), (year - yearB));
	return 0;
}

int main(){
	int select;
	float result;
	
	printf("1 - Karenin alanini hesapla\n2 - Ucgenin alanini hesapla\n3 - Dikdortgen alanini hesapla\nHesaplama secin : ");
	scanf("%i", &select);
	
	if(select == 1){
		int kare;
		printf("Karenin bir kenar uzunlugunu girin:");
		scanf("%i", &kare);
		
		result = kare * kare;
	}else if(select == 3){
		int uzun, kisa;
		printf("Dikdortgenin bir uzun kenari girin:");
		scanf("%i", &uzun);
		
		printf("Dikdortgenin bir kisa kenari girin:");
		scanf("%i", &kisa);
		
		result = uzun * kisa;
	}else if(select == 2){
		float taban, h;
		printf("Ucgenin taban uzunlugunu girin:");
		scanf("%f", &taban);
		
		printf("Ucgenin yuksekligini girin:");
		scanf("%f", &h);
		
		result = (taban * h) / 2;
	}else{
		printf("Hatalı değer giriniz");
		return 0;
	}
	
	printf("Alani : %.2f", result);
	return 0;
}

--------------------------------------------------------------------------------

int main(){
	int mounth;
	printf("Bir ay numarasi girin : ");
	scanf("%i", &mounth);
	
	switch(mounth){
		case 12:
		case 1:
		case 2:
			printf("Kis mevsimindesiniz");
			break;
		case 3:
		case 4:
		case 5:
			printf("Ilkbahar mevsimindesiniz");
			break;
		case 6:
		case 7:
		case 8:
			printf("Yaz mevsimindesiniz");
			break;
		case 9:
		case 10:
		case 11:
			printf("Sonbahar mevsimindesiniz");
			break;
		default:
			printf("Hata deger girdiniz");
			break;
	}
	return 0;
}

int main(){
	char type;
	printf("Yapacaginiz islemi girin : ");
	scanf("%c", &type);
	
	int num1, num2, result;
	printf("1. Sayiyi girin : ");
	scanf("%i", &num1);
			
	printf("2. Sayiyi girin : ");
	scanf("%i", &num2);
	
	switch(type){
		case '-':
			result = num1 - num2;
			break;
		case '+':
			result = num1 + num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("Hatalı işlem seçtiniz");
			return 0;
	}
	
	printf("İslem sonucunuz : %i", result);
	return 0;
}

int main(){
	float account = 10000.0, process;
	int select;
	
	printf("1 - Para cek\n2 - Para Yatir\n3 - Bakiye Sorgula\n4 - Cikis\nIslem secin : ");
	scanf("%i", &select);
	
	switch(select){
		case 1:
			printf("Cekilecek tutar girin : ");
			scanf("%f", &process);
			
			if(process > account){
				printf("Hesabinizda yeterli miktarda para yok");
				break;
			}
			
			account -= process;
			printf("Son bakiyeniz : %f", account);
			break;
		case 2:
			printf("Yatirilacak tutar girin : ");
			scanf("%f", &process);
			
			account += process;
			printf("Son bakiyeniz : %f", account);
			break;
		case 3:
			printf("Bakiyeniz : %f", account);
			break;
		case 4:
			printf("Kart geri veriliyor");
			break;
		default:
			printf("Hatali girdiniz");
			break;
	}
	return 0;
}

int main(){
	int sayi, on;
	printf("Iki basamakli sayi girin : ");
	scanf("%i", &sayi);
	
	on = sayi / 10;
	sayi = sayi % 10;
	switch(on){
		case 0:
			printf("");
			break;
		case 1:
			printf("On ");
			break;
		case 2:
			printf("Yirmi ");
			break;
		case 3:
			printf("Otuz ");
			break;
		case 4:
			printf("Kirik ");
			break;
		case 5:
			printf("Eli ");
			break;
		case 6:
			printf("Altmis ");
			break;
		case 7:
			printf("Yetmis ");
			break;
		case 8:
			printf("Seksen ");
			break;
		case 9:
			printf("Doksan ");
			break;
		default:
			printf("");
			break;
	}
	
	switch(sayi){
		case 0:
			printf("Sifir");
			break;
		case 1:
			printf("Bir");
			break;
		case 2:
			printf("Iki");
			break;
		case 3:
			printf("Uc");
			break;
		case 4:
			printf("Dort");
			break;
		case 5:
			printf("Bes");
			break;
		case 6:
			printf("Alti");
			break;
		case 7:
			printf("Yedi");
			break;
		case 8:
			printf("Sekiz");
			break;
		case 9:
			printf("Dokuz");
			break;
		default:
			printf("");
			break;
	}
	return 0;
}

--------------------------------------------------------------------------------------------

int main(){
	int sayi, us, top = 1;
	
	printf("Sayi girin:");
	scanf("%i", &sayi);
	
	printf("Us girin:");
	scanf("%i", &us);
	
	while(us > 0){
		top *= sayi;
		us--;
	}
	
	printf("Sonuc : %i", top);
	return 0;
}

int main(){
	int i = 1, sum = 0;
	
	for(i; i <= 500; i++){
		sum += i;
	}
	
	printf("sonuc : %i", top);
}

int main(){
	int i = 1, t = 0, c = 0;
	
	for(i; i <= 500; i++){
		if(i % 2 == 0){
			c += i;
			break;
		}
		
		t += i;
	}
	printf("fark : %i", t - c);
	if((t - c) > 0){
		printf("Pozitif");
		return 0;
	}
	
	printf("Negatif");
	return 0;
}

int main(){
	int sayi, bir, on, yuz, bin, temp;
	
	printf("Sayi girin :");
	scanf("%i", &sayi);
	
	temp = sayi % 1000;
	on = (sayi % 100) / 10;
	yuz = temp / 100;
	bin = sayi / 1000;
	bir = sayi - (bin * 1000) - (yuz * 100) - (on * 10);
	
	printf("Binler : %i \nYuzler : %i \nOnlar : %i \nBirler : %i", bin, yuz, on, bir);
	return 0;
}

int main(){
	int i = 10;
	
	for(i; i <= 200; i++){
		if(((i * 3) + 2) % 5 == 0){
			printf("%i\n", i);
		}
	}
	
	return 0;
}

int main(){
	int num = 8, count = 4;
	
	for(num; num <= 100; num++){
		if((num % 2 != 0) && (num % 3 != 0) && (num % 5 != 0) && (num % 7 != 0)){
			printf("\nAsal sayi : %i", num);
			count++;
		}
	}
	
	printf("\nToplam asal sayi : %i", count);
	
	return 0;
}

--------------------------------------------------------------------------------------

int main(){
	int i = 1, sayi;
	printf("Sayi girin : ");
	scanf("%i", &sayi);
	
	for(sayi; 1 < sayi; sayi--){
		i *= sayi;
	}
	
	printf("Faktoryel sonucu : %i", i);
	return 0;
}

int main(){
	int i = 1, sayi, ilksayi;
	printf("Sayi girin : ");
	scanf("%i", &sayi);
	
	ilksayi = sayi;
	
	while(sayi > 0){
		i *= sayi;
		sayi--;
	}
	
	printf("Faktoryel sonucu : %i", i);
	return 0;
}

int main(){
	int sayi, i = 2;
	printf("Klavyeden bir deger girin :");
	scanf("%i", &sayi);
	
	while(i < sayi){
		if(sayi % i == 0){
			printf("%i bir asal sayi degildir.", sayi);
			return 0;
		}
		
		i++;
	}
	
	printf("%i bir asal sayidir.", sayi);
	return 0;
}

int main(){
	int sayi = 2, asal, i;
	
	do{
		i = 2;
		asal = 1;
		
		do{
			if(sayi % i == 0){
				asal = 0;
			}
			
			i++;
		}while(i < sayi);
	
		if(asal == 1){
			printf("%d\n", sayi);
		}
		
		sayi++;
	}while(sayi <= 100);
	return 0;
}

int main(){
	
	int a, b, max;
	scanf("%i", &a);
	max = 0;
	
	while(a > 0){
		b = a % 10;
		if(max < b){
			max = b;
		}
		a = (a / 10);
	}
	
	printf("En buyuk = %i", max);
	return 0;
}

int main(){
	int sum, min, max, i = 0;
	double ort, minMaxOrt;
	for(i; i < 10; i++){
		int sayi;
		
		printf("%i. Sayi girin : ", (i + 1));
		scanf("%i", &sayi);
		
		if(i == 0){
			min = sayi;
			max = sayi;
		}
		
		if(sayi > max){
			max = sayi;
		}
		
		if(sayi < min){
			min = sayi;
		}
		
		sum += sayi;
	}
	
	ort = sum / 10.0;
	minMaxOrt = (max + min) / 2.0;
	
	printf("Sayilarin ort : %.2lf\n", ort);
	printf("En buyuk [%i] ile en kucuk [%i] ortlamasi : %.2lf\n", max, min, minMaxOrt);
	return 0;
}

--------------------------------------------------------------------------------------------

int main(){
	int i = 0;
	int dizi[5];
	
	for(i; i < 5; i++){
		printf("%i . sayi girin : ", (i + 1));
		scanf("%i", &dizi[i]);
	}
	
	i = 0;
	
	for(i; i < 5; i++){
		printf("%i . sayi : %i \n", (i + 1), dizi[i]);
	}
	
	return 0;
}

int main(){
	int i = 0;
	int dizi[5] = {100, 200, 300, 400, 500};
	
	for(i; i < 5; i++){
		printf("%i . sayi : %i \n", (i + 1), dizi[i]);
	}
	
	return 0;
}

int main(){
	int i = 0, ara;
	int dizi[5];
	
	for(i; i < 5; i++){
		printf("%i . sayi girin : ", (i + 1));
		scanf("%i", &dizi[i]);
	}
	
	printf("Aranacak sayi girin : ");
	scanf("%i", &ara);
	
	i = 0;
	for(i; i < 5; i++){
		if(dizi[i] == ara){
			printf("Aradiginiz deger bulundu. Index : %i, Sira : %i", i, (i + 1));
			return 0;
		}
	}
	
	printf("Aradiginiz deger dizide yok");
	return 0;
}

int main(){
	int boyut, en, i, konum;
	
	printf("Dizi boyutu girin : ");
	scanf("%i", &boyut);
	
	int dizi[boyut];
	i = 0;
	
	for(i; i < boyut; i++){
		printf("%i. -> ", (i + 1));
		scanf("%i", &dizi[i]);
	}
	
	en = dizi[0];
	i = 0;
	
	for(i; i < boyut; i++){
		if(en > dizi[i]){
			en = dizi[i];
			konum = i;
		}
	}
	
	printf("En kucuk eleman konumu : %i - deger : %i", konum, en);
	return 0;
}

int main(){
	int eleman, i, j, a, c;
	
	printf("Dizi eleman sayisi girin : ");
	scanf("%i", &eleman);
	
	int b[eleman];
	i = 0;
	
	for(i; i < eleman; i++){
		printf("%i. -> ", (i + 1));
		scanf("%i", &b[i]);
	}
	
	i = 0;
	for(i; i < (eleman - 1); i++){
		for(j = i + 1; j < eleman; j++){
			if(b[i] > b[j]){
				c = b[i];
				b[i] = b[j];
				b[j] = c;
			}
		}
	}
	
	printf("\nSiralanmis liste}\n");
	
	i = 0;
	
	for(i; i < eleman; i++){
		printf("%i. -> %i\n", (i + 1), b[i]);
	}
	
	return 0;
}

int matris[2][3] = {1, 2, 3, 4, 5, 6};
int main(){
	int i, j;
	
	for (i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("%i ", matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

int main(){
	char a [5][5];
	int i, j;
	for(i=0; i<5;i++){
		for(j=0; j <= i; j++){
			a[i][j] = '*';
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

