#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <algorithm>  // sort, reverse, find vs.
#include <numeric>    // accumulate
using namespace std;

int main() {
    // ---------- VECTOR ----------
    vector<int> v = {5, 2, 9, 1, 5};

    // sort: küçükten büyüğe sıralama
    sort(v.begin(), v.end());  // 1 2 5 5 9

    // reverse: ters çevirme
    reverse(v.begin(), v.end());  // 9 5 5 2 1

    // find: 5 var mı?
    if (find(v.begin(), v.end(), 5) != v.end())
        cout << "Vector: 5 bulundu!\n";


    // find: 5 var mı?
    // find elemanı bulursa o elemanın iterator'ını döner
    // bulamazsa v.end() döner
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end())
        cout << "Vector: 5 bulundu! Konum değeri: " << *it << endl;

    // TEHLİKELİ KULLANIM:
    // if (*find(v.begin(), v.end(), 5) == 5) // bu yanlış, çünkü find bulamazsa *v.end() olur, tanımsız davranış!
    // Doğru kullanım:
    if (it != v.end() && *it == 5) {
        cout << "Güvenli kontrol: 5 bulundu ve değeri: " << *it << endl;
    }

    // count: 5 kaç tane?
    cout << "5 sayısı: " << count(v.begin(), v.end(), 5) << " kez geçiyor.\n";

    // auto ile elemanlara erişim (iterator yerine kısa yazım)
    cout << "Vector elemanları: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // ---------- SET ----------
    set<string> renkler = {"kırmızı", "yeşil", "mavi"};

    // insert: eleman ekle
    renkler.insert("sarı");

    // count: "mavi" var mı?
    if (renkler.count("mavi"))
        cout << "Set: mavi var.\n";

    // set otomatik sıralı: ASCII'ye göre
    cout << "Set elemanları: ";
    for (auto renk : renkler)
        cout << renk << " ";
    cout << endl;

    // ---------- LIST ----------
    list<int> sayilar = {4, 2, 3};

    // insert: başa ve sona eleman ekle
    sayilar.push_front(1);
    sayilar.push_back(5);

    // sort & reverse (list içinde kendi fonksiyonları var)
    sayilar.sort();   // küçükten büyüğe
    sayilar.reverse(); // sonra ters

    cout << "List elemanları: ";
    for (auto i : sayilar)
        cout << i << " ";
    cout << endl;

    // ---------- MAP ----------
    map<int, string> kisiler = {
        {101, "Taha"},
        {102, "Zeynep"},
        {103, "Ali"}
    };

    // find ile anahtar arama
    if (kisiler.find(101) != kisiler.end())
        cout << "Map: 101 var, kişi: " << kisiler[101] << endl;

    // map üzerinde auto ile dolaşmak (pair<key, value>)
    cout << "Map elemanları:\n";
    for (auto p : kisiler) {
        // p.first: anahtar, p.second: değer
        cout << p.first << " -> " << p.second << endl;
    }

    // ---------- ALGORITHM + NUMERIC ----------
    // accumulate: toplam hesaplama (numeric kütüphanesinden)
    int toplam = accumulate(v.begin(), v.end(), 0);
    cout << "Vector toplamı: " << toplam << endl;

    // max_element, min_element
    cout << "En büyük eleman: " << *max_element(v.begin(), v.end()) << endl;
    cout << "En küçük eleman: " << *min_element(v.begin(), v.end()) << endl;

    // all_of, any_of, none_of
    bool hepsiPozitif = all_of(v.begin(), v.end(), [](int x){ return x > 0; });
    bool biriSifirMi = any_of(v.begin(), v.end(), [](int x){ return x == 0; });
    cout << "Hepsi pozitif mi? " << (hepsiPozitif ? "Evet" : "Hayır") << endl;
    cout << "Hiç sıfır var mı? " << (biriSifirMi ? "Evet" : "Hayır") << endl;

    return 0;
}

