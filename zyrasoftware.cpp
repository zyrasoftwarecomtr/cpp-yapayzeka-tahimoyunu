#include <iostream>
#include <cstdlib> // rand() ve srand() fonksiyonları için
#include <ctime> // time() fonksiyonu için

int main() {
    // Rastgele sayı üretmek için zamanı kullanalım
    std::srand(std::time(0));

    // Kullanıcıdan bir sayı alalım
    int kullaniciSayisi;
    std::cout << "Bir sayi belirleyin: ";
    std::cin >> kullaniciSayisi;

    // Yapay zeka, kullanıcının belirlediği sayıyı tahmin etmeye çalışacak
    int tahmin;
    int denemeSayisi = 0;

    do {
        tahmin = std::rand() % 100 + 1; // 1 ile 100 arasında rastgele bir sayı üretelim
        std::cout << "Yapay zeka " << tahmin << " diyor." << std::endl;
        denemeSayisi++;
    } while (tahmin != kullaniciSayisi);

    std::cout << "Yapay zeka " << tahmin << " sayisini " << denemeSayisi << " denemede buldu!" << std::endl;

    return 0;
}
