<img src="mats/imgs/welder.gif" align="right" height="400">

# En Basitinden Assembly

Bilgisayar terimleri ve kavramları pek kompleks ve iç içe geçmiş olduğundan anlam olarak bir kavramın veya teriminin bağlama ve konuya göre değişkenlik gösterip farklı bir anlamla 
veya örneklerle karşı karşıya bırakması muhtemeldir. Bağlamdan bağlama veya konudan konuya anlam olarak değişkenlik göstermesi modern yaklaşımla ilgidir. Teknolojik gelişim hızı 
çılgınlık seviyesinde olduğundan bir konu veya alan ile alakalı yeni bir terim bu hız ile beraber paralel olarak genişliyor bu da en temel anlamı kaçırmaya sebebiyet verip 
karmaşıklığı arttırıyor. Teknik olarak **Computer Architecture** ifadesi şuan çok geniş bir anlama sahip. Örneğin Assembly bağlamında verilen örnekler arasında **x86, ARM, MIPS vb.** 
mimari örnekleri mevcut. Lakin bu örnekler temelde işlemci mimarisi örnekleridir. İşlemci mimarisi, genellikle **Computer Architecture**'ın bir parçası olarak ele alınır ancak bağlama 
göre verilen böyle örnekler ile karşılaşınca **Computer Architecture** ifadesine ait örneklermiş gibi gözüküyor. Bu da işlemci mimarisi konusu ele alındığında birbirleriyle özdeşlermiş
(bir bakıma doğru veya belki de değil) gibi bir mana ortaya çıkarıyor. Ancak **Computer Architecture** örnekleri arasında temelde bağımsız olarak **Von Neumann, Harvard vb.** 
gibi bilgisayarın genel organizasyon yapısı gibi örnekler barındırıyor. Başka bir örnek olarak **x86** terimini ele alalım. Genel olarak bu terim 32-bit kavramıyla ilişkilendirilir 
ve özdeşleştirilir. Ancak terim, ilk olarak Intel 8086 işlemcisi ile başlamış olup, daha sonra birçok işlemci neslini ve çeşitli üreticileri (Intel, AMD vb.) içerecek şekilde 
genişlemiştir. **x86**, Intel tarafından geliştirilen bir mikroişlemci mimarisinin genel bir adıdır ve genellikle 16-bit, 32-bit ve 64-bit işlemcileri kapsayan bir terim olarak 
kullanılır. Yani teknolojik gelişim açısından 8086 mikroişlemcisi çıkış yaptığından beri bu kulvarda büyük bir etki, domine, standardizasyon ve genel olarak işlemci mimarilerinin 
temeli olarak bir dönüm noktası oluşturduğundan bu terim zamanla çok geniş bir anlama sahip olmuştur. O yüzden **x86** terimi sadece 32-bit anlamına gelmez. Ancak **x86** uzun bir 
dönem 32-bit'lik işlemciler de kullanılan bir terim olduğundan artık o terim ile özdeşleşmiş durumda. 32-bit terimi ile yanıltıcılığı azaltmak için bir ilişkilendirme yapılacaksa 
Intel'in ilk 32-bit'lik mikroişlemcisi olan **i386** veya **Pentium** gibi işlemcileriyle ilişkilendirilebilir. Sonra ki en klişe örnek olan kavram **Linux**'tur. Linux, işletim 
sistemi tarihi boyunca anlam olarak öyle bir genişlemişir ki artık onun bir işletim sistemi çekirdeği (kernel) değil bir işletim sistemi olarak tanınmasına yol açtı. Halbu ki 
en temel de işletim sistemi olarak bu **GNU/Linux** olarak tanımlanır. Linux çekirdeği ve GNU araçları birlikte tümleşik olarak çalıştığından zamanında böyle bir adlandırılma yapılmış.

> [!IMPORTANT]  
> **Konu ile alakası olmayan bir bilgi**
> 
> Örneğin yine bir örnek olarak Arch-Linux'u ele alalım. Arch-Linux'un bir koşul haricinde aslında Linux ile bir gram alakası yoktur. Çünkü Arch, içine istenilen çekirdeği entegre etme seçeneği özgürlüğünü sunduğundan Linux çekirdeklerinden herhangi biri kurulmadığı veya başka bir çekirdek kurulabildiği taktirde `Arch`, `Arch-Linux` ile bağdaşık olmayacaktır. Ki değildir de zaten.

Pek çok nokta da yapay zekadan teori bakımından yardım alındı ve yapay zeka dahi sorulan soruya ilişkin bazı terimlerle alakalı açıklama yaparken muhteşem bir karmaşa yaşıyor. 
Ancak bu onun hatası değil kaynak olarak interneti kullanıyor ve sadece ona göre bir derleme yapıyor. Sorunun kaynaktan kaynaklandığını, yani kaynakları hazırlayanların karmaşasından
kaynaklı hata yapması pek şaşırtıcı değil. Hatta yapmış olduğu hatayı kendisi fark edip kendisini düzeltmesine rağmen tekrardan maalesef ki aynı hatayı yapmaya devam ediyor. 
Hatta bazı cevapları kendisinden talep ederken bazen soyutlama (kasıtlı olarak yaptığını zannetmiyorum yukarı da bahsedilen gibi; kaynaktan kaynaklı) yapıyor ve bu yüzden sorunun 
kaynağını tam olarak tespit etmek işi daha da zorlaştırıyor. Üstelik yapılmış olan soyutlama bu şekilde yayılıp öğrenildiği taktirde soyut, artık işin kaynağıymış (özü) gibi 
gözüküyor. Bu da altta yatan asıl temelin yavaştan erimesine sebebiyet veriyor. Böylece asıl kaynağı bulmak ve doğrusunu öğrenmek pek zorlayıcı hale geliyor. 
Bilinçsiz soyutlama ya da belki kasıtsız dezenformasyon gibi bir durum söz konusu oluyor. Verilecek örnek, yukarıda bahsedilenleri ne kadar etkili bir biçimde karşılar/yansıtır/doğrular bunu 
öngöremiyorum ancak özellikle Assembly'de ki genel amaçlı register'lar ile alakalı konu araştırmasında register konvansiyonları ve öncelikleri (rdi, rsi, rax vb. bazı durumlarda 
özel davranışları olan register'lar) ile alakalı yapay zekanın ve genel olarak internet de karşılaşmış olduğum tartışma sitelerin de (stackoverflow, stackexchange vb.) bu 
konvansiyonların sebeplerinin işletim sistemine bağlı olarak standartlaştırıldığı söyleniyor. Ancak bunun asıl sebebi işletim sisteminin kullanmış olduğu bir ABI konvansiyonu 
standartından kaynaklı. Evet, ilk başta söylenilen ifade kısmen doğrudur ama tamamen değil. Çünkü bu şekilde ifade edildiğinde System V ABI veya Macho ABI gibi katmanların 
(asıl belirliyicilerin) keşfedilmesi soyutlanmış oluyor. Böylece bu gibi asıl bilgilere erişim zorlaşıyor ve tam olarak kavranılamıyor. ABI İşletim sistemi çekirdeği (kernel) 
ile uygulama yazılımları (program) arasında aracılık ve katman sağlıyor. Bu da konvansiyon sağlıyor ve oluyor. Şayet az önce ki bilgiyi (ABI) bu yazı da hiç bahsetmemiş olup sadece 
`...bu konvansiyonların sebeplerinin işletim sistemine bağlı olarak standartlaştırıldığı.` bilgisini verseydim bu soyutlamaya bilinçsizce bir katkı da bu yazınin kendisi 
sağlamış olacaktı ve aynı şekilde asıl temelin erimesine de yine bilinçsizce katkı sağlamış olunacaktı.

Assembly konusuna geri dönülecek olursa bu tip karmaşıklıkların aksine konu ile alakalı kaynak bulmak bile pek meşakkatli. Kaynak bulunsa dahi bu sefer de doğrusunu yanıltmış ifadeden ayrıştırmak pek zor. 
Bu tür dinamik terim ve genişletilmiş kavramlar (veya sabit anlamsız terim veya kavramlar da denilebilir) bu şekilde olunca bağlamdan bağımsız temel anlamı kavrayışı zorlaştırıyor, 
karmaşıklaştırıyor ve yanıltıcı olabiliyor. Assembly'de bu tür konularla ilişkili olduğundan Assembly'i kavrama konusunda zorluk olabilir. O yüzden burada yazılanlar bir başkası tarafından 
anlaşılamayıp reddedilebilir. Bu kaçınılmazdır. Çılgın karmaşa dalgasının hızına kapılıp işin sonunda kayaya çarpmaktansa daha yavaş ve dikkatli bir biçimde çözümleyip ayrıştırmak, 
işin doğrusuna yakınlaştırıp farkındalık uyandıracaktır. Bu farkındalığın kazanılmasına rolü ve yardımı olan genişlemiş, dinamik ve sabit anlamsız terim veya kavramlara 
teşekkür ederim. Burada yazılanların kavranıldığı kadarıyla ele alındığını belirtmek gerek. Burada ki belirtimleri ve ifadeleri en azından kavrayış bakımından daha kolay hale 
getirmek için **CS1** deneyiminin olması bir bakıma bu durumu çözümleyebilir.

</br>
</br>

```
"Bilinen bir doğru veya gerçek bir sonra ki doğru veya gerçeğin keşfedilene kadar bir referans noktası gibi. Böylece hiçbir zaman doğru veya gerçek olmuyor. 
Sadece yakınlaştığımızı zannediyoruz ta ki uzaklaştığımızı fark edemeyene kadar."

- Wayfaring Pilgrim
```

</br>
</br>

Bu yazıda x86 (:d) mimarisi baz alınmıştır ve ona göre hazırlanmıştır. ARM mimarisi için veya başka mimariler için burada yazılanlar geçerli olmayabilir. Çoğunlukla GNU/Linux (:d) 
sistemine özgü örnekler ve ifadeler üzerinde durulmuş ve anlatım yapılmıştır. Ancak bu MacOS veya diğer sistemler ile ilgili bilgi bulamayacağınız anlamına gelmiyor.

Neredeyse her konu birbiriyle ilişkili olduğundan sadece yukarıdan aşağıya okumak fayda sağlamayabilir. Bir bütün olarak ele alın. Bir el kitabı gibi.

---

## 🧭 Yol Haritası

1. [CPU Nedir?](#one-cpu-nedir)
   - [Mikro İşlemci Tarihinin Önemli Noktaları](#mikro-i%CC%87%C5%9Flemci-tarihinin-%C3%B6nemli-noktalar%C4%B1)
   - [İşlemci Mimarisi Ne Anlama Geliyor?](#i%CC%87%C5%9Flemci-mimarisi-ne-anlama-geliyor)
   - [Talimat Seti Nedir? Neden Gereklidir?](#talimat-seti-nedir-neden-gereklidir)
   - [Assembly Nedir?](#assembly-nedir)
2. [CPU'da ki Register'lar Nedir?](#two-cpuda-ki-registerlar-nedir)
   - [Genel Amaçlı Register'lar (General Purpose Registers - GPRs)](#genel-ama%C3%A7l%C4%B1-registerlar-general-purpose-registers---gprs)
   - [Bazı Genel Amaçlı Register'ların Özel Durumlarına Detaylı Bakış](#baz%C4%B1-genel-ama%C3%A7l%C4%B1-registerlar%C4%B1n-%C3%B6zel-durumlar%C4%B1na-detayl%C4%B1-bak%C4%B1%C5%9F)
   - [Segment Register'lar](#segment-registerlar)
   - [Diğer](#di%C4%9Fer)
   - [Register Terminolojisi ve Önekler](#register-terminolojisi-ve-%C3%B6nekler)
     - [Intel 8086 (16-bit)](#intel-8086-16-bit)
     - [32-bit Register'lar](#32-bit-registerlar)
     - [64-bit Register'lar](#64-bit-registerlar)
3. [Yaygın Assembly Talimatları - Section'lar, Direktifler, Etiketler - İşlenenler (Operands)](#three-yayg%C4%B1n-assembly-talimatlar%C4%B1---sectionlar-direktifler-etiketler---i%CC%87%C5%9Flenenler-operands)
   - [Yaygın assembly talimatları](#yayg%C4%B1n-assembly-talimatlar%C4%B1)
   - [Direktifler](#direktifler)
   - [Etiketler](#etiketler)
   - [İşlenenler (Operands)](#i%CC%87%C5%9Flenenler-operands)
4. [Assembler'lar (Nasm) ve Yazım Şekli - Linkleme ld ve Sıkıştırma - Gömme arc rcs - Obje Dosyaları - Statik (.a uzantılı dosyalar libasm.a gibi) ve Dinamik Kütüphaneler .dll .so - Runtime ve Compile Time - errno - Assembly ve C ile İlişkisel Bağlantı Kurma - -no-pie Flag'i nedir? Dışarıdan Harici Fonksiyon Çağırma (malloc) - .asm ve .s Dosyası](#four-assemblerlar-nasm-ve-yaz%C4%B1m-%C5%9Fekli---linkleme-ld-ve-s%C4%B1k%C4%B1%C5%9Ft%C4%B1rma---g%C3%B6mme-arc-rcs---obje-dosyalar%C4%B1---statik-a-uzant%C4%B1l%C4%B1-dosyalar-libasma-gibi-ve-dinamik-k%C3%BCt%C3%BCphaneler-dll-so---runtime-ve-compile-time---errno---assembly-ve-c-ile-i%CC%87li%C5%9Fkisel-ba%C4%9Flant%C4%B1-kurma----no-pie-flagi-nedir-d%C4%B1%C5%9Far%C4%B1dan-harici-fonksiyon-%C3%A7a%C4%9F%C4%B1rma-malloc---asm-ve-s-dosyas%C4%B1)
   - [Assembler Nedir?](#assembler-nedir)
   - [Assembly Dosya Uzantısı Farklılıkları (.s - .asm)](#assembly-dosya-uzant%C4%B1s%C4%B1-farkl%C4%B1l%C4%B1klar%C4%B1-s---asm)
   - [Nesne Dosyaları .o Nedir?](#nesne-dosyalar%C4%B1-o-nedir)
   - [Linkleme ld Nedir?](#linkleme-ld-nedir)
   - [.a Dosyası, Statik (.a, .lib vb.) ve Dinamik (.dll, .so vb.) Kütüphaneler, ar rcs komutu, Runtime ve Compile Time](#a-dosyas%C4%B1-statik-a-lib-vb-ve-dinamik-dll-so-vb-k%C3%BCt%C3%BCphaneler-ar-rcs-komutu-runtime-ve-compile-time)
   - [Statik ve Dinamik Kütüphaneler](#statik-ve-dinamik-k%C3%BCt%C3%BCphaneler)
   - [ar rcs Komutu Nedir?](#ar-rcs-komutu-nedir)
   - [Runtime ve Compile Time nedir?](#runtime-ve-compile-time-nedir)
   - [Assembly ve C dosyaları ile İlişkisel Bağlantı Kurma](#assembly-ve-c-dosyalar%C4%B1-ile-i%CC%87li%C5%9Fkisel-ba%C4%9Flant%C4%B1-kurma)
   - [errno nedir?](#errno-nedir)
   - [gcc'de ki -no-pie Seçeneği Nedir?](#gccde-ki--no-pie-se%C3%A7ene%C4%9Fi-nedir)
5. [Diğer Terim ve Kavramlar ve Sorular ve İfadeler](#five-di%C4%9Fer-terim-ve-kavramlar-ve-sorular-ve-i%CC%87fadeler)
   - [errno](#errno)
   - [PIE (Position Independent Executable)](#pie-position-independent-executable)
   - [GCC Relocation Hatası](#gcc-relocation-hatas%C4%B1)
   - [GOT (Global Offset Table)](#got-global-offset-table)
   - [ranlib](#ranlib)
   - [GCC (-L. -lasm Flags)](#gcc--l--lasm-flags)
   - [-no-pie Flag’i ve WRT ..plt İlişkisi](#-no-pie-flagi-ve-wrt-plt-i%CC%87li%C5%9Fkisi)
   - [WRT (With Respect To) ..plt](#wrt-with-respect-to-plt)
   - [Terimlerin İlişkileri](#terimlerin-i%CC%87li%C5%9Fkileri)
   - [x86-64 Linux'ta 32-bit mutlak adreslere artık izin verilmiyor mu?](#x86-64-linuxta-32-bit-mutlak-adreslere-art%C4%B1k-izin-verilmiyor-mu)
   - [Register'lar ile ilgili bir bilgi](#registerlar-ile-ilgili-bir-bilgi)
   - [cmp, jmp vb. flags Detayları](#cmp-jmp-vb-flags-detaylar%C4%B1)
   - [call ve jmp, jne, jz vb. Program Akışı Kontrol Komutlarının Birbirlerinden Farkları](#call-ve-jmp-jne-jz-vb-program-ak%C4%B1%C5%9F%C4%B1-kontrol-komutlar%C4%B1n%C4%B1n-birbirlerinden-farklar%C4%B1)
   - [Assembly'de strcmp Gibi Bir Fonksiyon Yazarken Fonksiyon Parametrelerin İşaretçilerini (Parametre Geçişlerini, Çağrı Konvansiyonlarını (Calling Convantions)) Nereden/Nasıl Biliyoruz?](#assemblyde-strcmp-gibi-bir-fonksiyon-yazarken-fonksiyon-parametrelerin-i%CC%87%C5%9Faret%C3%A7ilerini-parametre-ge%C3%A7i%C5%9Flerini-%C3%A7a%C4%9Fr%C4%B1-konvansiyonlar%C4%B1n%C4%B1-calling-convantions-neredennas%C4%B1l-biliyoruz)
   - [al, bl, cl vb. 8-bitlik Register'ların char (orn: 'S' gibi) Tek Bytle'lık Değer Tutma Kabiliyeti](#al-bl-cl-vb-8-bitlik-registerlar%C4%B1n-char-orn-s-gibi-tek-bytlel%C4%B1k-de%C4%9Fer-tutma-kabiliyeti)
   - [Neden al, bl, cl vb. yerine ah, bh, ch Kullanılamıyor?](#neden-al-bl-cl-vb-yerine-ah-bh-ch-kullan%C4%B1lam%C4%B1yor)
   - [rex prefix'i (Öneki)](#rex-prefixi-%C3%B6neki)
   - [movzx ve movsx Gibi Talitmatların İşlevleri](#movzx-ve-movsx-gibi-talitmatlar%C4%B1n-i%CC%87%C5%9Flevleri)
   - [Assembly'de Signed ve Unsigned](#assemblyde-signed-ve-unsigned)
   - [Assembly'de malloc Çağrısı Yapıldığında Arkaplanda ki Değişimler](#assemblyde-malloc-%C3%A7a%C4%9Fr%C4%B1s%C4%B1-yap%C4%B1ld%C4%B1%C4%9F%C4%B1nda-arkaplanda-ki-de%C4%9Fi%C5%9Fimler)
   - [PLT Prosedür Tablosu Aracılığıyla malloc Çağrısı](#plt-prosed%C3%BCr-tablosu-arac%C4%B1l%C4%B1%C4%9F%C4%B1yla-malloc-%C3%A7a%C4%9Fr%C4%B1s%C4%B1)
   - [Assembly'de Debug (Hata Ayıklama) Nasıl Yapılabilir?](#assemblyde-debug-hata-ay%C4%B1klama-nas%C4%B1l-yap%C4%B1labilir)
6. [Kaynaklar](#six-kaynaklar)
   - [CPU](#cpu)
   - [Register](#register)
   - [Sistem Çağrı Numaraları Tablosu](#sistem-%C3%A7a%C4%9Fr%C4%B1-numaralar%C4%B1-tablosu)
   - [NASM ve ASM](#nasm-ve-asm)
   - [Calling Conventions & ABI](#calling-conventions--abi)
   - [Mix](#mix)
   - [Konuyla Alakasız](#konuyla-alakas%C4%B1z)
   - [ASM Debug](#asm-debug)
7. [Onaylama ve Akran Değerlendirmesi](#seven-onaylama-ve-akran-de%C4%9Ferlendirmesi)
8. [Ekler](#eight-ekler)
   - [Linux System Call Table For x86-64](#linux-system-call-table-for-x86-64)
   - [Macos System Call Table](#macos-system-call-table)

---

## :one: CPU Nedir?

CPU, cihazın içindeki tüm hesaplama işlemlerini gerçekleştirir ve diğer bileşenleri (bellek, giriş-çıkış aygıtları vb.) yönlendirir.
Bir bilgisayarın çalışması için temel talimatları işler ve programların yürütülmesini sağlar.

**CPU'nun Temel Görevleri:**

-    **Talimatları Yorumlama**: CPU, bellekte saklanan talimatları alır ve ne yapılması gerektiğini anlar.
-    **Veri İşleme**: CPU, matematiksel ve mantıksal işlemler yaparak verileri işler.
-    **Veri Taşıma**: Veriyi bellekten alır, işler ve sonuçları tekrar belleğe veya ilgili çıkış aygıtlarına gönderir.
-    **Kontrol**: Diğer donanım bileşenlerini koordine eder ve gerektiğinde onlara veri veya talimatlar gönderir.

**CPU'nun Ana Bileşenleri:**

-    **Kontrol Birimi (Control Unit - CU)**: CPU'nun hangi işlemi yapacağını belirler ve talimatları yürütmek için gerekli verileri uygun bileşenlere yönlendirir.
-    **Aritmetik Mantık Birimi (Arithmetic Logic Unit - ALU)**: Tüm aritmetik (toplama, çıkarma vb.) ve mantıksal (AND, OR, NOT gibi işlemler) işlemleri gerçekleştirir.
-    **Kayıtlar (Registers)**: CPU içinde geçici olarak veri saklayan küçük, hızlı bellek alanlarıdır. İşlenen verilerin hızla erişilebilmesi için bu alanlar kullanılır.
-    **Önbellek (Cache)**: Sık kullanılan verilere hızlı erişim sağlamak için tasarlanmış bir bellektir. Bu sayede işlemler hızlandırılır.

**CPU'nun Çalışma Döngüsü (Fetch-Decode-Execute):**

-    **Fetch (Getir)**: CPU, RAM'den işlenecek bir talimat alır.
-    **Decode (Çözümle)**: Bu talimatı çözümler ve ne yapılması gerektiğini anlar.
-    **Execute (Yürüt)**: Talimatı işler ve sonucu elde eder.


### Mikro İşlemci Tarihinin Önemli Noktaları

Intel 8086 işlemcisi, bilgisayar tarihindeki en önemli mikroişlemcilerden biri olarak kabul edilir ve günümüz bilgisayar mimarisinin temelini oluşturmuştur. 
8086'nın tarihsel önemi, hem donanım hem de yazılım dünyasında yaptığı devrimsel yeniliklerle ilgilidir. Intel 8086'nın tarihsel açıdan neden bu kadar 
önemli olduğunun temel nedenlerine göz atalım:

1. **x86 Mimarisi'nin Doğuşu**

    Intel 8086, x86 mimarisi olarak bilinen işlemci ailesinin ilk üyesidir. Bu mimari, günümüzde kullandığımız modern bilgisayarların temelinde yer alır.
    x86 mimarisi, kişisel bilgisayarların ve sunucuların büyük çoğunluğunda kullanılan standart işlemci mimarisi haline gelmiştir. 8086 ile başlayan bu mimari,
    sürekli gelişim göstermiş ve bugünkü 64-bit işlemciler (x86-64) haline gelmiştir.

3. **16-bit İşlemci**

    Intel 8086, Intel'in ilk 16-bit mikroişlemcisiydi. Bu, o dönemin bilgisayarları için büyük bir gelişmeydi, çünkü önceki işlemciler genellikle 8-bit'ti.
    16-bit veri işleme kapasitesi, aynı anda daha fazla veri işleyebilme ve daha geniş bellek adresleme anlamına geliyordu. 8086, doğrudan 1 MB'a kadar bellek
    adresleyebiliyordu ki bu, önceki nesillere göre çok büyük bir iyileşmeydi.
    
5. **Mikroişlemci Devriminin Bir Parçası**

    8086, mikroişlemci devrimini hızlandıran işlemcilerden biri oldu. Mikroişlemciler, daha önce büyük ve pahalı olan bilgisayarları çok daha küçük, daha ucuz ve yaygın hale
    getirdi. 8086'nın yaygın olarak kullanılmasıyla bilgisayarlar, sadece iş dünyasında değil, evlerde de yer almaya başladı. Bu, kişisel bilgisayarın günlük yaşamda bir araç
    haline gelmesinin önünü açtı.

7. **Geriye Dönük Uyumluluk**

    8086 işlemcisi, Intel'in önceki 8-bit işlemcisi olan Intel 8080 ile yazılım uyumluluğunu koruyordu. Bu sayede, eski yazılımlar 8086'da da çalışabiliyordu.
    Bu geriye dönük uyumluluk stratejisi, Intel'in x86 mimarisinin büyük bir avantajı haline geldi ve sonraki yıllarda da sürdü. x86 ailesindeki her yeni işlemci,
    önceki nesillere uyumlu kalmaya çalıştı, bu da yazılım geliştirme açısından büyük bir kolaylık sağladı.

9. **Segmentli Bellek Adresleme**

    Intel 8086, segmentli bellek adresleme modelini tanıttı. Bu model, 16-bit adresleme sınırını aşarak 1 MB'a kadar bellek adreslenebilmesini sağladı.
    Segmentli bellek, o dönemin sınırlı bellek kapasitesine rağmen, daha büyük ve daha karmaşık programların çalıştırılmasına olanak tanıdı.

10. **Yazılım Gelişimi Üzerindeki Etkisi**

    Intel 8086, yeni yazılım paradigmalara öncülük etti. MS-DOS gibi işletim sistemleri ve çeşitli programlama dilleri (örneğin, Assembly, C) bu işlemci üzerine inşa edildi.
    x86 mimarisinin gücü ve yaygınlığı, yazılım geliştirme dünyasını etkiledi ve yazılım sektörü bu mimari üzerine büyük ölçüde odaklandı. 8086 ile başlayan bu yazılım ekosistemi,
    günümüzde Windows, Linux ve diğer büyük işletim sistemlerinin temelidir.

12. **Endüstri Standardı Haline Gelmesi**

    Intel 8086, endüstri standardı haline geldi ve bu durum bugün hala devam ediyor. x86 mimarisi, büyük bilgisayar üreticilerinin çoğu tarafından kullanıldı ve zamanla
    işlemcilerde ve kişisel bilgisayarlarda dominant bir yapı haline geldi.
    x86'nın başarısı, Intel'in rakiplerine karşı büyük bir avantaj sağladı ve diğer mikroişlemci üreticilerini Intel'in tasarımlarına benzer ürünler geliştirmeye yöneltti.
    
    
Intel 8086, yalnızca bir işlemci değil, modern bilgi teknolojilerinin başlangıcını simgeleyen bir dönüm noktası olarak görülür. Hem bilgisayar dünyasında hem de teknoloji 
tarihinde çok önemli bir yere sahiptir.

### İşlemci Mimarisi Ne Anlama Geliyor?

İşlemci mimarisi (veya CPU mimarisi), bir mikroişlemcinin nasıl tasarlandığını ve çalıştığını tanımlayan yapısal, işlevsel ve mantıksal prensiplerin bütünüdür.
Bu kavram, işlemcinin talimat seti, bellek yönetimi, veri işleme kapasitesi, giriş/çıkış mekanizmaları ve genel çalışma prensiplerini kapsar.
İşlemci mimarisi, hem donanımın (fiziksel devre tasarımı) hem de yazılımın (işletim sistemi ve uygulama yazılımlarının) üzerinde çalıştığı temel çerçeveyi belirler.

**İşlemci Mimarisi'nin Ana Bileşenleri:**

1. **Talimat Seti Mimarisi (ISA - Instruction Set Architecture)**

    Talimat Seti, işlemcinin hangi komutları çalıştırabileceğini tanımlar. Bir işlemciye verilen görevler (örneğin, iki sayıyı toplama, bir değeri bellekten okuma) bu talimat seti aracılığıyla gerçekleştirilir.
    Örneğin, x86 ve ARM gibi mimariler farklı komut setlerine sahiptir. Bir yazılım, işlemcinin talimat setine uygun şekilde yazılmalıdır.
    Talimat seti mimarisi ayrıca, işlemcinin kaç bitlik veriyi işleyebileceğini (örneğin 32-bit veya 64-bit) ve hangi veri türlerini (tam sayılar, kayan noktalı sayılar, karakterler vb.) desteklediğini tanımlar.

2. **Veri Yolları ve Kayıtlar (Registers)**

    Kayıtlar (registers), işlemcinin verileri ve adresleri geçici olarak depoladığı çok hızlı küçük bellek alanlarıdır. İşlemci mimarisi, kaç adet kaydın olacağını ve bu kayıtların ne kadar veri tutabileceğini belirler (örneğin, 32-bit ya da 64-bit).
    Veri yolu ise, işlemcinin veri taşımak için kullandığı hatlardır. Veri yolları, işlemci içinde ve bellek, giriş/çıkış birimleri gibi dış kaynaklarla bağlantı sağlar.


Bazı farklı işlemci mimarisi örnekleri: _x86, ARM, PowerPC, RISC-V, MIPS, SPARC, VLIW_

Talimat Seti Yapisi Türleri:

1. **CISC (Complex Instruction Set Computing)**

    CISC talimat seti yapisi, çok sayıda ve karmaşık komutları destekleyen bir mimaridir. Bir CISC işlemcisi, genellikle bir komutla birden fazla işlemi yapabilir.
    x86 mimarisi, CISC türündedir. Bu tür mimarilerde, daha az komutla daha çok iş yapılması hedeflenir.

2. **RISC (Reduced Instruction Set Computing)**

    RISC talimat seti yapisi, basit ve sınırlı sayıda talimat seti kullanır, ancak bu komutlar hızlı ve verimli şekilde çalışır. Her komut, genellikle işlemcinin bir saat döngüsünde tamamlanır.
    ARM mimarisi, RISC tabanlıdır. RISC işlemciler, genellikle daha düşük güç tüketimi ve daha hızlı performans sunar.

### Talimat Seti Nedir? Neden Gereklidir?

Talimat seti (ISA - Instruction Set Architecture), bir işlemcinin çalıştırabileceği temel işlemlerin ve bu işlemleri nasıl gerçekleştirdiğinin tanımlandığı bir dizi talimattır. 
Diğer bir deyişle, talimat seti, bir işlemci ile onun çalıştırdığı yazılımlar arasında bir arabuluculuk görevi görür. Bir yazılım, işlemci üzerindeki donanımı kontrol etmek için 
talimat setini kullanır.

**Talimat seti'nin Bileşenleri:**

  **Talimatlar (Instructions):**
      Talimatlar, işlemciye hangi işlemi yapması gerektiğini anlatan komutlardır. Örneğin, toplama, çıkarma, veri taşıma, koşullu dallanma, veri okuma/yazma gibi işlemleri 
      içerebilir.

  **Veri Tipleri:**
      talimat seti, işlemcinin hangi tür verilerle çalışabileceğini tanımlar. Örneğin, tamsayılar, kayan noktalı sayılar, karakterler vb.

  **Adresleme Modları:**
      talimat seti, verilerin bellekte nasıl bulunacağını ve işleneceğini belirleyen adresleme modlarını tanımlar. Verilere doğrudan, dolaylı veya kaydırmalı şekilde ulaşılabilir.

  **Kayıtlar (Registers):**
      İşlemcinin komutlar üzerinde çalışırken kullandığı küçük, hızlı bellek alanları olan kayıtların ne amaçla kullanıldığı talimat seti ile tanımlanır.
        
1. **Donanım ile Yazılım Arasındaki Bağ**

    Talimat seti, donanım ile yazılım arasında bir köprü görevi görür. Bir yazılımın işlemci üzerinde çalışabilmesi için, işlemcinin tanıyacağı komutlar ile yazılması gerekir.
    Örneğin, bir yazılımın iki sayıyı toplaması gerektiğinde, işlemciye bu talimatı iletebilmek için belirli bir talimat setini kullanması gerekir.

2. **Yazılım Uyumluluğu**

    Belirli bir talimat seti, işlemciye hangi yazılımların çalışabileceğini belirler. Yazılım, belirli bir işlemci talimat setine uygun olarak yazılmışsa, o işlemci üzerinde
    çalışabilir. Bu nedenle, talimat seti aynı olan işlemcilerde yazılımlar uyumlu bir şekilde çalışabilir.
    Örneğin, x86 mimarisine sahip bir işlemci, x86 talimat setine uygun yazılımları çalıştırabilir. Aynı şekilde, ARM mimarisi işlemcilerde ARM talimat setine uygun yazılımlar
    çalışır. Eğer bir yazılım başka bir talimat setine göre yazılmışsa, bu farklı mimaride çalışmaz.

3. **Standart İşlemler**

    Talimat seti, işlemcinin gerçekleştireceği işlemler için standart bir yol sağlar. Bu, matematiksel işlemler (toplama, çıkarma), bellekten veri okuma/yazma,
    koşullu dallanma (if/else yapısı) gibi temel işlemlerin işlemci tarafından nasıl yapılacağını tanımlar.
    Her işlemci, bir toplama işlemi yapmak için belirli bir komut kullanır (örneğin, ADD komutu).

4. **Performans ve Verimlilik**

    Talimat seti, işlemcinin verimliliğini ve performansını doğrudan etkiler. Daha optimize edilmiş ve basit bir talimat seti, işlemcinin işlemleri daha hızlı gerçekleştirmesini
    sağlar.
    Özellikle RISC (Reduced Instruction Set Computing) mimarisinde, komutlar basit ve hızlı çalışacak şekilde optimize edilmiştir. Bu da işlemcinin enerji verimliliğini ve
    işlem hızını artırır.        

5. **Donanım Soyutlaması**

    talimat seti, geliştiricilere donanımın karmaşıklığını gizleyen bir soyutlama sağlar. Yazılım geliştiricileri, talimat setini kullanarak işlemcinin ne yaptığını anlamadan,
    yazılımlarını donanım üzerinde çalıştırabilirler.
    Bu sayede yazılım geliştirme, donanım tasarımından bağımsız hale gelir ve daha hızlı bir şekilde ilerleyebilir.
    
 
**Talimat Seti Türleri:**
1. **CISC (Complex Instruction Set Computing)**

    CISC talimat seti, çok sayıda karmaşık komut içerir ve bu komutlar, birden fazla işlem gerçekleştirebilir.
    CISC, her komutun donanımda karmaşık bir işlevi gerçekleştirmesine izin verir, bu da kodlamayı kolaylaştırır ancak işlemci daha fazla enerji harcayabilir ve daha karmaşık olabilir.
    Örnek: x86 mimarisi, CISC talimat setine dayalıdır.

2. **RISC (Reduced Instruction Set Computing)**

    RISC talimat seti, daha az sayıda ve daha basit komutlara dayanır. Her komut, yalnızca tek bir işlem gerçekleştirir ve genellikle işlemcinin bir saat döngüsünde tamamlanır.
    RISC mimarisi, daha hızlı işlem yapma ve enerji verimliliği sağlama amacıyla tasarlanmıştır. Karmaşık işlemler, birden fazla basit komutun birleşimiyle yapılır.
    Örnek: ARM mimarisi, RISC tabanlıdır.
    
**Talimat Seti Olmazsa Ne Olur?**

Eğer talimat seti olmasaydı, yazılımlar işlemcinin nasıl çalıştığını anlamak zorunda kalır ve her donanım türü için ayrı ayrı yazılımlar yazılması gerekirdi. 
Bu da yazılım geliştirme sürecini inanılmaz derecede karmaşık ve zaman alıcı hale getirirdi. 
Talimat seti, yazılım geliştiricilerin donanımı anlamadan işlemcide işlem yapabilmelerini sağlar, bu da donanım-yazılım uyumu açısından büyük bir kolaylık sunar.

Komut seti, işlemcinin ne tür komutları çalıştırabileceğini, hangi veri tipleriyle çalışabileceğini ve donanım üzerinde nasıl işlemler gerçekleştireceğini belirleyen 
talimatlar kümesidir. İşlemci mimarisinin temel bir parçası olan komut seti, donanım ile yazılım arasındaki en önemli bağlantıdır ve yazılımın işlemci üzerinde çalışmasını 
sağlayarak verimlilik, uyumluluk ve standartlar açısından büyük bir öneme sahiptir.

### Assembly Nedir?

Assembly, bir bilgisayarın CPU'suna beslenen talimatları basitleştirmek için tasarlanmış düşük seviyeli bir programlama dilidir.
Başka bir deyişle, programcıların birleri ve sıfırları manuel olarak saymasına gerek kalmaması için makine kodunun üzerinde insan tarafından okunabilen bir soyutlamadır.

_One-to-one_ ifadesi, Türkçe'ye _birbiriyle bire bir eşleşme_ olarak çevrilebilir. Assembly dili ve makine kodu bağlamında bu terim, her bir assembly komutunun 
tam olarak bir makine kodu talimatına karşılık gelip gelmediğini ifade eder.

Daha Detaylı Açıklama:

  **Bire Bir Eşleşme:**
      Eğer bir assembly dilinde yazılan her bir komut, doğrudan ve tam olarak bir makine kodu talimatı ile eşleşiyorsa, buna `one-to-one` eşleşme denir. 
      Yani, her assembly komutu için sadece bir makine kodu talimatı vardır.
    
  **Güçlü Ama Bire Bir Değil:**
     Assembly dilindeki bazı komutların birden fazla makine kodu talimatına dönüşebileceği veya bir makine kodu talimatının birden fazla assembly komutuyla temsil edilebileceği 
     anlamına gelir. Bir assembly komutu, belirli bir işlem için daha karmaşık bir makine kodu talimatı gerektirebilir. Veya bir makine kodu talimatı, farklı durumlarda farklı 
     assembly komutları ile temsil edilebilir.

_One-to-one_ ifadesi, bir assembly komutunun doğrudan bir makine kodu talimatı ile eşleşip eşleşmediğini belirtir. 
Bu bağlamda, güçlü bir ilişki olsa da, her zaman bire bir bir eşleşme söz konusu olmayabilir, bu da dilin esnekliğini ve karmaşıklığını artırır.

#### Assembly Kodunun Sistemler Arasında ki Çalışma Farklılıkları

1. **Kodun İşlemci Mimarisine Göre Çalışıp Çalışmaması Durumu:**

Bir mimariye özgü yazılmış assembly kodu farklı bir mimaride çalışamaz. Bu da assembly dilini taşınılabilir yapmaz.
Örneğin x86 mimarisi kullanan bir cihaz da yazılmış olan bir assembly kodu, ARM mimarisi kullanan bir cihaz da çalışamaz

2. **Kodun İşletim Sitemine Göre Çalışıp Çalışmaması Durumu:**

Bunu etkileyen bazı fakörler:

- Sistem çağrı numaraları
- Calling Convention (stdcall, cdecl, fastcall vb. (bunlar calling convention türleridir)) fonksiyonların parametrelerinin ve argümanlarının çağrılma konvansiyonu
- Parametre geçişleri örneğin Linux System V ABI kullanır. MacOS ise Mach-O ABI kullanır. Bu ABI'ler, sistem çağrılarının ve fonksiyon çağrılarının nasıl yapılacağını, parametrelerin nasıl iletileceğini ve dönüş değerlerinin nasıl alınacağın belirler.
- Assembler farklılıkları (GAS(GNU Assembler), NASM) GAS AT&T syntax'iını kullanır NASM intel syntax'ini kullanır.
- İşletim sistemi konvansiyon Standartları
- İşletim sistemi API'lerine ve kütüphanelere erişim yöntemi farklılıkları.
- Bellek yönetim şekilleri ve adresleme farklılıkları.


1. **Sistem Çağrıları**

Sistem çağrısı, bir programın işletim sisteminin çekirdeğine (kernel) erişmek ve onun sunduğu hizmetleri kullanmak için başvurduğu bir mekanizmadır.
Kullanıcı modunda çalışan bir program, dosya açma, okuma, yazma, ağ bağlantısı kurma gibi donanım veya sistem kaynaklarına erişemez. 
Bu tür işlemler güvenliğin sağlanması amacıyla işletim sistemi çekirdeği tarafından yönetilir. Sistem çağrıları, uygulamaların bu çekirdek hizmetlerine erişmelerini sağlayan 
kontrollü bir yoldur.

Bir sistem çağrısı yapılırken, program çekirdek moduna geçer ve ardından gerekli işlemi gerçekleştirdikten sonra tekrar kullanıcı moduna döner. 
Bu geçiş süreci genellikle bir kesme (interrupt) ya da sistem çağrısı talimatı (syscall instruction) ile sağlanır.

- **Çağrı Numarası**: Sistem çağrısı yaparken, işlemcinin belirli bir kaydına (register) hangi çekirdek işleminin yapılması gerektiğini gösteren bir sistem çağrısı numarası yerleştirilir.
- **Parametreler**: İşlemin gerçekleştirilmesi için gereken veriler ve parametreler diğer kayıtlara yüklenir.
- **Sistem Çağrısını Başlatma**: int 0x80 (32-bit Linux) veya syscall (64-bit Linux ve bazı diğer sistemlerde) gibi bir talimat ile çağrı yapılır.
- **Sonuç**: Çekirdek işlemi tamamlayıp sonucu döndürür ve kontrol tekrar kullanıcı moduna geçer.

Sistem çağrısı numaraları işletim sistemine göre farklılık gösterir çünkü her işletim sistemi, kendi çekirdek tasarımına ve ihtiyaçlarına göre bu çağrıları tanımlar ve sıralar.
Bu yüzden Linux, macOS, Windows gibi işletim sistemlerinde aynı işleve sahip sistem çağrıları farklı numaralara sahip olabilir.

Örneğin:

	Linux: sys_write çağrısı 32-bit Linux sistemlerde 1 numarasına sahiptir.
	macOS: Aynı write çağrısı için macOS'ta 4 numarası kullanılır.

Bu farklılıkların nedeni, her işletim sisteminin kendi sistem çağrısı tablosuna ve iç organizasyonuna sahip olmasıdır. 
Her işletim sistemi çekirdeği kendi sistem çağrı numaralarını tanımlarken kendi öncelik ve ihtiyaçlarını gözetir. 
Örneğin, Linux, dosya işlemlerini başlangıçta tanımlarken, macOS başka bir işlevi öncelikli hale getirmiş olabilir.

**Sistem çağrıları standart olmadığından:**

  Çekirdek Tasarımı ve Geliştirme Farklılıkları: İşletim sistemleri farklı çekirdek mimarilerine ve iç tasarıma sahiptir. Linux ve macOS gibi Unix benzeri sistemler bile bu 
  numaralar konusunda farklı tasarımlara sahip olabilirler.
  Taşınabilirlikten Çok Performansa Odaklanma: Sistem çağrıları düşük seviyeli işlemler olduğundan, işletim sistemi geliştiricileri taşınabilirlikten ziyade kendi sistemlerinin 
  performansına ve güvenliğine öncelik verirler. Bu nedenle, sistem çağrılarının standart hale getirilmesi beklenmez.
  Farklı İşlevlere Sahip Olma: Her işletim sisteminin sağladığı fonksiyonlar ve yetenekler aynı değildir. Bu nedenle bazı sistem çağrıları belirli bir işletim sistemine özgü 
  olabilir.

Sistem çağrıları, uygulamaların işletim sisteminin çekirdek işlevlerini kullanmasını sağlayan yöntemlerdir. Sistem çağrı numaraları, işletim sistemine özgüdür ve standart 
değildir; çünkü her işletim sistemi çekirdeği, sistem çağrılarını kendi ihtiyaçlarına göre sıralar ve tanımlar. Bu farklılık, işletim sistemlerinin özgün çekirdek 
tasarımından kaynaklanır ve bir sistemdeki sistem çağrı numaraları başka bir sistemdekiyle aynı olmak zorunda değildir.


2. **Calling Convention (Çağrı Konvansiyonları)**

Calling convention, bir programın fonksiyonları nasıl çağırdığı ve bu çağrılar sırasında parametrelerin nasıl iletildiği, geri dönüş değerlerinin nasıl alındığı gibi konuları 
tanımlayan bir dizi kural ve protokoldür (konvansiyon). Bu, programın farklı bileşenleri (örneğin, derleyici, link'leme ve runtime'da) arasında tutarlılığı sağlamak için 
önemlidir. Calling convention'lar, yazılım geliştirme sürecinde işlevlerin ve prosedürlerin doğru bir şekilde çağrılmasını ve yönetilmesini sağlar. 

Calling convention'lar, aşağıdaki unsurları içerir:

  **Parametrelerin Geçişi:**
      Kayıtlar: Parametreler, işlemci kayıtları (register) üzerinden geçilebilir. Örneğin, bazı calling convention'lar ilk birkaç parametreyi belirli kayıtlara yerleştirir.
      Yığın: Parametreler yığının (stack) üstüne itilebilir. Bu yöntem genellikle daha fazla parametre gerektiğinde kullanılır.

  **Stack Cleanup:**
      Fonksiyon çağrıldığında, yığın alanı nasıl temizlenecek? Çağıran fonksiyon mu yoksa çağrılan fonksiyon mu yığını temizleyecek? Bu, calling convention'a göre değişir.

  **Dönüş Değeri:**
      Fonksiyonun döndürdüğü değer nerede saklanacak? Genellikle, dönüş değerleri bir kayıt (örneğin, RAX kaydı x86-64 mimarisinde) üzerinden iletilir.

  **Fonksiyon İçi İşlemler:**
      Fonksiyon içinde yerel değişkenlerin nasıl tanımlanacağı ve yönetileceği de calling convention kapsamında belirlenir.


Calling convention türlerine örnek olarak:

- **cdecl (c declaration):** C dilinde yaygın olarak kullanılır. Parametreler yığına itilir ve çağıran fonksiyon yığını temizler. Dönüş değeri genellikle RAX kaydında saklanır.
- **stdcall:** Windows API'lerinde yaygın olarak kullanılır. Parametreler yığına itilir, ancak çağrılan fonksiyon yığını temizler. Dönüş değeri yine RAX kaydında saklanır.
- **fastcall:** İlk birkaç parametre kayıtlar (örneğin, ECX ve EDX) üzerinden geçer; geri kalan parametreler yığına itilir. Daha hızlı çağrılar yapmak için tasarlanmıştır.
- **System V ABI:** x86-64 mimarisinde Linux için kullanılır. İlk altı parametre sırasıyla RDI, RSI, RDX, R10, R8 ve R9'a yerleştirilir. Dönüş değeri genellikle RAX kaydında saklanır.
- **Mach-O ABI:** Mach-O ABI'yi kullanan macOS ve iOS için tipik olarak System V ABI'ye benzer bir calling convention uygulanır. İlk altı parametre sırasıyla RDI, RSI, RDX, R10, R8 ve R9'a yerleştirilir. Geri dönüş değeri genellikle RAX kaydında saklanır. Bazı farklılıkları mevcuttur System V ABI'ye göre.


2.1. **Parametre Geçişleri**

Parametre geçişi, bir fonksiyonun çağrıldığı sırada, fonksiyona iletilen argümanların nasıl aktarılacağını belirleyen bir süreçtir. 
Calling convention’a bağlı olarak, bu geçiş çeşitli yöntemlerle yapılabilir.

**Register Üzerinden Geçiş:**

İlk birkaç parametre, işlemci kayıtları (registers) üzerinden iletilir. Bu yöntem, parametrelerin yığına (stack) göre daha hızlı erişilmesini sağlar.
x86-64 System V ABI için, ilk altı tam sayı veya işaretçi (pointer) türündeki parametre, sırasıyla aşağıdaki kayıtlara yerleştirilir:
        
  - **RDI**: İlk parametre
  - **RSI**: İkinci parametre
  - **RDX**: Üçüncü parametre
  - **R10**: Dördüncü parametre
  - **R8**: Beşinci parametre
  - **R9**: Altıncı parametre

Yeterli kayıt yoksa veya daha fazla parametre varsa, geri kalan parametreler yığına itilir.
    
**Yığın (Stack) Üzerinden Geçiş:**

Kayıtlarla geçilemeyen veya daha fazla parametre olması durumunda, parametreler yığına itilir. Yığın, çağrılan fonksiyonun yerel değişkenlerini ve parametrelerini saklamak için 
kullanılır. Parametreler yığına itilirken, son giren ilk çıkar (last-in, first-out (LIFO)) prensibiyle çalışır. Yani, en son eklenen parametre, en önce çıkar.
Yığın pointer'ı (RSP) bu işlem sırasında güncellenir.
    
Örnek (Aşağıda gerçekleştirilen register işlemleri arkaplanda ki parametre geçişlerinin gerçeğini yansıtmayabilir sebebi bunun kullanılan derleyici ve platforma bağlı olmasıdır. 
Sadece konunun daha iyi anlaşılması açısından varsayımda bulunulduğu söylenebilir.)
    
Aşağıdaki C dilinde yazılmış basit bir fonksiyon ve onun nasıl çağrıldığına dair bir örnek inceleyelim:
    
```c
#include <stdio.h>

void myFunction(int a, int b, int c, int d) 
{
  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);
}

int main()
{
  myFunction(1, 2, 3, 4);
  return 0;
}
```

Fonksiyon Tanımı: myFunction dört tane int parametresi alır. İlk üç parametre RDI, RSI, RDX kayıtlarına yerleştirilirken, dördüncü parametre (d) yığına yerleştirilir.

Bu fonksiyon çağrıldığında, derleyici şu şekilde bir işlem yapar:
    
	RDI kaydına 1 yazılır (ilk parametre).
	RSI kaydına 2 yazılır (ikinci parametre).
	RDX kaydına 3 yazılır (üçüncü parametre).
	Dördüncü parametre (d) için yığına bir alan ayrılır ve 4 değeri buraya yazılır.

**Yığın Kullanımı**

Fonksiyon çağrıldığında, yığın pointer'ı (RSP) güncellenir:
    
RSP, dördüncü parametre için yığının üst kısmına işaret eder.
Fonksiyon myFunction çalıştıktan sonra, yığın temizlenir ve yığın pointer'ı eski konumuna döner.

Fonksiyonun döndürdüğü değer (örneğin, bir tam sayı), genellikle RAX kaydında saklanır. Bu sayede, çağıran fonksiyon, dönen değere kolayca erişebilir.
        
Calling convention, bir fonksiyonun nasıl çağrılacağını, parametrelerin nasıl iletileceğini ve dönüş değerlerinin nasıl alınacağını belirleyen kurallar bütünüdür.
Farklı platformlar, derleyiciler ve işletim sistemleri farklı calling convention'lar kullanabilir. Bu nedenle, bir programı geliştirirken veya farklı diller ve kütüphanelerle
çalışırken calling convention'ların anlaşılması önemlidir.


3. **Assembler Farklılıkları**

Farklı assembler (montaj programları) kullanıldığında bazı önemli farklılıklar ortaya çıkar. Bu farklılıklar, kodun yazımı, derlenmesi ve çalıştırılması üzerinde etkili olabilir.

Farklı assembler’lar, farklı sözdizimleri kullanabilir.

Örneğin:

  	GAS (GNU Assembler): AT&T sözdizimini kullanır.
  	NASM (Netwide Assembler): Intel sözdizimini kullanır.

Bu sözdizimsel farklılıklar, aynı işlemci mimarisine sahip sistemlerde bile assembly kodunun yazılışını ve derlenmesini etkiler.

Örnek Sözdizimi Farklılıkları:

- **GAS AT&T (Hedeften önce kaynak):**

```asm
movl %eax, %ebx   ; EAX içeriğini EBX'e kopyala
```


- **NASM Intel (Kaynaktan önce hedef):**

```asm
mov ebx, eax      ; EAX içeriğini EBX'e kopyala
```

Bu iki sözdizimi, komutların yazımını ve parametrelerin sırasını etkiler. Örneğin, AT&T sözdiziminde kaynak ve hedef sıralaması farklıdır.


4. **İşletim Sistemi Konvansiyon Standartları**

Örnek olarak `global _main` ifadesinin macOS'ta, `global _start` ifadesinin ise Linux'ta kullanılmasının sebepleri, işletim sistemlerinin yükleme ve başlatma (initialization) 
süreçlerinde kullanılan konvansiyonlardan ve standartlardan kaynaklanmaktadır.

**macOS:**

`_main`: macOS uygulamaları genellikle bir C runtime (çalışma zamanı) ortamı altında başlar. Bu nedenle, uygulama çalıştırıldığında işletim sistemi, main fonksiyonunu çağırmadan 
önce gerekli başlangıç işlemlerini (örn. bellek ayırma, dosya sistemi hazırlığı) yapar.

Uygulama kodunda `global _main` ifadesi kullanıldığında, assembler (montaj programı) bu fonksiyonu dışarıdan erişilebilir hale getirir, böylece işletim sistemi program çalıştığında 
main fonksiyonunu çağırabilir. macOS'da, uygulama başlamadan önce bir C kütüphane başlatıcısı (startup routine) kullanılır, bu da main fonksiyonunun başlangıç noktası olarak 
belirlenmesini sağlar.


**Linux:**

`_start`: Linux'ta ise, uygulamalar doğrudan `_start` isimli bir etiketle başlar. Bu, işletim sisteminin doğrudan uygulama kodunun giriş noktasına atlaması anlamına gelir.
    
`_start` etiketi genellikle, işletim sisteminin C runtime'ı başlatmadan önce yaptığı bazı temel hazırlık işlemlerini içerir. Örneğin, yığın (stack) ve yığın göstergesi 
(stack pointer) gibi bazı temel yapılandırmalar yapılır.
    
İşletim sistemi, `_start` etiketi ile başlarken, C kütüphanesi main fonksiyonunu çağırmadan önce gerekli tüm başlatma işlemlerini (örneğin, sistem çağrılarına erişim ve çevre 
değişkenlerinin hazırlanması) yapar.
    

**Kütüphane ve Runtime Farklılıkları**

macOS, genellikle C tabanlı uygulamaları başlatmak için `libSystem.dylib` veya `libc.dylib` kütüphanesini kullanırken, Linux, `glibc` kütüphanesini kullanır.
Bu farklı kütüphane yapılandırmaları, başlatma sürecinin nasıl yürütüleceğini ve hangi etiketlerin kullanılacağını etkiler.
    
    
    
**Yükleme ve Çalışma Zamanı Ortamları**

macOS: macOS uygulamaları genellikle Cocoa veya Cocoa Touch gibi yüksek seviyeli çerçevelerle etkileşim halindedir, bu da başlatma sürecinin daha karmaşık olmasını sağlar.
Linux: Linux'ta ise uygulama daha doğrudan sistem kaynaklarına erişir, bu da daha düşük seviyeli bir etkileşim gerektirir.
    
    
    
- `global _main` ve `global _start` ifadeleri, macOS ve Linux'un uygulama başlatma konvansiyonlarından kaynaklanmaktadır.
- macOS'da main fonksiyonu bir C çalışma zamanı ile çağrılırken, Linux'ta `_start` etiketi doğrudan işletim sistemi tarafından çağrılır.
- Her iki işletim sistemi de kendi kütüphane yapılandırmalarını ve başlatma süreçlerini kullanarak uygulamaların başlangıç noktalarını belirler.
Bu farklılıklar, sistem çağrıları, bellek yönetimi ve uygulama başlatma süreçleri gibi konularda önemli etkilere sahiptir.

Örneğin aşağıda ki assembly kodunu Linux sisteminde çalıştırmaya kalkışırsak:

```asm
section .data
msg: db "Selam", 0xA

section .text
    global _main

_main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 5
	syscall
	mov rax, 60
	mov rdi, 0
	syscall
```

**Linux sisteminde link'leme yapılırken alınan bir hata:**

```
ld: warning: cannot find entry symbol _start; defaulting to 0000000000702000
```

Bu hata, linker (bağlayıcı) programının, yürütülebilir dosyanın giriş noktasını (entry point) belirlemekte zorlandığını gösteriyor. 
Linker, bir programın başlama noktasını tanımlayan bir etiket arar. Bu noktaya genellikle `_start` adı verilir. Kodunuzda `_start` etiketi tanımlı değil, 
bu nedenle linker varsayılan olarak giriş noktası olarak `0x0000000000702000` adresini kullanıyor.


Kodunuzun başlangıcında `_start` etiketini tanımlayarak, işletim sisteminin uygulamanızın başlangıç noktasını bilmesini sağlamalısınız. `_start`, 
işletim sisteminin uygulamayı başlattığında ilk olarak ulaşacağı yer olacaktır.

**Neden `_start`**

- Tamamıyla işletim sisteminin tasarımında ki konvansiyon ile ilgidir. 

- `_start`, genellikle işletim sisteminin uygulamanızı başlatırken ilk olarak çağırdığı etikettir. Bu etiketin bulunmaması durumunda, linker hatası ile karşılaşırsınız.

Bu gibi faktörler yazılan assembly kodunun farklı bir sistem de çalışmamasına sebebiyet verebilir.

---

## :two: CPU'da ki Register'lar Nedir?

CPU'daki register'lar (kayıtlar), işlemcinin içerisinde bulunan ve çok hızlı veri depolayan küçük bellek alanlarıdır. Bu register'lar, CPU'nun işlediği verileri geçici olarak saklar ve doğrudan erişim sağlar. İşlemcinin en hızlı çalışan bileşenlerinden biri olarak, register'lar CPU'nun verileri işlemesinde büyük bir rol oynar ve işlem sırasında anında erişim gereken bilgiler burada tutulur.

Register'ların Özellikleri:

    Çok hızlıdırlar: Register'lar, CPU'nun diğer hafıza türlerinden (RAM, önbellek gibi) çok daha hızlı çalışır, çünkü doğrudan işlemci çekirdeği ile bağlantılıdırlar.
    Küçük boyutludurlar: Register'lar, kapasite açısından oldukça küçüktür. Genellikle sadece birkaç byte tutabilirler.
    Geçici depolama sağlarlar: Veriler yalnızca kısa bir süre (işlem süresi boyunca) register'da tutulur; bir sonraki işlemde yeni verilerle değiştirilirler.


CPU'nun içerisinde birkaç farklı sınıfta register'lar bulunur ve bunların özel bir işlevi vardır. Her işlemci mimarisi, tasarımında farklı amaçlara hizmet eden farklı sayıda ve türde register içerir:

	1. 8086 (16 Bit) 
	Toplam Register Sayısı: 14 register 
	Genel Amaçlı: 4 (AX, BX, CX, DX) 
	Pointer ve Index: 4 (SP, BP, SI, DI) 
	Segment: 4 (CS, DS, SS, ES)
	Diğer: 2 (IP, FLAGS)


	2. x86-32 (32 Bit)
	Toplam Register Sayısı: 16 register
	Genel Amaçlı: 8 (EAX, EBX, ECX, EDX, ESI, EDI, EBP, ESP)
	Segment: 6 (CS, DS, SS, ES, FS, GS) </br>
	Diğer: 2 (EIP, EFLAGS) </br>


	3. x86-64 (64 Bit)
	Toplam Register Sayısı: 22 register
	Genel Amaçlı: 16 (RAX, RBX, RCX, RDX, RSI, RDI, RBP, RSP, R8, R9, R10, R11, R12, R13, R14, R15)
	Segment: 6 (CS, DS, SS, ES, FS, GS)
	Diğer: 2 (RIP, RFLAGS)


8086'dan x86-32'ye geçişte genel amaçlı register sayısı artmıştır (4'ten 8'e). Bu, daha fazla veri işleme yeteneği sağlar.
x86'dan x86-64'e geçişte ise genel amaçlı register sayısı daha da artmıştır (8'den 16'ya). Bu da 64 bit işlem yapabilme ve daha fazla veri iletimi sağlar.

Daha yeni mimariler, daha fazla genel amaçlı register, genişletilmiş adresleme yetenekleri ve daha fazla iş parçacığı desteği sunar. Örneğin, x86-64 mimarisi, işlemci performansını artırmak için birden fazla ek register içerir (R8, R9, R10, R11, R12, R13, R14, R15).
Bu nedenle, işlemci mimarisi geliştikçe, register sayısı ve fonksiyonları genellikle artar, bu da işlemci performansını ve veri işleme yeteneklerini artırır.


Genel olarak register'lar bu şekilde sınıflandırılabilir. Yukarı da mimari geliştikçe register'larda da olan değişimler gözlemlenebilir. Ancak geliştikçe amaçların benzer kaldığı söylenebilir. 

### **Genel Amaçlı Register'lar (General Purpose Registers - GPRs):**
Bu register'lar, aritmetik işlemler, mantıksal işlemler veya veri geçişi gibi genel görevler için kullanılır.
Yukarı da genel amaçlı register sayısı, mimari geliştikçe arttığı gözlemlenebilir.
Genel amaçlı register'ların bazıları bazı durumlarda özel bir amaca hizmet etmek için kullanılır. Mimari geliştikçe örneğin 8086'da ki Pointer ve Index Register'ları sonra ki mimari de genel amaçlı hale gelip genel amaçlı bir şekilde kullanılabilirken bazı durumlarda halen kendi amaçları için de kullanılabiliyorlar:

   1. **Adres Register'lar:**
   Bellekteki belirli bir adrese işaret eden register'lardır. Bellek adreslerinin saklanması ve işlenmesi için kullanılır.
   Örnek: SP (Stack Pointer), BP (Base Pointer) gibi register'lar bellek yığınlarının yönetimi için kullanılır. 
   Daha sonra ki mimarilerde bunlar genel amaçlı hale genişletilmiştir (ESP, EBP (32-bit), RSP, RBP (x86-64)).

      1. **Yığın Gösterici (Stack Pointer - SP):**
         
         Yığın (stack) işlemlerini yöneten bir register'dır. Yığın, fonksiyon çağrılarında, yerel değişkenlerde ve geçici verilerin tutulduğu özel bir bellektir. Stack Pointer, yığının en son kullanılan öğesinin adresini gösterir.
         
         Örnek: SP veya RSP (64-bit sistemlerde).
         
      2. **Baz Pointer (Base Pointer - BP):**
     
         Yığın işlemleri sırasında sabit bir referans noktası sağlar. Özellikle alt programların (fonksiyonlar) çağrıları sırasında kullanılır.
		
		 Örnek: EBP (32-bit sistemlerde), RBP (64-bit sistemlerde).

   2. **Index Register'lar:**
       Indeks register'lar, programların bellekle etkileşiminde ve veri yapılarını yönetmesinde kritik bir rol oynar.
       	Genelde sistem çağrısı parametre geçişlerinde ABI standardına göre rol oynarlar. Genel olarak en çok bilinen index register'ları SI ve DI'dir. Ancak bunlar mimariden mimariye parametre geçişlerinde artış göstermiştir.       
       	Örneğin x86-64 mimarisinde, register'lar hem genel amaçlı olarak kullanılabilir hem de bazı özel görevler için atanmış olabilir. Özel olarak belirlenmesi mimariye göredir. Parametre geçişlerinde bunların sıralaması da işletim sisteminin kullandığı ABI konvansiyonuna göredir. Aşağıda en yaygın olanlar ve işlevleri yer alıyor:

         1. **RDI (Register Destination Index):**
            RDI, genellikle dizilerdeki veri üzerinde işlem yaparken hedef (destination) dizin olarak kullanılır. Fonksiyonlara parametre geçişinde, ilk parametre genellikle RDI register'ına atanır. Fonksiyon çağrılarında, çağrılan fonksiyona verilen ilk argüman bu register'da bulunur.
            
         2. **RSI (Register Source Index):**
            RSI, genellikle dizilerdeki kaynak (source) dizin olarak kullanılır. Bellekten veri okuma ve yazma işlemleri sırasında veri adresi göstergesi olabilir.
            Fonksiyon çağrılarında, ikinci argüman olarak kullanılır.
         
   3. **x86-64 mimarisin de RDX ve özel ekstra genel amaçlı register'lar (R8 - R15):**
     	R8 ile R15 register'ları, x86-64 mimarisi ile eklenmiş ekstra genel amaçlı register'lardır. Bu register'lar 64-bit veri depolayabilir ve fonksiyon çağrılarında argümanların taşınması için kullanılabilirler. Bazılarının sistem çağrılarında parametre geçişlerinde rolü de vardır.

	    _İşletim sisteminin kullandığı ABI'ye göre sistem çağrılarında ki parametre geçişlerinde ki sıralama (Örneğin Linux x86-64 ABI'ye göre):_

	    **RDI**: Fonksiyona iletilen ilk parametre bu register'da tutulur. </br>
	    **RSI**: Fonksiyona iletilen ikinci parametre burada yer alır. </br>
	    **RDX**: Üçüncü parametre için kullanılır. </br>
	    **R10**: Dördüncü parametre için kullanılır. </br>
	    **R8**: Beşinci parametre için kullanılır. </br>
	    **R9**: Altıncı parametre için kullanılır. </br>
		
	    _Fonksiyon çağrılarında ki sıralama:_
		
	    **RDI**: Fonksiyona iletilen ilk parametre bu register'da tutulur. </br>
	    **RSI**: Fonksiyona iletilen ikinci parametre burada yer alır. </br>
	    **RDX**: Üçüncü parametre için kullanılır. </br>
	    **RCX**: Dördüncü parametre için kullanılır. </br>
	    **R8**: Beşinci parametre için kullanılır. </br>
	    **R9**: Altıncı parametre için kullanılır. </br>

### Bazı Genel Amaçlı Register'ların Özel Durumlarına Detaylı Bakış

Register'lar, genel amaçlı register (GPR) olarak adlandırılsalar da, bazı belirli durumlar için özel kullanımları vardır.

Genel amaçlı register'lar, kullanıcı tarafından istenilen şekilde kullanılabilmesi için tasarlanmıştır. Ancak bazı konvansiyonlar, fonksiyonların ve sistem çağrılarının daha tutarlı bir şekilde işlenmesini sağlamak için belirli register'ların belirli görevleri üstlenmesini gerektirir. Bu, register'ların genel amaçlı olma niteliğini değiştirmez; daha ziyade, bu register'ların kullanımına ilişkin bir konvansiyon oluşturur. Yani, kullanıcılar bu register'ları farklı amaçlarla kullanabilir, ancak belirli standartlar ve protokoller, işlevlerin düzgün çalışmasını sağlamak için bazı register'ların belirli amaçlarla kullanılmasını önerir. Genel amaçlı olmakla belirli olmak arasındaki denge gibi bir durum söz konusudur. 

Bir sistem çağrısında hangi kaydın hangi rolü üstleneceği veya benzerleri, Application Binary Interface (ABI) denilen bir sözleşmeyle belirlenir. Linux için bu, x86_64 System V ABI sözleşmesiyle tanımlanmıştır. Bu ABI, kullanıcı modundaki programlar ile işletim sisteminin çekirdeği arasında bir arayüz sunar ve sistem çağrılarında hangi kaydın hangi amaçla kullanılacağını standartlaştırır.

Farklı mimari ve işletim sistemlerinde bu kayıt düzeni farklılık gösterebilir. Örneğin, ARM mimarisinde sistem çağrıları için farklı kayıtlarda veri taşınır. Bunun nedeni, her mimarinin donanımsal yapısının farklı olması ve dolayısıyla sistem çağrıları için en uygun kaydın, işlemci mimarisinin özelliklerine göre değişiklik göstermesidir.

Bazı register'lar belirli durumlar için standardize edilmiştir, bu da onların belirli bir işlevi yerine getirmek için tercih edilmesini sağlar. 

Örneğin Linux x86-64 baz alınırsa:

1. **RDI ve RSI:**
Fonksiyon ve sistem çağrılarında sırasıyla ilk ve ikinci parametre olarak kullanılırlar. Bu, belirli bir düzenin sağlanmasını ve yazılımların çalışmasını kolaylaştırır.
Yani, RDI ve RSI, fonksiyon ve sistem çarğıları için bir konvansiyon olarak kullanılır.
  
**Sistem Çağrıları için Kullanımları**

Örnek:

```asm
section .data
msg: db "selam", 0xa ; "0xa" yeni satıra geçmesi için. "\n" gibi düşünülebilir.

section .text
global _start

_start:
	mov rax, 1 		; sys_write çağrısı
	mov rdi, 1 		; sys_write parametre geçiş konvansiyonuna göre ilk argümana yapılan atama
	mov rsi, msg 	; aynısının ikinci argümana uygulanışı
	mov rdx, 5 		; aynısının üçüncü argümana uygulanışı
	syscall 		; Sistem çağrısı yapmak için çekirdeği tetikleme talimatı

	mov rax, 60 	; sys_exit çağrısı
	mov rdi, 0 		; sys_exit için ilk parametreye geçiş için gerekli atama
	syscall
```

Şayet konvansiyona uygun bir şekilde parametre geçişleri sağlanırsa programın çalıştığı gözlemlenebilir. Ancak örneğin konvansiyona uymayacak şekilde bir düzenleme yaparsak `mov rdi, 1`, `rdi` register'ı yerine `rbx` register'ını, `mov rsi, msg` yerine de `rcx` register'ını kullanırsak bu sefer çıktının basılmadığını görmüş olacağız.

>[!WARNING]
> Register'lara atanan değerler kaldığından yukarıda çalıştırılan örnek şayet ilk örnek olursa ve daha sonra register'ları konvansiyona uymayacak şekilde değiştirip tekrar programı çalıştırırsanız program yine `selam` çıktısını basacaktır. Bunun sebebi halen `rsi` ve `rdi` register'ların da atanan değerlerin bulunuyor olmasıdır **(1 ve msg değerleri)**. Konvansiyona uymayacak şekilde değiştirmeden önce `rsi` ve `rdi` değerlerine sys_write parametrelerine uymayacak başka değerler atayın ve daha sonra farklı register'ları deneyin. Ya da bu durumun yaşanmaması için farklı register'lar kullanmak yerine direkt olarak `rdi` ile `rsi` register'larının yerini değiştirin. Yani `mov rsi, 1` ve `mov rdi, msg` yaparak sıralamalarını değiştiriyoruz ve böylece konvansiyona uygun bir şekilde atamalar yapmadığımızdan programın çıktı vermediğini gözlemliyoruz.


**Fonksiyon Çağrıları için kullanımları**

**sum.s:**

```asm
; sum.s - Assembly fonksiyonu

section .text
    global sum   ; C kodundan erişim için global olarak tanımlıyoruz

sum:
    ; İlk argüman `rdi`'de, ikinci argüman `rsi`'de olacak
    mov rax, rdi         ; İlk argümanı `rax` kaydına kopyala
    add rax, rsi         ; İkinci argümanı `rax` ile topla
    ret                  ; Sonucu `rax`'da döndürür

```
**main.c:**
```c
// main.c - C programı

#include <stdio.h>

// Assembly fonksiyonunu burada bildiriyoruz
extern long sum(long a, long b);

int main() {
    long a = 5;
    long b = 10;

    long result = sum(a, b);  // `sum` fonksiyonunu çağırıyoruz

    printf("Result: %ld\n", result);  // Sonucu yazdırıyoruz
    return 0;
}
```

**Derleme Adımları:**

Assembly dosyasını nesne dosyasına çevirin:
```
nasm -f elf64 -o sum.o sum.s
```

C kodunu nesne dosyasıyla birlikte derleyin:
```
gcc -no-pie -o main main.c sum.o
```

Programı çalıştırın:
```
./main
```

Burada derleyecinin rolü önemli. Değerleri nereden alacağını konvansiyona göre o biliyor ve böylece C dosyasında atanan değerleri `rdi` ve `rsi` register'larından alıp geri kalan işlemi C kodu yapıyor. `sum.s` dosyasında `rdi` değerini farkli bir register ile değiştirirsek (örneğin `rbx` (mov rax, rbx) şeklinde) ve tekrardan derleme işlemlerini yaparsak sonucun `10` olacağını gözlemleyebiliriz.


2. **RAX**

**Sistem çağrısı numarasını belirtmek için**

Sistem çağrısı numarasını belirtmek için kullanılır. Çekirdek bu kayıttaki değeri okuyarak hangi sistem çağrısının yapılması gerektiğini anlar.

Örnek:

```asm
section .data
msg: db "selam", 0xa ; "0xa" yeni satıra geçmesi için. "\n" gibi düşünülebilir.

section .text
global _start

_start:
	mov rax, 1 ; sys_write çağrısı
	mov rdi, 1 ; sys_write parametre geçiş konvansiyonuna göre ilk argümana yapılan atama
	mov rsi, msg ; aynısının ikinci argümana uygulanışı
	mov rdx, 5 ; aynısının üçüncü argümana uygulanışı
	syscall ; Sistem çağrısı yapmak için çekirdeği tetikleme talimatı

	mov rax, 60 ; sys_exit çağrısı
	mov rdi, 0 ; sys_exit için ilk parametreye geçiş için gerekli atama
	syscall
```

`_start:` etiketinden sonra ki ilk 5 satır `rax` register'ına işlem yapılacak sistem çağrısının numarası atanarak _(sys_write)_ ve gerekli parametre geçişleri yapılarak `syscall` talimatı ile çekirdeğe sistem çağrısı yapılacağı söyleniyor. Aslında ilk 5 satır C'sel düşünürsek `ssize_t write(int fd, const void *buf, size_t count);` burada ki prototipin Assembly'ce çağrılma şekli. Daha sonra ki 3 satır ise programı sonlandırmak için `sys_exit` sistem çağrısının çağrılışı. Bu da yine C'sel düşünürsek `void exit(int status);` burada ki prototipin Assembly'ce çağrılma şekli.

**Dönüş Değeri Olarak**
Genellikle bir fonksiyondan dönen değer için kullanılır. Yani, fonksiyon sonuçlarının saklanması için belirlenmiş bir register'dır.
RAX, genel amaçlı bir register olmasına rağmen, geri dönüş değerleri için bir standart oluşturulmuştur.
Çekirdek, işlem tamamlandıktan sonra dönen değeri yine rax kaydına yazar. Bu, başarılı veya başarısız bir sonucun kullanıcı moduna döndürülmesini sağlar.

Örnek:

Yukarıda ki örneği geliştirerek geri dönüş değerinin gerçekten `rax`a dönüp dönmediğini teyit edelim;

```asm
section .data
    msg db 'Hello, World!', 0xA         ; Yazılacak mesaj ve yeni satır karakteri
    msg_len equ $ - msg                 ; Mesajın uzunluğu

section .text
    global _start

_start:
    ; sys_write sistem çağrısı (yazdırma işlemi)
    mov rax, 1              ; sys_write sistem çağrısı numarası
    mov rdi, 1              ; Dosya tanımlayıcı (1 = stdout)
    mov rsi, msg            ; Yazılacak mesajın adresi
    mov rdx, msg_len        ; Mesajın uzunluğu
    syscall                 ; Sistem çağrısını yap

    ; Geri dönüş değerini kontrol et (rax'ta yazılan byte sayısı olmalı)
    cmp rax, msg_len 	    ; rax'taki değer mesaj uzunluğuna eşit mi?
    je success              ; Eşitse, başarı durumuna git
    jne fail                ; Değilse, hata durumuna git

success:
    ; Başarı durumu mesajı
    mov rax, 1              ; sys_write sistem çağrısı numarası
    mov rdi, 1              ; stdout
    mov rsi, success_msg    ; Başarı mesajının adresi
    mov rdx, success_len    ; Mesaj uzunluğu
    syscall                 ; Başarı mesajını yazdır
    jmp end                 ; Programı bitir

fail:
    ; Hata durumu mesajı
    mov rax, 1              ; sys_write sistem çağrısı numarası
    mov rdi, 1              ; stdout
    mov rsi, fail_msg       ; Hata mesajının adresi
    mov rdx, fail_len       ; Mesaj uzunluğu
    syscall                 ; Hata mesajını yazdır

end:
    ; Programdan çıkış
    mov rax, 60             ; sys_exit sistem çağrısı numarası
    xor rdi, rdi            ; Çıkış kodu (0)
    syscall

section .data
    success_msg db "Geri dönüş Değeri Eşit", 0xA
    success_len equ $ - success_msg

    fail_msg db "Geri Dönüş Değeri Eşit değil", 0xA
    fail_len equ $ - fail_msg

```

`man 2 write` ile `sys_write`ın geri dönüş değerinin ne döndürdüğüne bakacak olursak, sistem çağrısı başarılı bir şekilde çalıştığında yazılan byte sayısını döndürür. Bu kontrolü sağlamak için sistem çağrısından sonra (syscall) `rax` register'ına yazılan byte sayısının döndüğünü kontrol etmek olacaktır. Bu kontrolü de `cmp`, `je` ve `jne` gibi talimatların kombinasyonu ile sağlayabiliriz. `cmp rax, msg_len` satırı bu şekilde olursa dönen değerin uzunkuğu mesajın uzunluk sayısına eşit olacağından `success` etiketine zıplanacaktır ve gerekli mesaj basılıp program sonlanacaktır. Lakin `msg_len` değeri yerine mesajın uzunluğuna eşit olmayacak şekilde bir byte sayısı girilirse şayet `fail` etiketine zıplanılıp gerekli mesaj yazıldıktan sonra program sonlanacaktır. Burada `sys_write` çalıştıktan sonra geri dönüş değerinin `rax` register'ına döndüğünü bu şekilde teyit etmiş oluyoruz.

3. **RSP ve RBP**

rsp ve rbp, fonksiyonun yığın çerçevesine erişmek için kullanılır. rsp, yığının en üstündeki adresi gösterirken; rbp, yığın çerçevesinin tabanını gösterir. 
Bu register'lar, fonksiyon içindeki parametrelere ve yerel değişkenlere erişim sağlar. Örneğin, rbp kullanılarak yerel değişkenlere belirli bir ofset ile erişilir.

Register sayısı sınırlı olduğundan ciddi programlarda verileri saklamak yetersiz kalabiliyor. Buna çözüm olarak verileri stack gibi bölümlerde tutarak verileri geçici olarak saklayabiliriz. Bu sayede hem sınırlı register sorununu çözebilir hem de veriyi stack bölümüne gönderebilir ve gerektiğinde alabiliriz. 
`rsp` ve `rbp` register'ları, özellikle fonksiyon çağrıları ve yığın (stack) işlemleri sırasında özel olarak kullanılan iki register'dır. Bu register'lar, stack'deki veri düzenini koruyarak ve gerektiğinde stack'de ki verilere erişimi sağlayarak programın istikrarlı çalışmasını sağlar.

**Stack Nedir?**

Stack (yığın), bilgisayar belleğinde geçici verilerin saklandığı bir bölümdür. Özellikle fonksiyon çağrıları sırasında fonksiyon parametreleri, yerel değişkenler ve dönüş adresleri gibi verileri saklamak için kullanılır. Yığın, LIFO (Last In, First Out) mantığıyla çalışır, yani son eklenen veri ilk alınır.

**Stack Frame (Yığın Çerçevesi) Nedir?**

Bir fonksiyon çağrıldığında, bu fonksiyonun çalışması için bir yığın çerçevesi (stack frame) oluşturulur. Bu yığın çerçevesi, fonksiyonun çalışma süresi boyunca ihtiyaç duyacağı verilerin tutulduğu yerdir. Her fonksiyonun kendi stack frame'i vardır ve bu, çağrı zinciri boyunca farklı fonksiyonlar arasında izole bir bellek alanı sağlar.

Stack frame, genellikle şunları içerir:

Fonksiyonun yerel değişkenleri.
Fonksiyonun parametreleri.
Daha önceki fonksiyonun dönüş adresi (yani çağrılan fonksiyondan sonra hangi komuta geri dönüleceği).
Kayıtlı register'lar (örneğin, çağrıdan önce kaydedilen RBP, RSP gibi register'lar).

**Stack'in Büyümesi ve Küçülmesi Nedir?**

x86-64 mimarisinde stack, yüksek adreslerden düşük adreslere doğru genişler. Stack'in genişleyip küçülmesi verilerin gönderilip daha sonra alınması ile ilgilidir. Stack ters yönde büyüyor. Bu nedenle Stack tabanı işaretçisi (RBP), yığın belleğinin ucundan daha yüksek bir adrese ayarlanır ve aşağı doğru büyür. Örneğin, tahsis edilen hafıza 1200 adresinde biterse, yığın Taban İşaretçisi 1300'ü işaret ediyor olabilir ve 1200 adresine kadar büyüyecektir veya genişleyecektir (yığın 100 bayt büyüklüğünde olduğu anlamına gelir). Bunlar sadece çalışma şeklini gösteren hayali sayılar ve örneklerdir.
Önemli olan nokta öğeler stack'e gönderildikçe yığın daha yüksek adreslerden daha düşük adreslere doğru "büyür" yani "genişler".

**rsp (Stack Pointer) Register:**

rsp kaydı, stack'in en üst elemanını (yani son eklenen öğeyi) işaret eder ve "stack pointer" (yığın işaretçisi) olarak adlandırılır. Stack pointer, yığına yeni bir veri eklendiğinde veya yığından bir veri çıkarıldığında güncellenir.

**rsp Register Görevleri:**

Stack’in en üst elemanını gösterir: rsp, yığına veri eklendiğinde veya çıkarıldığında otomatik olarak güncellenir.
Yığının büyümesi ve küçülmesini yönetir: x86-64 mimarisinde, stack yüksek adreslerden düşük adreslere doğru büyür, bu yüzden stack’e her veri eklendiğinde rsp azalır, her veri çıkarıldığında ise rsp artar.

**rbp (Base Pointer) Register:**

rbp kaydı, genellikle bir fonksiyonun yığın çerçevesini (stack frame) işaret etmek için kullanılır ve "base pointer" olarak adlandırılır. Bu, stack üzerindeki verilerin (fonksiyon parametreleri ve yerel değişkenler gibi) konumunu sabitlemek için sabit bir referans noktası sağlar.

**rbp Register'ının Görevleri:**

Yığın çerçevesini işaret eder: rbp, çağrılan bir fonksiyonun yığın çerçevesinin (stack frame) başlangıcını işaret eder. Bu, fonksiyon içindeki parametreler ve yerel değişkenlere erişimi sağlar.
Sabit bir referans noktası oluşturur: rbp kaydı, fonksiyon çağrısı boyunca sabit kalır. Bu, rsp değeri değişse bile, rbp sabit kalır ve değişmez.

**`pop` ve `push` Talimatları:**

`push` talimatı: Bir değeri stack'e ekler

`pop` talimatı: Stack'in en üstündeki değeri alır

**`pop` ve `push` Talimatlarının `rsp` ve `rbp` register'ları ile ilişkisi:**

**rsp ile ilişkisi:**

push talimatı kullanıldığında bir değeri yığına ekler ve rsp kaydını otomatik olarak 8 bayt azaltır (64-bit sistemde). "Azaltma" ifadesinin nedeni, eklenen öğenin büyük adreslerden küçük adreslere doğru adreslenmesinden ve saklanmasından kaynaklı. Bir öğe eklendiğinde o öğe küçük bir adreste adresleneceğinden rsp değeri o adresi işaret eder.

pop talimatı kullanıldığında rsp yığının en üstünü işaret ettiğinden o değeri alır ve rsp kaydını 8 bayt artırır. "arttırma" ifadesinin nedeni, eklenen öğenin büyük adreslerden küçük adreslere doğru adreslenmesinden ve saklanmasından kaynaklı. Bir öğe alındığında rsp'nin işaret edeceği adres artmış büyümüş olacaktır.

Örnek:

```asm
mov rax, 10      ; rax = 10
push rax         ; rax değeri stack’e eklenir, rsp 8 bayt azalır
pop rbx          ; Stack’ten veri rbx'e alınır, rsp 8 bayt artar
```

**rbp ile ilişkisi:**

rbp register'ının `pop` ve `push` ile ilişkisi bir bakıma isteğe bağlıdır. Şayet call talimatı ile bir fonksiyon çağrısı yapıldığında eğer ki eski fonksiyonun stack çerçevesini kaybetmek istemiyorsanız (bunun nedeni eski fonksiyonun parametreleri ve yerel değişkenleri ile bir işlem yapma isteği olabilir) eski rbp değerini yani eski fonksiyonun stack çerçevesinin taban adresini stack'de saklamanız gereklidir. Bu da eski rbp değeri stack'e push'layarak yapılabilir. Çünkü Linux için `_start` MacOS için `_main` fonksiyonları yani programın ilk baş ana fonksiyonları da bir stack çerçevesi olduğundan ve bu ana fonksiyonların yerel değişkenleri ve parametrelerine erişimin kaybedilmesi istenmiyorsa şayet bir fonksiyon çağrısı yapıldığında rbp değerini saklamak gereklidir bunu da stack'de yapabiliriz. Çünkü rbp değeri programın başında herhangi bir şekilde hiç call talimatı kullanılmadıysa, rbp değeri ana fonksiyonun (_start, _main vb.) stack çerçevesininin base'ini işaret eder. Bilindiği üzere her bir program için stack'de bir alan çerçeve oluşturulur ve rbp değeri de programın başında bu ana fonksiyonun base'ini işaret ediyor.

Fonksiyon işlevini yerine getirdiğinde yani bittiğinde program akışı fonksiyonun çağrıldığı yerin bir sonra ki kısmından devam edeceği için eski fonksiyon çerçevesine geri dönmek (programın amacına göre değişir (yani yine isteğe bağlı) eğer eski fonksiyonun stack çerçevesinde ki bileşenlerle (yerel değişkenler, parametreler vb. işimiz varsa) için önceden push'lanan eski rbp değerini stack'den çekmemiz gerekiyor bunu da pop talimati ile gerçekleştirebiliriz.

Örnek:

```asm
section .text
    global _start

_start:
    call my_function       ; my_function fonksiyonunu çağır

    ; Programdan çıkış
    mov rax, 60            ; sys_exit sistem çağrısı numarası
    xor rdi, rdi           ; Çıkış kodu 0
    syscall

my_function:
    push rbp               ; Eski `rbp` değerini yığına kaydet
    mov rbp, rsp           ; `rbp`yi yeni çerçeve için `rsp`'ye sabitle

    ; Fonksiyon işlemleri (örneğin yerel değişkenler burada kullanılır)

    pop rbp                ; Eski `rbp` değerini geri yükle
    ret                    ; Geri dönüş adresine dön

```

**Fonksiyon çağrısı `call` ve `ret` talimatları**

Assembly'de bir fonksiyon çağrısı, çağrılan fonksiyonun çalışması ve sonrasında geri dönmesi için bir dizi işlemi içerir. Bu işlem genellikle şu adımları içerir:

Fonksiyonun parametrelerinin stack'e (yığın) yerleştirilmesi. </br>
Fonksiyonun geri döndüğünde programın hangi noktadan devam edeceğini bilmesi için geri dönüş adresinin saklanması. </br>
Fonksiyonun çalıştırılması. </br>
Fonksiyonun tamamlanmasıyla birlikte geri dönüş adresine dönülmesi ve sonuçların işlenmesi. </br>

Assembly dilinde, özellikle x86 mimarisinde, bir fonksiyon çağrısı sırasında yapılan işlemler çok daha açıktır. Temel olarak:

Parametreler belirli register'lar veya yığın (stack) üzerinden iletilir. </br>
Çağrılan fonksiyona gitmek için call komutu kullanılır. </br>
Fonksiyon bittikten sonra, geri dönmek için ret komutu kullanılır. </br>

Örnek:

```asm
section .data
    ; Veriler burada tanımlanabilir

section .text
    global _start   ; Program başlangıç noktası

_start:
    ; a ve b için değerler yükleniyor (örneğin 5 ve 3)
    mov rdi, 5      ; İlk parametre olarak 5'i RDI register'ına koy
    mov rsi, 3      ; İkinci parametre olarak 3'ü RSI register'ına koy

    ; add fonksiyonunu çağır
    call add        ; add fonksiyonunu çağırıyoruz

    ; Sonucu RAX register'ından alıp çıkıyoruz
    mov rdi, rax    ; Sonucu RAX'ten alıp RDI'ye koy
    mov rax, 60     ; Sistem çağrısı için 'exit' kodunu hazırla
    syscall         ; Programı sonlandır

add:
    ; Toplama işlemi: a = rdi, b = rsi
    mov rax, rdi    ; RAX'e ilk parametreyi (rdi) koy
    add rax, rsi    ; İkinci parametreyi (rsi) RAX'e ekle
    ret             ; Sonucu geri döndür (RAX'te)
```

**Detaylı Açıklama:**

**Fonksiyon Çağrısı (call):**

`call` add komutu, programın add fonksiyonuna gitmesini sağlar ve bu sırada mevcut kodun kaldığı adres yığına (stack) saklanır. Böylece, ret komutu çalıştığında bu adrese geri dönülecektir.

**Fonksiyonun Çalışması:**

add fonksiyonunda, RAX register'ına ilk parametre (RDI) yüklenir ve ardından ikinci parametre (RSI) eklenir. Sonuç yine RAX'te tutulur, çünkü fonksiyon geri döndüğünde sonuç bu register'dan okunur.
    
**Geri Dönüş (ret):**

`ret` komutu, çağrılan fonksiyondan geri dönülmesini sağlar. Yığından geri dönüş adresini alarak, programın call komutundan sonraki ilk satırına geri döner.

**Fonksiyon Çağrısının rdp ve rsp üzerinde etkisi**

bir `call` talimatı kullanıldığında sadece rsp kaydı otomatik olarak güncellenir; rbp kaydına dokunulmaz. `call` talimatı çalıştırıldığında, yalnızca dönüş adresi (geri dönülecek yerin adresi) stack’e eklenir ve bu sırada rsp kaydı otomatik olarak güncellenir.

**rsp'deki etkisi:**

`call` talimatı, geri dönüş adresini stack’e (yığına) ekleyerek rsp kaydını 8 bayt azaltır (x86-64 sisteminde). Bu işlem sırasında rsp kaydı otomatik olarak güncellenir.

**rdp'deki etkisi:**

`call` talimatı rbp kaydını otomatik olarak güncellemez. rbp, stack çerçevesini (stack frame) başlatmak için genellikle fonksiyonun ilk satırında manuel olarak ayarlanır.

**call Talimatından Sonra rbp’nin Ayarlanması**

Bir fonksiyon çağrıldığında, yeni bir yığın çerçevesi başlatmak için rbp kaydını güncellemek gerekir. Bu işlem, genellikle fonksiyonun başında `push rbp` ve `mov rbp, rsp` talimatları ile manuel olarak yapılır. Bu adımlar, rbp’yi yeni fonksiyon çerçevesini işaret etmek üzere ayarlamanıza olanak tanır.

`call` Talimatının Adım Adım Çalışma Süreci

`call` talimatı çalıştırıldığında:
    
Dönüş adresi stack’e eklenir. </br>
rsp kaydı 8 bayt azaltılır. </br>

Fonksiyon başında rbp güncellemesi (manuel olarak yapılır):
    
Genellikle fonksiyonun ilk satırında push rbp talimatı ile eski rbp değeri stack’e kaydedilir. </br>
Ardından mov rbp, rsp ile rbp, rsp’nin mevcut değerine ayarlanarak yeni bir yığın çerçevesi başlatılır. </br>
        
Örnek:

```asm
section .text
    global _start

_start:
    call my_function       ; `rsp` kaydı otomatik olarak güncellenir, geri dönüş adresi stack’e eklenir

    ; Programdan çıkış
    mov rax, 60            ; sys_exit sistem çağrısı numarası
    xor rdi, rdi           ; Çıkış kodu 0
    syscall

my_function:
    push rbp               ; Eski `rbp` değerini stack’e kaydet (manuel işlem)
    mov rbp, rsp           ; `rbp` kaydını güncelle (manuel işlem)

    ; Fonksiyonun işlemleri burada yapılır...

    pop rbp                ; `rbp`’yi eski değerine döndür
    ret                    ; `rsp`’deki geri dönüş adresine dön, `rsp` otomatik olarak artar

```

`call` talimatı rsp kaydını otomatik günceller (geri dönüş adresini ekler ve rsp'yi azaltır). </br>
rbp kaydını güncellemek manuel bir işlemdir ve rbp genellikle fonksiyonun başında ayarlanır. </br>
ret talimatı geri dönüş adresini rsp’den alır ve rsp’yi otomatik olarak artırır. </br>

Bu nedenle, `call` komutu rbp'yi otomatik olarak güncellemez; rbp güncellemesi manuel yapılır.

**Stack üzerinde ki belirli değerlere erişim**

**`[]` Parantezinin Anlamı ve Kullanımı**

Örneğin:

```asm
mov rax, [rbx]
```

Bu ifade, `rbx` kaydında tutulan adresin işaret ettiği bellek konumundaki değeri `rax` kaydına yükler. Yani, rbx bir adres içerir ve `[]` kullanımı sayesinde bu adresteki değere erişmiş oluruz.

`mov rax, [rbx]`: rbx'in işaret ettiği bellek adresindeki değeri alır ve rax'e kopyalar. </br>
`mov rax, rbx`: rbx'in kendisindeki değeri rax'e kopyalar (bu durumda rbx bir adres değil, doğrudan bir değerdir). </br>

C'de ki pointer'ların değerlere erişiminin (örn: *ptr) assembly'deki şekli gibi düşünülebilir.

**`[]` ve offset Kullanarak Stack Üzerinden Değere Erişim**

Fonksiyon çağrılarında stack (yığın) kullanıldığında `rbp` veya `rsp` ile yığındaki belirli değerlere erişmek için `[]` kullanırız:

```asm
mov rax, [rbp-8]   ; `rbp`'den 8 bayt aşağıdaki değeri `rax`'e al
mov rbx, [rsp+16]  ; `rsp`'den 16 bayt yukarıdaki değeri `rbx`'e al
```

8'lik ofset kullanımının sebebi ise x86-64 mimarisinde, register'lar 64 bit (8 bayt) uzunluğundadır. Dolayısıyla, bir yerel değişken veya stack frame'deki her bir öğe, genellikle 8 baytlık alan kaplar. Örneğin, bir int veya long gibi 64 bit veri türleri 8 bayt tutar.

Bu ifadelerde `rbp` ve `rsp`, stack'in belirli konumlarını işaret eder. `rbp-8` ile, rbp’nin 8 bayt aşağısındaki yığın değerine erişmiş oluruz.

### Segment Register'lar

Belleğin belirli segmentlerini işaret etmek için kullanılırlar. Eski x86 sistemlerinde, bellek adresleme segment tabanlı olduğu için bu register'lar bellek segmentlerini gösterirdi.

Örnek: CS (Code Segment), DS (Data Segment), SS (Stack Segment) gibi segment register'ları.


### Diğer

   1. **İşlem Durum Register'ı (Flags / Status Register):**
      İşlem sırasında çeşitli durum bilgilerini tutar. Örneğin, bir işlem sonucunda sıfır çıkarsa, taşma olup olmadığını, negatif sonuç olup olmadığını veya taşıma bitini bu register'dan öğrenir.

      Örnek: EFLAGS veya RFLAGS register'ları x86 mimarisinde yaygın olan örneklerdir. Bu register'lar, taşma, sıfır, negatif sonuç gibi bilgileri saklar. Ayrıca Assembly'de ki koşullu ifadelerin ("cmp", je, jl vb.) sonuçlarıda bu register'a yansıtılır.
   
   2. **Program Sayacı (Program Counter - PC):**
      CPU'nun bir sonraki işleyeceği talimatın adresini tutar. Bu sayede işlemci, sıradaki talimatın nerede olduğunu bilir ve işleme devam eder.

      Örnek: x86 mimarisinde bu genellikle IP (Instruction Pointer) veya modern 64-bit sistemlerde RIP olarak bilinir.

### Register Terminolojisi ve Önekler

Register isimlendirmesi, Intel'in erken mikroişlemci tasarımında (özellikle Intel 8086 ve 8088 işlemcilerinde) işlevsel bir mantıkla yapılmıştır. Bu harfler, register'ların farklı amaçlar için nasıl kullanıldığını yansıtır. Bu isimler, başta register'ların ne tür işlemler için optimize edileceğini veya kullanıldığını belirtmek için düşünülmüş olsa da, zamanla daha genel amaçlı hale gelmiştir. O dönemki işlemci tasarımında, farklı register'ların belirli işlevler için optimize edilmesi yaygındı. Intel'in bu isimlendirme mantığı, erken dönem mikroişlemci mimarilerinde yaygındı ve her register'ın belirli bir göreve sahip olduğu varsayılıyordu. Ancak zamanla bu register'lar genel amaçlı hale geldi ve her biri farklı işler için kullanılabilir oldu. Yine de, bu ilk isimlendirmeler bugün bile devam etmektedir ve bu tarihi kökeni yansıtır. Modern x86 işlemci mimarilerinde bu register'lar hala aynı isimlerle anılmaktadır. Ancak günümüzde genel amaçlı (general purpose) register'lar olarak görev yaparlar ve belirli işlemlerle sınırlı değillerdir. 32-bit ve 64-bit işlemcilerdeki register isimlerinde yer alan `E` ve `R` harfleri, işlemcinin bit genişliği ve tarihsel gelişimi ile ilgilidir. Bu harfler, register'ların büyüklüğünü ve CPU'nun mimarisini bir bakıma ifade eder.

#### Intel 8086 (16-bit):

8086 işlemcisinde her register 16-bit genişliğindeydi. Bu nedenle bu register'lar AX, BX, CX ve DX olarak adlandırıldı. Bu register'lar 16-bit veri saklayabiliyordu, yani 2 byte'lık (16 bit) veriyi aynı anda işleyebiliyordu.

Register isimleri, Intel 8086 işlemcisinin tasarımına kadar uzanır. Intel 8086, 16-bit bir işlemciydi ve register'ları şu şekilde adlandırıldı:

	AX: Accumulator register (toplayıcı) – genellikle aritmetik ve mantıksal işlemler için kullanılır. 
	BX: Base register – bellek adreslemesi ve veri taşımada temel register olarak görev yapar.
	CX: Counter register – genellikle döngü sayacı olarak kullanılır. </br>
	DX: Data register – geniş veri işlemlerinde, giriş/çıkış operasyonlarında kullanılır. 

Bu isimlendirme, register'ların hangi görevlerde kullanılacağına dair bir mantığı ifade eder. Ancak, bu register'lar sadece belirli işlere atanmış değildi; hepsi genel amaçlı olarak da kullanılabiliyordu.

Ayrıca, bu 16-bit register'lar kendi içinde ikiye bölünebiliyordu:

	AH (High): Accumulator'ın üst 8 bit'i. 
	AL (Low): Accumulator'ın alt 8 bit'i. 

Bu da, aynı register'ın hem 8-bit hem de 16-bit olarak kullanılabilmesini sağlıyordu. Örneğin:

	AX (16-bit): Tüm register. 
	AH (8-bit): Üst yarısı. 
	AL (8-bit): Alt yarısı. 

Bu yapı diğer register'lar için de geçerliydi (örneğin, BH/BL, CH/CL, DH/DL).

1. **AX: Accumulator Register**
AX, Accumulator (Toplayıcı) anlamına gelir ve genellikle aritmetik ve mantıksal işlemler için kullanılırdı.
Bu register, çoğu matematiksel işlemde varsayılan olarak kullanıldığı için "toplayıcı" olarak adlandırıldı. Örneğin, iki sayının toplanması gibi işlemler AX'te gerçekleştiriliyordu. Geleneksel bilgisayar tasarımında, toplayıcı (accumulator) genellikle işlemcinin ana aritmetik birimi olarak kullanılır.

2. **BX: Base Register**
BX, Base (Taban) register'ı olarak bilinir ve bellek adreslemelerinde temel adres saklayıcısı olarak kullanılırdı.
Özellikle bellek adresleme işlemlerinde, bellek adresini tutmak ve adres hesaplamalarında bir taban değer olarak kullanmak amacıyla tasarlanmıştır. Bu yüzden "Base" ismini almıştır. Örneğin, veri yapıları üzerinde gezinirken BX kullanılarak bellekten veri çekilebilirdi.

3. **CX: Count Register**
CX, Count (Sayaç) register'ı olarak adlandırılır ve döngü sayacı veya tekrar eden işlemler için kullanılırdı.
Özellikle döngülerde ve zamanlayıcı işlemlerinde kullanıldığından "Count" ismi verilmiştir. Örneğin, bir döngüdeki tekrar sayısını tutmak için CX kullanılırdı.
Bu register, LOOP gibi talimatlarla döngü kontrolü yaparken varsayılan register olarak kullanılırdı.

4. **DX: Data Register**
DX, Data (Veri) register'ı olarak bilinir ve genellikle giriş/çıkış işlemlerinde kullanılırdı.
Veri taşımada veya geniş aritmetik işlemlerde kullanılan bir register'dır. Örneğin, bir işlemin sonucunu saklamak veya büyük veri miktarlarını işlemekte görev alır.
Özellikle bazı I/O (giriş/çıkış) işlemlerinde ve 32-bit geniş verilerin tutulmasında DX register'ı kullanılırdı. 16-bit işlemcilerde 32-bit veri işlemek için DX ve AX birlikte kullanılırdı.

**`X` Harfinin Register'larda ki Yeri:**

Bunun ile alakalı iki teori mevcut;

İlk teori `X` in çift anlamına geldiği. Bununla alakalı yorumlar:

```
The X means pair, and goes back to at least the 8080. It had 8-bit registers B,C,D,E,H,L (among others) which could also be used in pairs (BC, DE and HL). The BC and DE pairs were used mostly for 16-bit arithmetic; the HL pair generally held a memory address. Some examples of the usage of X for pair:

LXI  D,12ABH    ; "load pair immediate"
DCX  B          ; "decrement pair"
STAX D          ; "store A (indirect) at pair"

Fast forward to the 8086. It has registers AL,AH,BL,BH,CL,CH,DL,DH, which, similarly to the 8080, can be used in pairs: AX, BX, CX, DX.
```

```
On the 8086, the AX register was the combination of AH and AL. Likewise BX was BH and BL, etc. On the 80386, rather than combining 16-bit registers into 32-bit registers, Intel added 16 bits to each register. The name "AL" still refers to bits 0-7 of the first letter-named register, "AH" to bits 8-15, and "AX" to bits 0-15; the name "EAX" now refers to all 32 bits of the register.

It's interesting to note that most other 16- and 32-bit processors do not offer any equivalent means of accessing just the upper or lower parts of a register. The costs of allowing such access, both in hardware complexity and instruction-encoding bits, were significant, and in today's day and age, the ability to add one 8-bit portion of a register to an 8-bit portion of another register is far less useful than many other uses to which such hardware or instruction-encoding space might be put. On the other hand, there are still times when such abilities can be useful when they exist.
```

```
One could suggest that "X" was a shorthand for "H or L", since AX could be interpreted to mean "all the registers whose first letter is H, and whose second letter is H or L", but that has nothing to do with "normal" state. 
```

```
One posible reason I can think of, is to denote that it has not 'normal' state. When talking about serial communication in electronics, if one of the data lines can be anything, you might say its state is X as it is neither/both/either 0 or 1.
```

```
 X was used in the mnemonics (such as LXI and DCX) on the 8080 for instructions that treated a pair of otherwise-separate 8-bit registers as a 16-bit integer, similar to how AX represents the AH:AL pair. Thus, another possible interpretation is that X means pair, and this usage was continued when naming the high:low pairs on subsequent processors, including the 8086, which was a full 16-bit extension of the 8080.
```

İkinci teori ise hiçbir anlama gelmediği sadece bir adlandırma kuralı olduğuna dayalı:

```
Nothing, as far as I know. It stands for a general purpose register.

The 16 bit AX register can be addressed as AH (high byte) and AL (low byte).

The EAX register is the 32 bit version of the AX register. The E stands for extended.
```

```
As Mihai says, it is just a naming convention.

However, given that 'X' is often used for "fill in your value" and is commonly used by mathematicians as the first variable name of choice in equations, and that those particular registers are general purpose (as opposed to say ESP which is the extended (32-bit) stack pointer or EIP the extended instruction pointer) that is perhaps why X is chosen as opposed to say 'B'.
```

#### 32-bit Register'lar

Intel 80386 işlemcisi tanıtıldı ve bu işlemci 32-bit'lik bir mimariye sahipti. Bu, daha geniş verilerin işlenebilmesi anlamına geliyordu. 16-bit olan register'lar, 32-bit'e genişletildi ve bu yeni 32-bit register'lara "E" (Extended veya Enhanced) harfi eklendi:

    EAX: Extended AX (32-bit genişletilmiş AX).
    EBX: Extended BX (32-bit genişletilmiş BX).
    ECX: Extended CX (32-bit genişletilmiş CX).
    EDX: Extended DX (32-bit genişletilmiş DX).        
    
Bu register'lar, yine geriye dönük uyumluluk sağlamak için 16-bit ve 8-bit alt bölümlere de sahipti:

    EAX (32-bit): Tüm 32-bit register.
        AX (16-bit): İlk 16-bit'lik kısmı.
            AH: AX'in üst 8 bit'i.
            AL: AX'in alt 8 bit'i.

Bu yapı diğer register'lar için de geçerliydi (EBX/BX/BH/BL, ECX/CX/CH/CL, EDX/DX/DH/DL).


#### 64-bit Register'lar

Intel, x86-64 mimarisine geçtiğinde (AMD tarafından geliştirilen ve daha sonra Intel tarafından benimsenen 64-bit mimari), register'lar yeniden genişletildi. Bu genişleme ile birlikte register'lar 64-bit oldu. Bu sefer register isimlerine "R" (Register) harfi eklendi:

    RAX: 64-bit genişletilmiş AX.
    RBX: 64-bit genişletilmiş BX.
    RCX: 64-bit genişletilmiş CX.
    RDX: 64-bit genişletilmiş DX.

Yine geriye dönük uyumluluk korundu, bu yüzden 64-bit register'lar da bölünebilir:

    RAX (64-bit): Tam register.
        EAX (32-bit): Alt 32 bit.
            AX (16-bit): Alt 16 bit.
                AH: AX'in üst 8 bit'i.
                AL: AX'in alt 8 bit'i.

Bu bölünme yapısı diğer register'lar için de geçerlidir (örneğin, RBX/EBX/BX/BH/BL).

```
64-bit register | Lower 32 bits | Lower 16 bits | Lower 8 bits
==============================================================
rax             | eax           | ax            | al
rbx             | ebx           | bx            | bl
rcx             | ecx           | cx            | cl
rdx             | edx           | dx            | dl
rsi             | esi           | si            | sil
rdi             | edi           | di            | dil
rbp             | ebp           | bp            | bpl
rsp             | esp           | sp            | spl
r8              | r8d           | r8w           | r8b
r9              | r9d           | r9w           | r9b
r10             | r10d          | r10w          | r10b
r11             | r11d          | r11w          | r11b
r12             | r12d          | r12w          | r12b
r13             | r13d          | r13w          | r13b
r14             | r14d          | r14w          | r14b
r15             | r15d          | r15w          | r15b
```

```
| 63 - 32 | 31 - 16 | 15 - 8 | 7 - 0 |
======================================
.         .         | AH     | AL    |
.         .         | AX             |
.         | EAX                      | 
| RAX                                |
======================================
| 63 - 32 | 31 - 16 | 15 - 8 | 7 - 0 |
```

**64-bit:**

![x86-64-registers](mats/imgs/x86-64-registers.png)

**32-bit:**

![x86-32-registers](mats/imgs/32-bit-registers.png)
	
**16-bit:**

![x86-16-registers](mats/imgs/16-bit-registers.png)

**8-bit:**

![x86-8-registers](mats/imgs/8-bit-registers.png)

**Genel Göürünüm:**

![rdx](mats/imgs/rdx.png)

![Table of x86 Registers](mats/imgs/Table_of_x86_Registers_svg.svg.png)

---

## :three: Yaygın Assembly Talimatları - Section'lar, Direktifler, Etiketler - İşlenenler (Operands)

![nasmstructure](mats/imgs/nasmstructure.png)

### Yaygın assembly talimatları

Assembly dilinde, özellikle x86-64 gibi mimarilerde yaygın olarak kullanılan talimatlar (instructions), bellek erişimi, aritmetik işlemler, mantıksal işlemler, kontrol akışı, veri hareketi ve fonksiyon çağrıları gibi temel işlemleri kapsar. Assembly'de çok fazla talimat olduğundan en çok kullanılanlara değinmek daha makul olacaktır:

![talimatlar](mats/imgs/talimatlar.png)

1. **Veri Hareketi (Data Movement) Talimatları**

Bu talimatlar, verileri register'lar, bellek ve işlemci arasında taşımak için kullanılır.

    mov: Bir kaynaktan bir hedefe veri taşır.
        Örnek: mov rax, rbx (RBX register'ındaki değeri RAX register'ına taşır)
    lea: Adres hesaplaması yapar (pointer aritmetiği için kullanılır).
        Örnek: lea rax, [rbx + 4] (RBX'e 4 ekleyip sonucu RAX'e yazar)
    push: Bir değeri yığına (stack) koyar.
        Örnek: push rax (RAX'teki değeri stack'e ekler)
    pop: Yığından bir değer alır.
        Örnek: pop rbx (Yığının en üstündeki değeri alıp RBX'e yazar)

2. **Aritmetik Talimatlar**

Bu talimatlar, sayısal işlemler yapar.

    add: İki sayıyı toplar.
        Örnek: add rax, rbx (RAX ve RBX'teki değerleri toplar, sonucu RAX'e yazar)

    sub: İki sayıyı çıkarır.
        Örnek: sub rax, rbx (RAX'teki değerden RBX'teki değeri çıkarır)

    mul: Çarpma işlemi yapar (çarpılan değer register'a göre seçilir).
        Örnek: mul rbx (RAX ile RBX'teki değerleri çarpar, sonucu RAX'e yazar)

    div: Bölme işlemi yapar (bölünen ve bölen register'larda olur).
        Örnek: div rbx (RAX'i RBX'e böler, bölüm RAX, kalan RDX'tedir)

    inc: Bir değeri bir artırır.
        Örnek: inc rax (RAX'teki değeri 1 artırır)

    dec: Bir değeri bir azaltır.
        Örnek: dec rbx (RBX'teki değeri 1 azaltır)

3. **Mantıksal Talimatlar**

Bu talimatlar, mantıksal bit düzeyinde işlemler yapar.

    and: Bit düzeyinde VE (AND) işlemi yapar.
        Örnek: and rax, rbx (RAX ve RBX'teki değerlerin bitlerini AND'ler)

    or: Bit düzeyinde VEYA (OR) işlemi yapar.
        Örnek: or rax, rbx (RAX ve RBX'teki değerlerin bitlerini OR'lar)

    xor: Bit düzeyinde ÖZEL VEYA (XOR) işlemi yapar.
        Örnek: xor rax, rax (RAX'i sıfırlamak için kullanılır, çünkü XOR aynı sayılar arasında sıfır verir)

    not: Bit düzeyinde tersleme (NOT) işlemi yapar.
        Örnek: not rax (RAX'teki tüm bitleri tersine çevirir)

    shl: Bitleri sola kaydırır (çarpma etkisi yaratır).
        Örnek: shl rax, 1 (RAX'teki değeri 1 bit sola kaydırır, yani 2 ile çarpar)

    shr: Bitleri sağa kaydırır (bölme etkisi yaratır).
        Örnek: shr rax, 1 (RAX'teki değeri 1 bit sağa kaydırır, yani 2'ye böler)

4. **Program Akışı Talimatları**

Bu talimatlar, dallanma, döngüler ve koşullu işlemler için kullanılır.

    jmp: Koşulsuz sıçrama yapar (programın belirtilen adrese gitmesini sağlar).
        Örnek: jmp label (Label adlı yere git)

    cmp: İki değeri karşılaştırır (farkı hesaplar, ancak sonucu kaydetmez, bayrakları ayarlar).
        Örnek: cmp rax, rbx (RAX ile RBX'i karşılaştırır)

    je: Bayraklara göre sıçrama yapar, iki değer eşitse sıçrama.
        Örnek: je equal_label (Karşılaştırma sonucu eşitse, equal_labele git)

    jne: Eşit değilse sıçrama.
        Örnek: jne not_equal_label (Karşılaştırma sonucu eşit değilse not_equal_labele git)

    jl: Küçükse sıçrama.
        Örnek: jl less_label (Karşılaştırma sonucu küçükse less_labele git)

    jg: Büyükse sıçrama.
        Örnek: jg greater_label (Karşılaştırma sonucu büyükse greater_labele git)

5. **Fonksiyon Talimatları**

Fonksiyon çağrıları ve dönüşleri için kullanılan talimatlardır.

    call: Bir fonksiyonu çağırır.
        Örnek: call my_function (My_function adlı fonksiyonu çağırır)

    ret: Bir fonksiyondan dönüş yapar.
        Örnek: ret (Fonksiyondan geri döner)

6. **Stack Yönetim Talimatları**

Yığın (stack) ile ilgili işlemleri yönetmek için kullanılırlar.

    push: Bir değeri stack'e kaydeder.
        Örnek: push rbx (RBX'teki değeri stack'e ekler)

    pop: Stack'ten bir değeri alır.
        Örnek: pop rbx (Stack'ten bir değeri alır ve RBX'e yazar)

    leave: Stack pointer ve base pointer'ı sıfırlar (genelde fonksiyon dönüşlerinde kullanılır).
        Örnek: leave (RBP'yi geri yükler ve RSP'yi geri ayarlar)

7. **Bayrak Yönetimi Talimatları**

Bayrakların durumunu ayarlamak veya kontrol etmek için kullanılır.

    clc: Taşıma bayrağını sıfırlar (carry flag).
        Örnek: clc (Carry flag'ı sıfırlar)

    stc: Taşıma bayrağını set eder.
        Örnek: stc (Carry flag'ı set eder)

    cmc: Taşıma bayrağını tersine çevirir.
        Örnek: cmc (Carry flag'ı tersine çevirir)

    seta: Belirli bir koşula göre bayrağı set eder.
        Örnek: seta al (Taşıma bayrağı sıfırsa AL register'ını 1 yapar)

8. **Sistem Talimatları**

Genellikle işletim sistemi ile etkileşim için kullanılır.

    syscall: Bir sistem çağrısı yapar (Linux'ta).
        Örnek: syscall (Belirli bir sistem işlevini çağırır)

    int: Yazılım kesmesi (interrupt) üretir.
        Örnek: int 0x80 (Linux 32-bit sistem çağrısı)

  ### Direktifler

  Assembly dilinde direktifler (directives), derleyici veya assembler tarafından programın derleme sürecinde belirli bir şekilde ele alınması için talimat veren özel komutlardır. Direktifler, işlemci tarafından doğrudan çalıştırılmaz; yani, makine koduna dönüştürülmezler. Bunun yerine, derleme sürecinde assembler’ın veya linker’ın (bağlayıcı) programı nasıl işleyip organize edeceğini belirlerler.

Direktifler, programın bellekte nasıl organize edileceğini belirlemek, veri ve kod segmentlerini tanımlamak, değişkenleri başlatmak, makroları tanımlamak gibi birçok işlem için kullanılır. NASM ve MASM gibi farklı assembler’larda benzer görevler için kullanılan direktifler değişiklik gösterebilir, ancak çoğu direktif temel görevlerde benzerdir.

1. **`section`/`segment` Direktifi**

`section`/`segment` direktifi, programın kod ve veri bölümlerini tanımlamak için kullanılır. Her programın, kod (program talimatlarının yer aldığı bölüm) ve veri (sabitler ve değişkenler) gibi bölümleri vardır. Assembly dilinde kullanılan section veya segment yapıları, programın bellekteki düzenini ve yapısını tanımlamak için kullanılır. Her section, belirli türdeki kod veya verilerin yerleştirileceği bellek alanlarını ifade eder. x86-64 mimarisinde en yaygın kullanılan section bölümleri şunlardır:

    Kod Bölümü (.text): Bu bölümde programın çalıştırılacak talimatları bulunur.
    Veri Bölümü (.data): Bu bölümde programın sabit veri veya değişkenleri yer alır.
    BSS (Block Starting Symbol) Bölümü (.bss): Bu bölümde ise sıfırlanmış (başlatılmamış) değişkenler bulunur.

```asm
section .bss
	; variables

section .data

	; constants
	
section .text
global _start ; entry point for linker

_start: ; start here

 ; ...
```
Her section bölümü, derleyici ve işletim sistemi tarafından farklı bellek alanlarına yerleştirilir ve her bölümün kendine özgü işlevleri vardır.

**`.text` Bölümü**

	Amaç: Programın çalıştırılabilir talimatlarını içerir. Buradaki kodlar salt okunurdur ve çalışma sırasında değiştirilemez.
	İçerik: Fonksiyonlar, prosedürler, ve programın ana akışını oluşturan diğer komutlar yer alır.
	Kısıtlamalar: Kod güvenliği için .text bölümünde depolanan talimatlar genellikle salt okunur olarak ayarlanır, bu da programın kendi kodunu değiştirmesini engeller.

Örnek:

```asm
section .text
    global _start   ; Programın başlangıç noktası

_start:
    mov rax, 60     ; `sys_exit` sistem çağrısı numarası (Linux'ta program sonlandırmak için)
    mov rdi, 0      ; Çıkış kodu (0) (success anlamına gelir. Program da hata yok gibi düşünülebilir veya 1 verirsek program da hata var anlamında düşünülebilir) 
    syscall         ; Sistem çağrısını gerçekleştir
```

Bu örnekte .text bölümü, mov, xor, ve syscall gibi çalıştırılabilir talimatları içerir.

**`.data` Bölümü**

	Amaç: Programın başlatılmış sabit ve değişken verilerini depolar. Bu bölümdeki veriler program başladığında bellekte belirli değerlerle başlatılmış olur.
	İçerik: Genellikle db, dw, dd, ve dq gibi talimatlarla tanımlanan sabit veri ve değişkenler yer alır.
	Bellek Yapısı: .data bölümü bellekte programın sabit veri ve değişkenlerini tutacak özel bir alana yerleştirilir.

 Örnek:

```asm
section .data
    msg db 'Hello, World!', 0xA   ; msg adlı bir string veri (yeni satır karakteri ile)
    num1 db 42                    ; Bir byte (8-bit) boyutunda sayısal veri
    num2 dw 256                   ; İki byte (16-bit) boyutunda sayısal veri
```

Bu örnekte .data bölümündeki msg, num1, ve num2 değişkenleri program başladığında bellekte belirli değerlerle başlatılacaklardır.

**`.bss` Bölümü**

	Amaç: Başlatılmamış veri bölümüdür ve program başladığında bellekte sıfırlanmış olarak tanımlanır. .bss bölümü, çalışma sürecinde kullanılan ve başlangıçta belirli bir değer 	gerektirmeyen değişkenler için kullanılır.
	İçerik: resb, resw, resd, ve resq gibi direktiflerle ayrılan bellek alanları yer alır.
	Bellek Yapısı: .bss bölümünde başlatılmamış veriler bulunur, bu nedenle dosya boyutunu artırmaz. Çalışma zamanı geldiğinde bu bölümdeki alanlar sıfır ile başlatılır.

 Örnek:

```asm
section .bss
    buffer resb 64    ; 64 baytlık bir bellek alanı ayır (başlatılmamış)
    count resd 1      ; 4 baytlık bir alan ayır (başlatılmamış)
```

buffer, 64 baytlık bir başlatılmamış bellek alanıdır.
count, 4 baytlık bir başlatılmamış bellek alanıdır.

2. `global` Direktifi:

`global` direktifi, belirli bir etiketi (label) veya fonksiyonu dışarıya açık hale getirir. Bu sayede, başka bir dosyada veya modülde tanımlanan bir etiket ya da fonksiyon, bu dosyada kullanılabilir. Örneğin, `global _start` ifadesi, `_start` etiketini global hale getirir, böylece programın başlangıç noktası olarak bu etiketi kullanabiliriz.

Örnek:

```asm
global _start   ; `_start` etiketini global hale getiriyoruz

_start:
    ; Kod işlemleri
```

**`global` direktifinin özel `_start` etiketiyle ilişkisi:**

Assembly dilinde `_start` etiketi, programın başlangıç noktası olarak kullanılan özel bir etikettir. Bir işletim sisteminde, program başlatıldığında, programın başlama noktasını (entry point) bilmesi gerekir. Linux gibi sistemlerde `_start` etiketi, programın çalışma süreci boyunca ilk çağrılan yeri belirtir. Ancak, `_start` etiketinin bu işlevi görebilmesi için onu global direktifiyle dış erişime açık hale getirmemiz gerekir. İşletim sisteminin konvansiyon tasarımı sebebiyle Linux'da linker `_start` (Örn: MacOS'da bu `_main` dir.) etiketini programı başlatmak için arar. Bu yüzden Linux'da `_start` ve MacOS'da `_main` özel etiketler oluyor.

`global` direktifi, belirli bir sembolü veya etiketi programın dışından erişilebilir hale getirir. Bu, derleyicinin veya assembler'ın (örneğin NASM) etiketin (sembolün) dış modüllerden veya işletim sisteminden erişilebilir olmasını sağlaması için gereklidir. `_start` etiketini global yapmazsak, işletim sistemi programın başlangıç noktası olarak `_start` etiketini tanımlayamaz ve bağlayıcı (linker) bu durumda bir hata verir.

**Neden `_start` Global Olmalı?**

Linux ve diğer bazı işletim sistemlerinde _start, programın başlangıç noktası olarak kabul edilir. global olarak tanımlanmazsa:

    Linker _start etiketini göremez ve programın nereden başlatılacağını bilemez.
    İşletim sistemi, programın giriş noktası olarak _start etiketine ulaşamaz ve program başlatılamaz.

 Örnek:

```asm
section .text
    global _start        ; _start etiketini global yaparak erişilebilir hale getiriyoruz

_start:
    mov rax, 60          ; sys_exit sistem çağrısı numarası
    xor rdi, rdi         ; Çıkış kodu 0
    syscall              ; Programı bitir
```

**`global` direktifi ile bir fonksiyonu (aslında etiketi) dışarıdan erişilebilir hale getirme:**

`global` direktifi yalnızca `_start` etiketiyle sınırlı değildir. Aynı zamanda diğer fonksiyonları ve etiketleri de dış erişime açmak için kullanılır. Başka bir modülde veya dosyada tanımlanmış assembly fonksiyonlarını çağırmak istediğimizde global direktifini kullanırız. Böylece, global yapılan semboller ve etiketler, diğer dosyalarda extern olarak tanımlanabilir ve bu sayede farklı modüller arası etkileşim sağlanır.

Örnek:

`functions.s`:
```asm
section .text
    global add_numbers        ; Fonksiyonu dışarıya açmak için `global` direktifi kullanıyoruz

add_numbers:
    mov rax, rdi              ; İlk argümanı rax'e yükle
    add rax, rsi              ; İkinci argümanı rax'e ekle
    ret                       ; Sonucu rax'ta döndür
```

`main.c`:
```
#include <stdio.h>

extern long add_numbers(long a, long b);   // Assembly fonksiyonunu `extern` ile bildiriyoruz

int main() {
    long result = add_numbers(5, 10);      // Assembly fonksiyonunu çağırıyoruz
    printf("Result: %ld\n", result);       // Sonucu yazdırıyoruz
    return 0;
}
```

Bu örnekte `add_numbers`, `global` direktifi ile dışarıya açıldığından, `main.c` dosyasında extern anahtar kelimesiyle erişilebilir hale gelir. Böylece, main fonksiyonu assembly’de tanımlanmış `add_numbers` fonksiyonunu çağırabilir.

	Giriş Noktasını Belirleme: _start etiketi global yapılmazsa, linker bu etiketi bulamaz ve program başlatılamaz.
    Fonksiyon ve Sembolleri Paylaşma: global, bir assembly fonksiyonunun veya sembolünün başka dosyalardan kullanılmasına olanak tanır.
    Modüler Programlama: global ve extern direktifleri sayesinde, C ve Assembly gibi farklı dillerde yazılmış kodlar birbiriyle entegre çalışabilir.

Bu şekilde global direktifi, programın çeşitli bölümlerine dış erişim izni sağlayarak modüler yapıda programlama imkânı sunar ve derleme sürecinde linker’a doğru sembolleri bağlama imkânı verir.

3. `extern` Direktifi

`extern` direktifi, başka bir dosyada veya modülde tanımlanan bir sembolü kullanmak istediğimizde kullanılır. Örneğin, C dilinde yazılmış bir fonksiyon veya başka bir assembly dosyasında tanımlı bir fonksiyon, `extern` direktifi ile çağrılabilir.

```asm
extern printf   ; printf fonksiyonunun harici olarak kullanılması
extern malloc	; malloc fonksiyonunun harici olarak kullanılması

section .text
    global _start

_start:
    ; printf çağrısı yapılabilir
```

4. `db` direktifi ve ona benzer diğer direktifler:

Bu direktifler, veri tanımlamak ve bellekte belirli büyüklükte alan ayırmak için kullanılır:

    db (Define Byte): 1 baytlık veri tanımlar.
    dw (Define Word): 2 baytlık veri tanımlar.
    dd (Define Doubleword): 4 baytlık veri tanımlar.
    dq (Define Quadword): 8 baytlık veri tanımlar.


Örnek:

```asm
section .data
    byte_val db 10           ; 1 baytlık veri
    word_val dw 512          ; 2 baytlık veri
    dword_val dd 1024        ; 4 baytlık veri
    quad_val dq 2048         ; 8 baytlık veri

section .bss
    buffer resb 64           ; 64 baytlık başlatılmamış bellek alanı
```

5. `equ` (equate) direktifi ve `$`:

`equ` direktifi, bir etiketi (label) sabit bir değere eşlemek için kullanılır. Program boyunca aynı değeri kullanmak istediğimizde equ kullanarak bu değeri daha anlamlı bir isimle ifade edebiliriz.

Örnek:

```asm
MAX_SIZE equ 100     ; MAX_SIZE, 100 olarak tanımlandı

section .bss
    buffer resb MAX_SIZE     ; Bellekte 100 baytlık alan ayır
```

Assembly dilinde `$` işareti, genellikle programın o anki adresini ya da mevcut konumunu belirtmek için kullanılır. Bu, assembler tarafından programın o noktadaki bellek adresi olarak değerlendirilir ve özellikle veri uzunluklarını hesaplamak veya bellek içinde belirli konumları tanımlamak için oldukça kullanışlıdır.

**`$` İşaretinin Kullanım Alanları**

**Veri Uzunluğunu Hesaplamak**

Veri tanımlamalarında `$` işareti, veri bloğunun başlangıç ve bitiş adreslerini kullanarak uzunluğunu hesaplamak için kullanılabilir. Örneğin, bir string uzunluğunu belirlerken `$` işareti başlangıç noktasından o anki adresi çıkarmak için kullanılır.

Örnek:

```asm
section .data
    message db 'Hello, World!', 0xA  ; Mesaj ve yeni satır karakteri
    msg_len equ $ - message          ; msg_len, mesajın uzunluğunu hesaplar
```

`message` etiketi mesajın başlangıç adresini işaret eder. </br>
`$` işareti ise mevcut adresi (bu durumda mesajın bitişini) ifade eder. </br>
`msg_len equ $ - message` ifadesi, `msg_len` etiketini `message` adlı veri bloğunun uzunluğuna eşitler. Bu sayede, mesajın uzunluğu doğrudan hesaplanmış olur. </br>

**Mevcut Adrese Etiket Vermek**

Bazı durumlarda, mevcut konumu işaret eden bir etiket tanımlamak için `$` kullanılabilir. Bu, programın belirli bir adresini işaret eden dinamik etiketler oluşturmak için faydalıdır.

Örnek:

```asm
section .text
    global _start

_start:
    jmp $  ; Bu komut sonsuz döngü oluşturur
```

Burada jmp `$`, `jmp` komutunun kendisine dönmesini sağlar ve bu şekilde sonsuz bir döngü yaratır. `$`, burada bulunduğu adresi işaret ettiğinden program `jmp` komutuna her ulaştığında tekrar aynı noktaya döner.

**`$` ve `equ` ile Birlikte Kullanımı**

`$` işareti, equ ile birlikte kullanıldığında, belirli bir adresin anlık konumunu sabit bir etikete eşitlemeye olanak tanır. Bu, özellikle verinin dinamik uzunluğunu veya bir veri bloğunun konumunu belirlemede yardımcıdır. `$ - etiket` şeklinde bir kullanım, `$` işaretinin mevcut adresi işaret etmesi sayesinde bu etiketin adresiyle mevcut adres arasındaki farkı hesaplar.

Bu nedenle `$`, assembly programlamada veri uzunlukları ve konumları dinamik olarak hesaplamak için sıklıkla kullanılır.

### Etiketler

Assembly dilinde etiketler (labels), kod veya veri bloklarının belirli adreslerini temsil eden sembolik isimlerdir. Etiketler, bellekteki belirli bir adresi işaret eder ve bu adreslerin sembolik isimlerle gösterilmesi, programın okunabilirliğini ve yönetilebilirliğini artırır.

Etiketler, işlemcinin doğrudan eriştiği bellek adreslerini insan tarafından anlaşılır hale getirir. Örneğin:

    Kontrol akışını düzenlemek için, koşullu veya koşulsuz dallanmalar (jmp, je, jne, vb.) yaparken belirli talimatlara atlamak için kullanılır.
    Veri bloklarını işaretlemek için, belirli bir veri bloğunu etiketleyerek o veriye kolayca erişilmesini sağlar.
    Programın başlangıç noktalarını belirtmek için, örneğin _start gibi özel etiketlerle programın giriş noktasını tanımlar.

 1. **Kod Etiketleri**

Kod etiketleri, belirli bir komutun adresini işaret eder. Dallanma `jmp, je, jne vb.` komutları ile kontrol akışını yönlendirmek için kullanılır. `_start`, bir kod etiketine örnektir; programın başlangıcını işaret eden bir etiket olarak kullanılır. Ayrıca kendi oluşturduğumuz etiketleri de belirli kod blokları için kullanabiliriz.

Örnek:

```asm
section .text
    global _start

_start:
    mov rax, 5
    jmp my_label

my_label:
    mov rbx, 10
```

`_start`, programın başlama noktası olarak işaretlenmiştir. my_label, kod akışında jmp ile ulaşılacak bir etikettir.

2. **Veri Etiketleri**

Veri etiketleri, programdaki belirli veri bloklarını işaret eder. Veri etiketleri genellikle `.data` veya `.bss` bölümünde bulunur ve veriye erişimi kolaylaştırır.

Örnek:

```asm
section .data
    msg db 'Hello, World!', 0xA     ; `msg` bir veri etiketidir
```

Burada `msg`, `'Hello, World!'` mesajının bellek adresini işaret eden bir veri etiketidir.

3. **`_start` (Linux) ve `_main` (MacOS) etiketleri (Özel etiketler denilebilir)**

`_start` veya `_main` etiketi, özellikle Linux ve MacOS işletim sisteminde programın başlangıç noktası olarak kullanılan tipik varsayılan bir etikettir. Program çalıştırıldığında, işletim sistemi `_start` etiketini arar ve programın bu noktadan itibaren başlatılmasını sağlar. Ancak `_start`, yalnızca özel bir etiket olduğundan, `global` direktifi ile dış erişime açık hale getirilmesi gerekir. Bu etiketi kullanmak zorunda değiliz; ancak `_start` kullanılmazsa, işletim sisteminin veya derleyicinin tanıyacağı başka bir giriş noktası sağlanmalıdır. Bazı derleyiciler veya linker araçları, programın giriş noktasını özelleştirmek için özel komut satırı seçenekleri sunar. Örneğin, `GCC` veya `ld` gibi linker araçlarında `-e` (entry) seçeneği ile giriş noktası farklı bir etiket olarak ayarlanabilir.

>[!IMPORTANT]
> **Konu ile alakasız bir bilgi**
>
> Çoğu derleyici, işletim sisteminin varsayılan başlatma düzenini takip eder. Örneğin, C/C++ programlarında işletim sistemi, main fonksiyonuna ulaşmadan önce çeşitli başlangıç kodlarını (crt0 gibi) çalıştırır. Bu başlangıç kodları, C dilinin gerektirdiği ortamı hazırlayıp main fonksiyonunu çağırır.

### İşlenenler (Operands)

Assembly dilinde operandlar, bir talimatın üzerinde işlem yaptığı verilerdir. Operandlar, işlem yapılacak veri veya adresleri ifade eder ve her işlemci komutunun operandlara ihtiyacı vardır. Çoğu assembly komutu, iki veya daha fazla operand ile çalışır. Ancak bazı komutların hiç operandı yoktur (`nop, ret gibi`), bazı komutların ise yalnızca bir operandı vardır (`inc, dec gibi`). Kayıt, sabit, bellek ve adresleme modları gibi farklı operand türleri bulunur ve her tür farklı bir erişim yöntemi sağlar. Bu çeşitlilik, assembly dilinin esnekliği ve gücü açısından önemlidir. Operandların hangi bellek konumlarına veya kayıtlara işaret ettiğini doğru anlamak, düşük seviyeli programlamada performansı doğrudan etkiler.

Assembly dilinde dört ana operand türü vardır:

    Register (Kayıt) Operandları
    Immediate (Sabit) Operandlar
    Memory (Bellek) Operandları
    Adresleme Modları (dolaylı olarak bellek erişimlerini ifade eden kombinasyonlar)

1. **Register Operandları**

Register operandları, işlemcinin içinde veri tutmak için kullanılan kayıtlardır. Register operandları doğrudan işlemci içinde bulunduğundan, üzerlerinde yapılan işlemler hızlıdır.

Örnek:

```asm
mov rax, rbx   ; rbx'deki değeri rax'e kopyalar
add rcx, rdx   ; rcx ve rdx'yi toplar, sonucu rcx'e yazar
```

Bu örnekte rax, rbx, rcx, ve rdx gibi genel amaçlı kayıtlar operand olarak kullanılmıştır. mov, add gibi komutlarla bu kayıtlara veri yükleyebilir veya işlemler gerçekleştirebiliriz.

2. **Immediate (Sabit) Operandlar**

Immediate operandlar, sabit bir değeri temsil eder. Bu değer doğrudan komut içinde belirtilir ve işlem sırasında doğrudan kullanılır. Immediate operandlar, doğrudan veriyi içerdiği için en hızlı işlenen operand türlerinden biridir.

Örnek:

```asm
mov rax, 10     ; rax'e sabit bir sayı olan 10'u yükler
add rbx, 20     ; rbx'e 20 ekler
```

Burada 10 ve 20 birer immediate operanddır. Sabit bir değer oldukları için işlem sırasında değişmezler.

3. **Memory (Bellek) Operandları**

Memory operandları, bir bellekteki veri adresini temsil eder. Bu tür operandlarda, işlem doğrudan bir bellek adresi üzerinde yapılır. Bu adres, bir değişkenin veya sabit bir değerin bulunduğu yeri işaret edebilir.

Örnek:

```asm
section .data
    num db 10            ; num adlı bir bellek alanına 10 yükler

section .text
    global _start

_start:
    mov rax, [num]       ; num'un bellekteki adresindeki değeri rax'e yükler
    mov [num], 20        ; num'un işaret ettiği belleğe 20 yazar
```

num etiketini `[num]` olarak kullandığımızda, `num`un bellek adresindeki değere ulaşırız. mov rax, `[num]` komutu num etiketinin işaret ettiği bellek adresindeki değeri rax kaydına yükler.

**Adresleme Modları**

Adresleme modları, bellek operandlarına erişimi sağlayan yöntemleri ifade eder. Assembly dilinde kullanılan başlıca adresleme modları şunlardır:

**_Doğrudan Adresleme_**: Bellekteki belirli bir adrese doğrudan erişim sağlar.

```asm
mov rax, [num]    ; num adresindeki değeri rax'e yükler
```

**_Dolaylı Adresleme_**: Bir kaydın içerdiği adres kullanılarak bellekteki değere ulaşılır.

```asm
mov rbx, num      ; rbx’e num adresini yükler
mov rax, [rbx]    ; rbx’in işaret ettiği adresteki değeri rax’e yükler
```

**_Kayıt İndeksli Adresleme_**: Belirli bir kayıta ek olarak bir indeks veya ofset ekleyerek belleğe erişim sağlar. Bu mod, özellikle diziler ve yapıların elemanlarına erişim için kullanışlıdır.

```asm
mov rax, [rbx + 4]    ; rbx'ten 4 bayt sonraki bellek adresindeki değeri rax'e yükler
```

**_Taban ve İndeksli Adresleme_**: Bir taban kaydı ve indeks kaydı ile bellekteki bir değere erişir. Dizi ve matrislerde çokça kullanılır.

```asm
mov rax, [rbx + rcx*4] ; rbx'in işaret ettiği adresten rcx*4 kadar ilerideki değeri rax'e yükler
```

**Operandların Kombinasyonları**

Komutlarda kullanılan operand sayısı ve türleri değişebilir. Örneğin:

**_Tek Operandlı Komutlar_**: inc, dec gibi komutlar sadece bir operand kullanır.

```asm
inc rax    ; rax'in değerini 1 artırır
```

**_İki Operandlı Komutlar_**: mov, add gibi komutlar iki operand alır ve birini diğerine kopyalar veya üzerinde işlem yapar.


```asm
add rax, rbx   ; rax ve rbx'i toplar, sonucu rax'e yazar
```

---

## :four: Assembler'lar (Nasm) ve Yazım Şekli - Linkleme `ld` ve Sıkıştırma - Gömme `arc rcs` - Obje Dosyaları - Statik (`.a` uzantılı dosyalar `libasm.a` gibi) ve Dinamik Kütüphaneler `.dll` `.so` - Runtime ve Compile Time - `errno` - Assembly ve C ile İlişkisel Bağlantı Kurma - `-no-pie` Flag'i nedir? Dışarıdan Harici Fonksiyon Çağırma (malloc) - `.asm` ve `.s` Dosyası

### Assembler Nedir?

Assembler, assembly dilinde yazılmış bir programı makine diline çevirmek için kullanılan bir yazılım aracıdır. Assembler, insan tarafından okunabilir komutları (assembly dilindeki talimatları), bilgisayarın doğrudan çalıştırabileceği ikili (binary) makine kodlarına dönüştürür. Bu süreç, yüksek seviyeli programlama dillerinin derlenmesine benzer; ancak assembler, işlemciye özgü komutları doğrudan makine diline çevirir.

Assembly Kodu Makine Koduna Çevirme: Assembler’ın en temel işlevi, assembly kodunu makine diline çevirmektir. Assembly komutları işlemci mimarisine özgüdür ve assembler bu komutları ikili (binary) kodlara çevirerek işlemcinin anlayacağı biçime getirir.

İnsan ile Makine Arasında Köprü Oluşturma: Makine kodları (ikili sistemde) doğrudan insan tarafından yazılması ve okunması zor bir formattır. Assembly dili, ikili komutlara göre daha okunabilir ve anlaşılırdır. Assembler, bu iki dil arasında bir çevirmen görevi üstlenerek, insan tarafından anlaşılır assembly dilini makine tarafından çalıştırılabilir hale getirir.

Kodun İşlemciye Özgü Olmasını Sağlama: Her işlemci mimarisi (x86, ARM, MIPS gibi) kendine özgü bir komut seti kullanır. Bu komut seti, işlemcinin hangi komutları tanıyıp çalıştırabileceğini belirler. Assembler, bu komutları işlemciye uygun makine koduna dönüştürerek belirli bir mimariye özgü programlar oluşturmayı sağlar.

**Assembler Çalışma Süreci: Derleme Adımları**

- **Sözdizimi Analizi (Lexical Analysis):** Assembler, assembly kodunun sözdizimini kontrol eder ve her komutu belirli parçalarına ayırır (etiketler, talimatlar, operandlar).

- **İşlemci Talimatları ile Eşleştirme:** Her assembly komutunu işlemciye özgü ikili bir talimat koduna (opcode) dönüştürür. Örneğin, mov rax, 1 komutu, işlemci komut setine bağlı olarak belirli bir makine koduna çevrilir.

- **Semboller ve Etiketlerle Çalışma:** Assembler, etiketleri ve sabitleri değerlendirir. Bu semboller ve etiketler, programın dallanma komutlarında (jmp, call gibi) veya veri adreslerinde (belirli değişkenlerin adresleri) kullanılır.

- **Bağlantı Tablosu Oluşturma:** Bazı assembler’lar, harici veya başka dosyalardaki sembollerle bağlantı kurmak için sembol tabloları oluşturur. Bu tablo, linker’ın (bağlayıcı) programın parçalarını bir araya getirmesine yardımcı olur.

- **Çıkış Dosyası Üretme:** Assembler, nihayetinde çalıştırılabilir bir ikili dosya (örn. .exe veya .bin) veya bir nesne dosyası (örn. .o veya .obj) üretir. Bu dosya, bilgisayarın işletim sistemi tarafından çalıştırılabilir.

**Farklı Assembler Türleri ve Örnekler**

Assembler’lar, farklı işlemci mimarileri ve assembler sözdizimleri için çeşitli versiyonlara sahiptir. 

	NASM (Netwide Assembler): Özellikle x86 ve x86_64 mimarisi için popüler bir assembler’dır.
	MASM (Microsoft Macro Assembler): Microsoft’un x86 assembler’ıdır ve Windows platformlarında kullanılır.
	GAS (GNU Assembler): GNU Assembler, GCC derleyici paketinin bir parçasıdır ve birçok platformda kullanılabilir.
	FASM (Flat Assembler): x86 mimarisi için hızlı ve taşınabilir bir assembler’dır.
 
 **Syntax (sözdizimi) farklılıkları**

x86'da assembler’lar için sözdizimi (syntax) farklılıkları bulunur ve bu farklılıklar, komutların yazım biçiminde, operand sıralamasında ve belirli sembollerin kullanımında ortaya çıkar. Özellikle Intel ve AT&T olmak üzere iki ana sözdizimi standardı vardır. Intel sözdizimi NASM ve MASM gibi assembler’larda kullanılırken, AT&T sözdizimi genellikle UNIX ve Linux sistemlerinde GCC'nin GAS (GNU Assembler) ile birlikte varsayılan olarak kullanılır.

Intel ve AT&T Sözdizimi Karşılaştırması

	Operand Sıralaması:
	Intel Sözdizimi: İlk operand hedef (destination), ikinci operand ise kaynak (source) olarak belirtilir.
        AT&T Sözdizimi: İlk operand kaynak (source), ikinci operand ise hedef (destination) olarak belirtilir.

Örnek:

```asm
; Intel sözdizimi
mov rax, rbx    ; rbx’teki değeri rax’e kopyalar (hedef, kaynak)

; AT&T sözdizimi
movq %rbx, %rax ; rbx’teki değeri rax’e kopyalar (kaynak, hedef)
```

**Kayıtların (Register) Gösterimi:**

    Intel Sözdizimi: Kayıt isimleri direkt yazılır (örn. rax, rbx).
    AT&T Sözdizimi: Kayıt isimlerinin başına % eklenir (örn. %rax, %rbx).
    
Bu, AT&T sözdiziminde bir operandın kayıt mı, bellek mi olduğunu ayırt etmek için kullanılır.


**Sabit (Immediate) Değerlerin Gösterimi:**

    Intel Sözdizimi: Sabit değerler doğrudan yazılır (örn. 10, 0x1A).
    AT&T Sözdizimi: Sabit değerlerin başına $ işareti eklenir (örn. $10, $0x1A).
    
Bu, AT&T sözdiziminde sabit değerleri bellek adreslerinden ayırmak için yapılır:

```asm
; Intel sözdizimi
mov rax, 10

; AT&T sözdizimi
movq $10, %rax
```

**Bellek Adresleme:**

    Intel Sözdizimi: Bellek adresleri köşeli parantez [] ile gösterilir.
    AT&T Sözdizimi: Bellek adresleri parantez () ile gösterilir. Ayrıca, AT&T’de karmaşık adresleme biçimlerinde bileşenler ters sırada belirtilir.
    
```asm
; Intel sözdizimi
mov rax, [rbx]          ; rbx'in işaret ettiği adresteki değeri rax'e yükler
mov rax, [rbx + 4*rcx]  ; rbx + 4*rcx'in işaret ettiği adresteki değeri rax'e yükler

; AT&T sözdizimi
movq (%rbx), %rax       ; %rbx'in işaret ettiği adresteki değeri %rax'e yükler
movq (%rbx, %rcx, 4), %rax ; %rbx + 4*%rcx'in işaret ettiği adresteki değeri %rax'e yükler
```

**Komut İsimleri ve Uzantılar:**

    Intel Sözdizimi: Komut isimleri, kullanılan operandların uzunluğunu belirtmez (örn. mov, add).
    AT&T Sözdizimi: Komut isimlerine, operandların uzunluğunu belirtmek için b (byte), w (word), l (long) veya q (quadword) gibi uzantılar eklenir.

```asm
; Intel sözdizimi
mov rax, rbx

; AT&T sözdizimi
movq %rbx, %rax   ; q, 64-bit (quadword) olduğunu belirtir
```

### Assembly Dosya Uzantısı Farklılıkları (`.s` - `.asm`)

Her iki uzantı da assembly dilinde yazılmış kaynak dosyaları ifade eder, ancak kullanım farklılıkları vardır ve bu farklar tarihsel ve sistem gereksinimlerinden kaynaklanır.

**`.asm` Dosya Uzantısı**

    Kullanım Alanı: .asm uzantısı, özellikle Intel sözdizimini kullanan assembler’lar (NASM, MASM gibi) için yaygın olarak kullanılır.
    Platformlar: .asm dosyaları çoğunlukla DOS/Windows sistemleri ve Intel işlemcilerde tercih edilir.
    Derleyici/Assembler Uyumu: NASM (Netwide Assembler), MASM (Microsoft Macro Assembler) ve FASM (Flat Assembler) gibi assembler’lar .asm dosyalarını kullanır ve genellikle Intel sözdizimiyle uyumlu çalışır.
    Tarihsel Nedenler: .asm uzantısı, özellikle 80'lerden itibaren PC'lerde ve Windows ortamında standartlaşmıştır. Bu nedenle Windows ve DOS tabanlı sistemlerde daha yaygındır.
    
    
**`.s` Dosya Uzantısı**

    Kullanım Alanı: .s uzantısı, UNIX ve Linux sistemlerinde yaygın olarak kullanılır ve çoğunlukla AT&T sözdizimini kullanan assembler’lar ile ilişkilidir.
    Platformlar: .s dosyaları genellikle Linux ve UNIX tabanlı sistemlerde tercih edilir.
    Derleyici/Assembler Uyumu: GCC derleyicisi veya Clang gibi araçlar, C veya C++ kaynak kodunu .s uzantılı assembly dosyalarına dönüştürür. GCC’nin parçası olan GNU Assembler (GAS) da varsayılan olarak .s dosya uzantısını kullanır.
    Tarihsel Nedenler: UNIX tabanlı sistemlerde .s uzantısı, GCC gibi araçlarla üretilen assembly kodunun uzantısı olarak standartlaşmıştır. UNIX’in dosya isimlendirme geleneğine uygun olarak daha kısa ve basittir.

**Neden İki Farklı Uzantı Kullanılıyor?**

    Platform ve Sözdizimi Farklılıkları:
    Windows/DOS sistemlerinde Intel tabanlı NASM ve MASM gibi assembler’lar yaygınken, UNIX ve Linux tabanlı sistemlerde GCC/GAS kullanımı daha yaygındır.
    Intel sözdizimini kullanan assembler’lar için .asm uzantısı daha standarttır, AT&T sözdizimini kullananlar için ise .s tercih edilir.

**GCC’nin Çıkışı Olarak `.s` Kullanımı:**

    UNIX ve Linux sistemlerinde, C kodunun assembly çıktısını almak için GCC veya Clang derleyicileri .s uzantısını kullanır. Bu dosyalar, otomatik olarak GCC’nin ürettiği assembly dosyalarıdır.

**Dosya İsmi Uzunluk Standartları:**

    UNIX sistemleri, daha kısa dosya isimlerini tercih eder. Bu nedenle, AT&T ve UNIX kökenli araçlarda .s daha sık kullanılır.
    Windows/DOS sistemlerinde daha açıklayıcı dosya uzantıları (.asm, .obj, .exe gibi) tercih edilir.

**Derleme Araçları Uyumluluğu:**

    GCC ve GAS gibi araçlar .s dosyalarını, NASM ve MASM gibi assembler’lar ise .asm dosyalarını varsayılan olarak kullanır.

>[!IMPORTANT]
>
> **Konuyla tamamıyla ilgisiz de olmayan ama eyleme döküldüğünde anlamsız bir tatmin hissi uyandıran o bilgi**
> GCC derleyicisi ile bir C dosyasının assembly kaynak dosyasının `.s` çıktısı alınabilir:
>```
> gcc -S main.c
>```

**Assembler (NASM) ile assembly dosyası derleme**

**Linux'da:**

```asm
section .data
msg db "Selam", 0xa
msg_len equ $ - msg

section .text
global _start


_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msg_len
	syscall
	mov rax, 60
	mov rdi, 0
	syscall
```

```bash
$ nasm -f elf64 -o test.o test.s
$ ld -o test test.o
```

1. `nasm`: Netwide Assembler (NASM), x86 mimarisi için kullanılan bir assembler'dır. Assembly dilini makine diline çevirir.
2. `-f elf64`: Bu seçenek, çıktının ELF (Executable and Linkable Format) 64 bit biçiminde olacağını belirtir. ELF formatı, Linux gibi Unix tabanlı işletim sistemlerinde yaygın olarak kullanılır. 64 bit mimari için uygun olduğundan, bu komut nasm'a çıktıyı 64 bitlik bir formatta oluşturması gerektiğini söyler.
3. `-o test.o`: Bu seçenek, derlenen çıkış dosyasının adını belirler. Burada merhaba.o adında bir nesne dosyası oluşturulacaktır. `o` uzantısı, bu dosyanın bir nesne dosyası olduğunu belirtir.
4. `merhaba.s`: Bu, derlenecek olan assembly dosyasının adıdır. nasm, bu dosyayı alarak belirtilen formatta bir nesne dosyası oluşturur.
5. `ld`: GNU Linker, nesne dosyalarını birleştirerek çalıştırılabilir bir dosya oluşturmak için kullanılan bir araçtır.
6. `-o test`: Bu seçenek, oluşturulacak çalıştırılabilir dosyanın adını belirtir. Burada test adında bir dosya oluşturulacaktır. Yani, program çalıştırıldığında `./test` şeklinde çağrılabilir.
7. `test.o`: Linker, bu nesne dosyasını alır ve bir çalıştırılabilir dosya oluşturur. Bu nesne dosyası, nasm ile oluşturulan makine dilinde sembolik kodları içerir.

**MacOS'da:**

```asm
section .data
msg db "Selam", 0x0a

section .text
global _main

_main:
	mov rax, 0x2000004 ; System call write = 4
	mov rdi, 1 ; stdout
	mov rsi, msg
	mov rdx, 6 ; size of string + 1
	syscall
	mov rax, 0x2000001 ; system call exit = 1
	mov rdi, 0 ; exit success = 0
	syscall
```

```bash
$ nasm -f macho64 test.s -o test.o
$ ld -arch x86_64 -lSystem test.o -o test
```

1. `-f macho64`: Bu seçenek, NASM'a derleme için hedef dosya formatının mach-o 64-bit formatında olmasını belirtir.
   1. **mach-o**, macOS işletim sisteminde kullanılan bir dosya formatıdır (Mach Object format). Mach-O formatı, macOS ve iOS sistemlerinde çalıştırılabilir dosyalar, paylaşımlı kütüphaneler ve nesne dosyaları için kullanılır.
   2. **64**, 64-bit hedef mimari anlamına gelir. Bu seçenekle NASM, x86_64 işlemci mimarisi için uyumlu bir Mach-O nesne dosyası (test.o) oluşturur.
2. `-arch x86_64`: Bu seçenek, oluşturulacak çalıştırılabilir dosyanın mimarisini belirtir. **x86_64**, 64-bit mimariye sahip bir çalıştırılabilir dosya üretileceğini ifade eder.

3. `-lSystem`: Bu seçenek, System Framework ile bağlantı kurar.
   3. System framework, macOS’ta temel sistem işlevlerini içeren kütüphaneleri kapsar (örneğin, bellek yönetimi, giriş/çıkış, sistem çağrıları). Bu seçenek olmadan, macOS sistem çağrıları ve diğer çekirdek işlevleri çalıştırılabilir dosyada eksik olabilir.

**Neden Bu Şekilde Yapılıyor?**

    Modülerlik:
        Assembly kodu, makine diline dönüştürülürken önce bir nesne dosyasına (obj) dönüştürülür. Bu, kodu modüler hale getirir. Yani, farklı kaynak dosyalarını ayrı ayrı derleyebilir ve sonra birleştirebilirsin.

    Bağımlılık Yönetimi:
        Birden fazla nesne dosyasını birleştirerek, farklı modüllerin birbirleriyle nasıl etkileşime gireceğini belirleyebilirsin. Bu, özellikle büyük projelerde bağımlılıkları yönetmeyi kolaylaştırır.

    Format Seçimi:
        -f elf64 gibi seçenekler, hedef sistemin gereksinimlerine göre uygun dosya formatının seçilmesine yardımcı olur. ELF formatı, Linux'ta yaygın olarak kullanılan bir formattır ve dinamik bağlama gibi özellikleri destekler.

    Hedef Dosya Tanımlama:
        -o seçeneği ile çıktının ismi belirlenir. Bu, çıktının hangi isimle kaydedileceğini kontrol etmeni sağlar ve sistemdeki dosya karmaşasını önler.

### Nesne Dosyaları `.o` Nedir?

Nesne dosyası, derlenmiş kod ve veri içeren, fakat doğrudan çalıştırılabilir bir program olmayan bir dosya türüdür. Genellikle yazılım geliştirme sürecinin bir parçası olarak oluşturulan nesne dosyaları, derleyiciler veya assembler’lar tarafından üretilir ve sonrasında linker kullanılarak çalıştırılabilir bir dosya haline getirilir.

Nesne Dosyasının Özellikleri:

    İçerik:
        Nesne dosyası, makine kodu, veri ve sembol bilgilerini içerir. Makine kodu, CPU tarafından doğrudan çalıştırılabilir. Veri kısmı, programın çalışması sırasında ihtiyaç duyulan değişkenleri içerir.
        Semboller, fonksiyon ve değişkenlerin adlarını tanımlar. Linker, bu sembolleri çözerek çalıştırılabilir dosya oluşturur.

    Format:
        Nesne dosyaları, genellikle belirli bir formatta (örneğin, ELF, COFF, OMF) saklanır. Bu format, dosyanın nasıl okunacağını ve işleneceğini belirler.
        ELF (Executable and Linkable Format): Linux gibi Unix tabanlı sistemlerde yaygın olarak kullanılan bir nesne dosyası formatıdır.
        COFF (Common Object File Format): Windows sistemlerinde kullanılan bir nesne dosyası formatıdır.

    Modülerlik:
        Program kodu genellikle birden fazla kaynak dosyasına yayılır. Her kaynak dosyası ayrı bir nesne dosyası olarak derlenir. Linker, bu nesne dosyalarını birleştirerek çalıştırılabilir bir dosya oluşturur. Bu, kodun modüler olmasını sağlar ve geliştirme sürecini kolaylaştırır.

    Yeniden Kullanılabilirlik:
        Daha önce derlenmiş nesne dosyaları, tekrar derlemeye gerek kalmadan başka projelerde de kullanılabilir. Bu, geliştirme süresini kısaltır.

    Debug Bilgisi:
        Nesne dosyaları, hata ayıklama (debugging) bilgilerini içerebilir. Bu bilgiler, geliştiricilerin kodu hata ayıklarken daha iyi anlamalarına yardımcı olur.

### Linkleme `ld` Nedir?

Linkleme (linking), bir programın çalıştırılabilir hale getirilmesi için yapılan son adımdır. Derleyiciler, kaynak kodu tek başına çalıştırılamayan nesne dosyalarına dönüştürür. Linkleme işlemi ise bu nesne dosyalarını alır ve çalıştırılabilir bir dosya (örneğin .exe, .out veya bir Mach-O dosyası) oluşturur.

Linkleme, statik ve dinamik olarak iki ana türde yapılabilir ve her iki tür de çalıştırılabilir dosyanın oluşmasında farklı şekilde işlev görür.

Linkleme Aşamaları ve İşlevi

    Sembol Çözümleme:
        Nesne dosyaları içindeki semboller (fonksiyonlar, değişkenler) çözülür.
        Örneğin, bir dosyada printf gibi bir fonksiyon çağrıldığında, linker bu fonksiyonun hangi kütüphanede olduğunu bulur ve adresini çözerek çağrıyı bağlar.

    Bellek Düzenleme (Relocation):
        Farklı nesne dosyalarındaki kod ve veri segmentleri (örneğin .text, .data) bellekte belirli adreslere yerleştirilir.
        Linker, her segmentin adresini belirleyerek, gerektiğinde adresleri günceller.

    Dış Kütüphaneleri Bağlama:
        Programın dış kütüphanelere ihtiyaç duyduğu fonksiyon ve verileri, çalıştırılabilir dosyaya ekleyebilir.
        Örneğin, math.h kütüphanesi gibi bir kütüphanedeki matematik fonksiyonları programa dahil edilir.

    Çalıştırılabilir Dosya Üretme:
        Linkleme işlemi sonunda tüm kod, veri, sembol ve kütüphaneler tek bir çalıştırılabilir dosyada birleştirilir.

**Statik ve Dinamik Linkleme**

**Statik Linkleme**

Statik linkleme, gerekli tüm kütüphane fonksiyonlarının çalıştırılabilir dosyanın içine dahil edilmesidir. Bu yöntemde, program çalışırken ek bir dış kütüphane dosyasına ihtiyaç duymaz, çünkü kütüphanenin tüm kodları çalıştırılabilir dosyada yer alır.

    Avantajları:
        Taşınabilirliği kolaydır; başka sistemlerde çalıştırmak için gereken her şey tek dosya içinde bulunur.
        Kütüphane sürümlerine bağımlılık yoktur; her sürüm çalıştırılabilir dosyada yer alır.
    Dezavantajları:
        Dosya boyutları daha büyük olur.
        Kütüphane güncellemeleri yapılırsa, her çalıştırılabilir dosya yeniden linklenmelidir.

**Dinamik Linkleme**

Dinamik linklemede, kütüphane fonksiyonları çalıştırılabilir dosyanın içine dahil edilmez. Bunun yerine, kütüphaneler işletim sistemi tarafından program çalıştığında dinamik olarak bağlanır.

    Avantajları:
        Çalıştırılabilir dosya boyutu küçülür.
        Aynı kütüphane birçok program tarafından paylaşılabilir, böylece bellekte verimli kullanım sağlanır.
        Kütüphane güncellendiğinde programlar otomatik olarak bu güncel sürümü kullanır.

    Dezavantajları:
        Çalıştırılabilir dosya, kütüphanelerin yüklenebilir durumda olmasına bağlıdır. Bir kütüphane eksik veya hatalıysa program çalışmaz.
        Kütüphanelerin güncellenmesi beklenmedik sorunlara neden olabilir.

Örnek:

Bir programda **_printf_** gibi bir C kütüphane fonksiyonu kullanıldığında, bu fonksiyonun gerçek tanımı libc kütüphanesinde bulunur. Derleyici **_printf_** fonksiyonunun varlığını doğrular ancak adresini çözmez; linker, libc kütüphanesinden bu sembolü bularak bağlar.

```bash
# C programını derleyip linklemek
gcc -o program program.c
```

Derleyici tarafından önce program.c dosyasını nesne dosyasına (program.o) dönüştürür.
Ardından linker, program.o dosyasını gerekli kütüphanelerle linkleyerek `program` adlı çalıştırılabilir dosyayı oluşturur.

Linkleme, bir programın düzgün çalışması için tüm bileşenleri bir araya getirir. Dış kütüphanelerle ilişkileri kurarak ve kodları uygun bellek adreslerine yerleştirerek programın çalışmaya hazır hale gelmesini sağlar. Bu işlemler olmasaydı, nesne dosyaları eksik semboller içerir ve çalıştırılamaz hale gelirdi.

### `.a` Dosyası, Statik (`.a`, `.lib` vb.) ve Dinamik (`.dll`, `.so` vb.) Kütüphaneler, `ar rcs` komutu, Runtime ve Compile Time

#### `.a` Dosyası

.a uzantılı dosya, statik kütüphane (static library) dosyasıdır ve genellikle C/C++ gibi programlama dillerinde kullanılan bir dosya formatıdır. Statik kütüphaneler, program derlenirken içerdiği fonksiyonların ve verilerin, programın yürütülebilir dosyasına (binary) statik olarak bağlandığı dosyalardır. Bu bağlama işlemi derleme sırasında yapılır ve çalışma zamanında (runtime) bu kütüphanelere erişilmez.

.a Dosyasının Kullanımı

    .a dosyaları derleme sırasında programlara linklenir.
    Linux ve macOS gibi Unix tabanlı sistemlerde yaygındır. Windows'ta karşılığı .lib uzantılı dosyalardır.
    C programları derlenirken .a dosyaları ile birlikte statik bağlantı yapılır. Bu işlem derleyici veya bağlayıcı (linker) tarafından gerçekleştirilir.

**Statik ve Dinamik Kütüphaneler Arasındaki Fark**

	Statik Kütüphane (.a dosyası): Program derlenirken kütüphanedeki kod programa dahil edilir ve bu kod çalıştırılabilir dosyanın içine gömülür. Program bağımsız çalışabilir çünkü gerekli tüm kütüphane kodları içeridedir.

    Dinamik Kütüphane (.so dosyası): Çalışma zamanında (runtime) yüklenen ve paylaşılan kütüphanelerdir. Program, dinamik kütüphanelere çalışma sırasında ihtiyaç duyar. Örneğin, .so dosyası Linux'ta kullanılan dinamik kütüphane formatıdır (Windows'ta .dll dosyalarıyla benzer).
    
Örnek: `.a` Dosyasının Kullanımı (Statik Kütüphane Dosyasını `libmath.a` Derleyin)

Bir `.a` dosyasını kullanarak bir C programı derlemek şu şekilde yapılabilir:

```bash
# add.c dosyasını derleyip .o nesne dosyası olarak kaydedin
gcc -c -o add.o add.c
# .o dosyasını libmath.a adlı statik kütüphaneye ekleyin
ar rcs libmath.a add.o
```

`ar` aracı, bir ya da daha fazla nesne dosyasını `.o` birleştirip `.a` dosyasını oluşturur.

Kütüphaneyi Kullanarak Programı Derleyin:

```bash
gcc main.c -L. -lmath -o program
```

- `L.` ile kütüphanelerin bulunduğu yolu (bu örnekte geçerli dizin) belirtiriz.
- `lmath` ile `libmath.a` kütüphanesini kullanacağımızı söyleriz.

Sonuçta program adlı yürütülebilir dosya oluşturulur ve kütüphanedeki kodlar programa dahil edilir.

### Statik ve Dinamik Kütüphaneler

Statik ve dinamik kütüphaneler, programların işlevselliğini artırmak için kullanılan, önceden derlenmiş kod ve veri koleksiyonlarıdır. Kütüphaneler, yazılım geliştirmeyi hızlandırır, kod tekrarını azaltır ve programların daha verimli çalışmasını sağlar. Bu kütüphaneler, çalıştırılabilir dosyalar (yani bir program) tarafından işlevlerin ve veri kaynaklarının yeniden kullanılabilir şekilde yüklenmesine olanak tanır. Ancak, kütüphaneler farklı yükleme ve bağlantı yöntemlerine göre statik ve dinamik olmak üzere iki ana türe ayrılır.

**Statik Kütüphane (`.a`, `.lib` vb.)**

Statik kütüphane, derleme zamanında çalıştırılabilir dosya ile birlikte tamamen bağlanan ve programın bir parçası haline gelen bir kütüphanedir. Statik kütüphaneler, belirli işlevleri yerine getiren önceden derlenmiş fonksiyonlar ve veri yapılarını içerir. Birden fazla programda yeniden kullanılabilir. Ancak, statik kütüphaneler programla birlikte derlendiği için bu kütüphaneleri kullanan her program, kütüphanenin ilgili kodunu kendi içinde taşır. Bu da programın boyutunu büyütebilir, fakat bağımsız çalışmasına olanak sağlar.

    Dosya Uzantısı: Genellikle UNIX tabanlı sistemlerde .a (archive) olarak adlandırılır, Windows ortamında ise .lib uzantısıyla kullanılır.
    Bağlantı Şekli: Program, statik kütüphaneyi içerdiği için çalışırken dış bir kütüphaneye ihtiyaç duymaz. Derleme sırasında, linker bu .a dosyasındaki tüm gerekli kodları çalıştırılabilir dosyaya dahil eder.
    Çalışma Prensibi: Linker, .a dosyasındaki fonksiyonları ve veriyi programın koduna ekler. Böylece çalıştırılabilir dosya, kendi başına yeterli olacak şekilde bağımsız hale gelir.

Avantajları:

    Taşınabilirlik: Statik kütüphaneler ile bağlanan programlar bağımsızdır; başka bir sisteme taşınırken ek kütüphanelere ihtiyaç duymaz.
    Stabilite: Program içindeki kütüphane kodları değişmediğinden kütüphane güncellemeleri, programın çalışmasını etkilemez.

Dezavantajları:

    Dosya Boyutu: Statik bağlama nedeniyle, her bir çalıştırılabilir dosya tüm kütüphane kodlarını içerir, bu da dosya boyutunu artırır.
    Güncelleme Zorluğu: Kütüphanedeki bir fonksiyonda hata giderildiğinde veya iyileştirme yapıldığında, programın yeniden derlenmesi gerekir.


**Statik Kütüphane Kullanımı**

Bir statik kütüphane oluşturmak için `ar` (archiver) komutu kullanılabilir.


**Dinamik Kütüphane (`.dll`, `.so` vb.)**

Dinamik kütüphaneler, çalışma zamanında yüklenir ve programa bağlanır. Bu kütüphaneler programın çalıştırılabilir dosyasına dahil edilmez; program çalışırken işletim sistemi tarafından yüklenir.

Dosya Uzantısı:

    .so (Shared Object): UNIX/Linux sistemlerinde kullanılan dinamik kütüphane dosyalarıdır.
    .dll (Dynamic Link Library): Windows işletim sistemlerinde kullanılan dinamik kütüphane dosyalarıdır.
    
	Bağlantı Şekli: Program, dinamik kütüphanedeki kod ve veriyi çalışırken çağırır. Kütüphane işletim sistemi tarafından bellek üzerinde paylaşımlı olarak yüklenir ve birden fazla program aynı kütüphaneyi paylaşabilir.

	Çalışma Prensibi: Program, dinamik kütüphane içindeki kodu çalışma zamanında (runtime) işletim sisteminden ister. Bu da çalıştırılabilir dosyanın küçük kalmasını sağlar.

 Avantajları:

    Küçük Dosya Boyutu: Çalıştırılabilir dosya, kütüphane kodlarını içermez. Bu nedenle dosya boyutu küçülür.
    Güncelleme Kolaylığı: Kütüphanede yapılan güncellemeler, kütüphaneyi kullanan tüm programlara yansır ve programların yeniden derlenmesi gerekmez.
    Bellek Verimliliği: Aynı anda birden fazla program aynı dinamik kütüphaneyi kullandığında bellek kullanımı daha verimli hale gelir.

Dezavantajları:

    Bağımlılık: Program, çalıştığı sistemde bu kütüphanelerin bulunmasını gerektirir. Eksik bir dinamik kütüphane programın çalışmamasına yol açabilir.
    Uyumluluk Sorunları: Kütüphanede yapılan değişiklikler veya güncellemeler, bazı programların bu kütüphaneyle uyumsuz hale gelmesine neden olabilir.
    
    
Örnek:

```bash
# foo.c'yi dinamik bir kütüphane olarak derleyin
gcc -fPIC -c foo.c -o foo.o
gcc -shared -o libfoo.so foo.o
```

Bu komutlar `libfoo.so` adında bir dinamik kütüphane oluşturur. 

Programı bu dinamik kütüphane ile linklemek için:
```bash
gcc main.c -L. -lfoo -o program
```

Program çalıştırıldığında, `libfoo.so` kütüphanesi sistemde bulunmalı veya `LD_LIBRARY_PATH` ortam değişkenine eklenmelidir.

**Statik ve Dinamik Kütüphaneler Arasındaki Fark**

	Statik Kütüphane (.a dosyası): Program derlenirken kütüphanedeki kod programa dahil edilir ve bu kod çalıştırılabilir dosyanın içine gömülür. Program bağımsız çalışabilir çünkü gerekli tüm kütüphane kodları içeridedir.

    Dinamik Kütüphane (.so dosyası): Çalışma zamanında (runtime) yüklenen ve paylaşılan kütüphanelerdir. Program, dinamik kütüphanelere çalışma sırasında ihtiyaç duyar. Örneğin, .so dosyası Linux'ta kullanılan dinamik kütüphane formatıdır (Windows'ta .dll dosyalarıyla benzer).

### `ar rcs` Komutu Nedir?

`ar rcs` komutu, statik kütüphane dosyaları oluşturmak için kullanılan bir komuttur. `ar`, archiver anlamına gelir ve nesne dosyalarını birleştirerek statik bir kütüphane (`.a` uzantılı dosya) oluşturmak için kullanılır. Bu komut, özellikle C ve C++ programlarında kullanılan `.a` dosyalarını oluşturmak için yaygın olarak kullanılır.

`ar` komutunun sözdizimi ve `rcs` seçenekleri şunlardır:

    ar: Archiver komutunun kendisidir; dosyaları arşivleyerek bir kütüphane oluşturur veya mevcut kütüphaneyi günceller.
    r: Dosyaları kütüphaneye ekler veya günceller. Kütüphanede zaten bir dosya varsa, r seçeneğiyle güncellenir, yoksa yeni bir dosya olarak eklenir.
    c: Yeni bir kütüphane dosyası oluşturur (örneğin, libfoo.a gibi) ve dosya önceden mevcut değilse bir uyarı vermez.
    s: Kütüphaneye bir dizin ekler, yani kütüphanedeki sembollerin hızlı erişim için dizinlenmesini sağlar. Bu seçenek, bağlama işlemlerinin hızlanmasını sağlar.

Özetle, `ar rcs` komutu, bir kütüphane dosyası oluşturur, nesne dosyalarını kütüphaneye ekler veya günceller ve sembol tablosu oluşturur.

Örnek:

`foo.o` ve `bar.o` adlı iki nesne dosyamız var ve bunları bir statik kütüphaneye dönüştürmek istiyoruz:

```bash
ar rcs libexample.a foo.o bar.o
```

Bu komut:

    libexample.a adlı bir kütüphane dosyası oluşturur.
    foo.o ve bar.o dosyalarını bu kütüphaneye ekler.
    Sembol tablosu ekler ve hızlı erişim için kütüphaneyi optimize eder.

**`ar rcs` Kullanımının Amacı**

    Statik kütüphanelerle çalışırken .o nesne dosyalarını bir araya toplamak ve bir tek dosya üzerinden bağlama işlemlerini kolaylaştırmak için kullanılır.
    Bu kütüphaneler, daha sonra gcc -o program main.c -L. -lexample gibi komutlarla programa bağlanarak programın libexample.a içindeki işlevlere erişmesini sağlar.

**Sembol Tablosu Nedir?**

Sembol tablosu, derlenmiş bir kütüphane veya çalıştırılabilir dosyada, fonksiyonlar, değişkenler ve diğer tanımlı sembollerin isimlerini ve adres bilgilerini içeren bir tablodur. Statik kütüphanelerde sembol tablosu, linker’ın (bağlayıcı) kütüphane içinde belirli sembolleri hızlıca bulmasını ve programda doğru yere bağlamasını sağlar.

**Sembol Tablosunun İşlevi**

Bir program bir kütüphanedeki fonksiyonları veya değişkenleri kullanmak istediğinde, linker bu fonksiyonları ve değişkenleri **isimleri ile bulur** ve programda kullanılacak adreslerle ilişkilendirir. Örneğin, bir statik kütüphane içinde `foo` adlı bir fonksiyon varsa, linker programda `foo` fonksiyonunu çağıran yerlere kütüphanedeki `foo` fonksiyonunun adresini bağlar.

Sembol tablosu, linker’ın bu sembollerin yerini kütüphane içinde hızlı bir şekilde bulmasını sağlar:
- **Bağlama işlemi hızlanır**: Sembol tablosu olmadan linker, kütüphanedeki tüm dosyaları ve sembolleri tek tek aramak zorunda kalır.
- **Sembollere erişim kolaylaşır**: Fonksiyonlar ve değişkenler gibi semboller, isimlerinden doğrudan bulunabilir hale gelir.

**Sembol Tablosunun Yapısı**

Sembol tablosu, her sembol için:
- **Sembol adı** (örneğin, `foo`, `bar`, vb.)
- **Sembol türü** (fonksiyon, global değişken, vb.)
- **Adres** veya **offset** (sembolün kütüphane veya dosya içindeki yeri)
gibi bilgileri içerir. Bu bilgiler, linker’ın sembolleri programdaki kullanımlarla ilişkilendirmesi için gereklidir.

**Sembol Tablosunun Gerekliliği ve `ar rcs` ya da `ranlib` ile Oluşturulması**

Statik kütüphaneler, bir veya daha fazla nesne dosyasının birleştirilmiş halidir. `ar` komutu veya `ranlib` ile kütüphaneye eklenen sembol tablosu, linker’a hızlı erişim sağlar.

Örnek:

```bash
ar rcs libexample.a foo.o bar.o
```

Bu komut `libexample.a` kütüphanesi içinde `foo` ve `bar` nesne dosyalarının sembollerini hızlı erişim için indeksler. Böylece linker, `libexample.a` kütüphanesindeki `foo` veya `bar` fonksiyonlarını doğrudan sembol tablosundan bulabilir.

Sembol tablosu:
- Kütüphane veya çalıştırılabilir dosyadaki sembollerin isim ve adres bilgilerini içerir.
- Linker’ın program içindeki fonksiyon ve değişken referanslarını kütüphanedeki gerçek adreslerle ilişkilendirmesine yardımcı olur.
- Linkleme sürecini hızlandırır ve kolaylaştırır, böylece her program derlendiğinde sembollerin tek tek aranmasına gerek kalmaz.

Sembol tablosu olmadan, linker’ın sembolleri bulması çok yavaş olur ve bu da derleme sürecini uzatır. Bu yüzden statik kütüphanelerde sembol tablosu, hızlı bağlama ve verimlilik açısından kritik öneme sahiptir.

**`ar rcs` ve `ranlib`**

    ar rcs komutu, hem nesne dosyalarını kütüphaneye ekler hem de s seçeneği sayesinde sembol tablosunu oluşturur.
    ranlib, statik kütüphaneye yalnızca sembol tablosu eklemek veya var olan sembol tablosunu güncellemek için kullanılır.

Çoğu modern sistemde `ar rcs` kullanarak sembol tablosu oluşturmak yeterlidir, ancak eski sistemlerde veya `s` seçeneği desteklenmeyen `ar` sürümlerinde sembol tablosu eklemek için `ranlib` kullanmak gerekebilir.


### Runtime ve Compile Time nedir?

Compile time (derleme zamanı) ve runtime (çalışma zamanı), programın yaşam döngüsünde farklı aşamaları ifade eden iki önemli terimdir. Bu aşamalar, kodun yazılmasından çalıştırılmasına kadar geçen süreçte önemli bir rol oynar.

**Runtime**

Runtime, programın derlendikten sonra çalıştırıldığı zaman dilimini ifade eder. Bu aşamada, derlenmiş kod işlemci tarafından yürütülür ve kullanıcı ile etkileşime geçer. Çalışma zamanında oluşan olaylar programın işleyiş sürecini belirler.
Runtime’da Gerçekleşen İşlemler:

    Değişkenlerin Bellekte Saklanması: Program çalışırken değişkenler ve veri yapıları bellekte oluşturulur.
    Kullanıcı Etkileşimleri: Kullanıcıdan veri alma, ekran çıktıları veya diğer I/O işlemleri runtime aşamasında gerçekleşir.
    Dinamik Bellek Ayırma: Heap gibi dinamik bellek alanında runtime sırasında bellek ayrılır. Örneğin, malloc ve free gibi C işlevleri bu aşamada çalışır.
    Koşullu İfadeler ve Döngüler: Koşullu ifadeler (if-else) ve döngüler (for, while) çalıştırıldıkça kontrol akışı runtime’da belirlenir.

**Runtime Hataları**

Runtime hataları, program çalışırken meydana gelen hatalardır ve genellikle derleme sırasında tespit edilemezler. Bu hatalar, çalışma sürecinde oluştuğundan genellikle daha kritiktir, çünkü programın çökmesine veya beklenmedik davranışlara yol açabilir. Örneğin, sıfıra bölme veya bir dizi sınırını aşma gibi hatalar runtime’da oluşur.

Örnek:

```c
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d", arr[10]);  // Array sınırını aşma hatası
    return 0;
}
```

Bu örnekte, `arr[10]` ifadesi dizi sınırını aşar. Bu hata runtime’da oluşur ve programın beklenmedik bir davranış sergilemesine veya çökmesine neden olabilir.
Runtime’ın Önemi

Runtime’da programın kullanıcıyla etkileşime geçmesi, dinamik veri işlemleri yapması ve hedeflenen işlevleri yerine getirmesi beklenir. Runtime sırasında oluşabilecek hataları yakalamak için hataya dayanıklı programlama teknikleri (örneğin, hata kontrolü) ve bazen hata ayıklama araçları kullanılır.

**Compile Time**

Compile time, programın derleyici tarafından işlenip makine diline veya ara koda dönüştürüldüğü zaman dilimini ifade eder. Derleme zamanında, kaynak koddaki hatalar tespit edilir, kod optimize edilir ve işlemci için uygun komutlara çevrilir.

Compile Time’da Gerçekleşen İşlemler:

    Sözdizimi Kontrolü: Derleyici, kodun yazım kurallarına uygun olup olmadığını kontrol eder ve hatalı yazımlar tespit edilir.
    Tür Kontrolü: Değişkenlerin ve işlevlerin türleri, işleme uygun olup olmadığı açısından kontrol edilir. Yanlış tür kullanımları derleme hatası oluşturur.
    Optimizasyonlar: Derleyici, kodu optimize ederek daha hızlı ve daha az bellek kullanan bir çalışma ortamı oluşturabilir.
    Bağlama (Linking): Program, gerekli kütüphane ve modüllerle bağlanır. Bu işlem, çalıştırılabilir dosyanın eksiksiz hale gelmesini sağlar.

**Compile Time Hataları**

Compile time’da bulunan hatalar, derleme hataları olarak bilinir. Bu hatalar, kodun sözdizimsel hataları veya yanlış veri türü kullanımı gibi program çalışmadan önce fark edilen hatalardır. Örneğin, bir değişkenin tanımlanmadan kullanılması veya yanlış işlev çağrısı compile time hatasına yol açar.

Örnek:

```c
int main() {
    int x = "Hello";  // Hatalı tür kullanımı
    return 0;
}
```

Yukarıdaki örnekte, int türündeki x değişkenine string ("Hello") atanamaz. Bu, derleyici tarafından bir tür hatası olarak algılanır ve compile time’da tespit edilir.
Compile Time’ın Önemi

Compile time aşamasında kodun doğru bir şekilde çalıştırılabilir hale getirilmesi sağlanır. Compile time hatalarını çözmek, programın doğru çalışmasını ve runtime hatalarının azalmasını sağlar.

**Compile Time ve Runtime Arasındaki Farklar**

| Özellik       	   | Compile Time           			 | Runtime 					|
| ------------------------ |-------------------------------------------- |----------------------------------------------|
| Amaç      		   | Kodun derlenmesi ve hataların tespiti 	 | Programın çalıştırılması ve yürütülmesi   	|
| Hata Türleri      	   | Sözdizimi, tür ve derleme hataları      	 | Çalışma zamanı hataları (runtime errors)   	|
| Hata Yakalama Zamanı 	   | Derleme sırasında       	 		 | Program çalışırken   			|
| Optimizasyonlar 	   | Derleyici optimizasyonları       	 	 | Çalışma zamanı optimizasyonları   		|
| Dinamik Bellek Kullanımı | Genelde yapılmaz       	 		 | Yapılır (heap kullanımı gibi)   		|

### Assembly ve C dosyaları ile İlişkisel Bağlantı Kurma

Assembly dosyalarını C dosyalarında kullanmak, C programının doğrudan düşük seviyeli işlemler yapabilmesini sağladığı için çok güçlü bir yöntemdir. Bu entegrasyon iki dosya türünü derleyip bağlama işlemleriyle gerçekleştirilir. Temel olarak, C kodundan bir assembly fonksiyonunu çağırarak veya C’de yazılmış bir fonksiyona assembly kodunu entegre ederek bu işlemi yapabilirsiniz.

**Assembly Dosyasını C Programında Harici Bir Fonksiyon Olarak Kullanma**

Bir assembly dosyasında yazılmış bir fonksiyonu C kodunda çağırmak için aşağıdaki adımları takip edebilirsiniz.

Örnek Senaryo: Assembly’de Yazılmış _add_ Fonksiyonunu C’de Kullanmak

Örneğin, bir add fonksiyonunu assembly’de yazıp, C programında çağırmak istiyoruz.

**Adım 1: Assembly Fonksiyonunu Yazma**

İlk olarak, assembly dosyasını (örneğin `add.s`) şu şekilde yazıyoruz:

```asm
; add.s - Assembly fonksiyonu
section .text
    global add             ; add fonksiyonunu C'den erişilebilmesi için global yapıyoruz

add:
    mov rax, rdi           ; İlk argümanı rax'e yükle
    add rax, rsi           ; İkinci argümanı rax'e ekle
    ret                    ; Sonucu rax'te döndür
```

Bu assembly fonksiyonu:

    İlk argümanı rdi kaydında, ikinci argümanı ise rsi kaydında alır (x86-64 mimarisi için).
    Bu iki değeri toplayarak sonucu rax kaydına yazar ve fonksiyonu ret komutuyla sonlandırır.

**Adım 2: C Programında Assembly Fonksiyonunu Bildirme ve Çağırma**

Bir C programı (main.c) yazıyoruz ve add fonksiyonunu C koduna harici bir fonksiyon olarak tanıtıyoruz:

```c
#include <stdio.h>

extern long add(long a, long b);  // Assembly fonksiyonunu bildiriyoruz

int main()
{
    long result = add(5, 10);     // Assembly fonksiyonunu çağırıyoruz
    printf("Result: %ld\n", result);  // Sonucu yazdırıyoruz
    return 0;
}
```

`extern long add(long a, long b);` ifadesi, derleyiciye `add` adlı harici bir fonksiyonun var olduğunu bildirir. Bu sayede add fonksiyonu C programında tanımlı olmasa bile çağrılabilir.

**Adım 3: Derleme ve Linkleme**

C ve assembly dosyalarını birlikte derleyip linkleyerek çalıştırılabilir bir dosya elde ediyoruz. 

NASM kullanarak şu adımları izleyebilirsiniz:

Assembly dosyasını nesne dosyasına çevirin:

```bash
nasm -f elf64 -o add.o add.s
```

C dosyasını assembly nesne dosyasıyla birlikte derleyin:

```bash
gcc -o main main.c add.o
```

Programı çalıştırın:

```bash
./main
```

>[!IMPORTANT]
>
> **Konuyla alakası olmayan bir bilgi daha**
>
> **C Fonksiyonuna Assembly Kodunu Satır İçi (Inline Assembly) Olarak Eklemek**
>
> GCC, asm ifadesiyle inline assembly (satır içi assembly) kodu yazmayı destekler. Bu yöntem, C kodunun içinde assembly kodu eklemek için kullanılır. Daha kontrollü bir erişim sağlar ancak yalnızca küçük assembly kodları için uygundur.
>
> Örnek: Inline Assembly Kullanarak Toplama İşlemi
>
> ```c
> #include <stdio.h>
>
> int main() {
>    int a = 5, b = 10, result;
>
>    asm("addl %%ebx, %%eax"       // Assembly kodu
>        : "=a"(result)            // Çıktı operatörü, sonucu `result` değişkenine ata
>        : "a"(a), "b"(b)          // Girdi operatörleri, a ve b değerlerini eax ve ebx'e ata
>    );
>
>    printf("Result: %d\n", result);
>    return 0;
> }
> ```
>
> Burada:
>
> 		"addl %%ebx, %%eax": Assembly komutudur. ebx’i eax’e ekler.
>		"=a"(result): Assembly komutundan çıkan değeri result değişkenine atar (eax kaydındaki değeri result olarak belirtir).
>		"a"(a), "b"(b): Girdi operatörleri, a ve b değişkenlerini sırasıyla eax ve ebx kayıtlarına yükler.
>
> Bu yöntem, C kodunun içine küçük assembly kodları eklemek için uygundur. Program çalıştırıldığında Result: 15 çıktısını verecektir.
>
> C programları ve assembly kodları arasında entegrasyon iki ana yolla yapılabilir:
>
> 		Harici Assembly Dosyalarını C Programına Dahil Etmek: Assembly dosyasındaki fonksiyonları extern anahtar kelimesi ile tanımlayarak C kodunda kullanılabilir hale getirirsiniz. Derleme ve linkleme aşamasında her iki dosyayı da dahil ederek çalıştırılabilir dosya oluşturulur.
> 		Inline Assembly Kullanmak: Küçük assembly kod bloklarını C kodu içinde asm ifadesi ile yazabilirsiniz. Bu yöntem daha basit görevler için uygundur ancak büyük fonksiyonlar için tavsiye edilmez.
>
> Her iki yöntemde de C ile düşük seviyeli optimizasyonlar veya donanım etkileşimleri yapılabilir. Bu yöntemler sayesinde C programı, donanım seviyesinde daha verimli işlemler yapma imkanına sahip olur.


**Assembly içerisinde dışarıdan hazır fonksiyon (malloc, printf) bildirme ve çağırma ve kendi assembly fonksiyonlarını assembly'de kullanma**

Assembly dilinde dış kütüphanelerden hazır fonksiyonları (örneğin malloc, printf gibi C kütüphane fonksiyonlarını) kullanmak ve ayrıca kendi assembly fonksiyonlarını tanımlayıp çağırmak mümkündür. Bu işlemler, extern ve global direktifleri ile yapılır ve call komutu ile çağrılır. Aşağıda bu işlemlerin nasıl yapılacağı ayrıntılı olarak açıklanmıştır.

**Assembly'de Hazır Fonksiyonları (malloc, printf gibi) Kullanma**

Assembly kodunda C kütüphanelerindeki hazır fonksiyonları kullanmak için:

    Fonksiyonu extern ile tanımlamak gerekir. Böylece derleyiciye bu fonksiyonun başka bir kütüphanede bulunduğunu ve bağlama (linking) sırasında erişilebileceğini belirtmiş oluruz.
    Gerekli parametreleri doğru kayıtlara yükleyerek call komutu ile fonksiyonu çağırabiliriz.

Örnek: malloc ve printf Fonksiyonlarını Assembly’de Kullanma

```asm
section .data
    format db "Allocated memory address: %p", 0xA, 0  ; printf için format string

section .text
    global _start
    extern malloc             ; malloc fonksiyonunu dışarıdan kullanmak için bildiriyoruz
    extern printf             ; printf fonksiyonunu dışarıdan kullanmak için bildiriyoruz

_start:
    ; Bellekten 64 bayt ayırmak için malloc çağrısı
    mov rdi, 64               ; malloc için gereken boyutu rdi'ye yükle (x86-64 çağrı kuralları)
    call malloc               ; malloc çağrısı, dönen adres rax'e yazılır

    ; printf ile bellek adresini yazdırma
    mov rsi, rax              ; malloc'tan dönen adresi printf'in ikinci argümanı olarak rsi'ye yükle
    mov rdi, format           ; printf'in format string'i için ilk argümanı rdi'ye yükle
    xor rax, rax              ; printf fonksiyonunda gereksiz sonuç kaydı ayarı
    call printf               ; printf çağrısı, format ve bellek adresi yazdırılır

    ; Çıkış yap
    mov rax, 60               ; sys_exit sistem çağrısı
    xor rdi, rdi              ; Çıkış kodu 0
    syscall
```

Derleme ve Linkleme

Bu assembly kodunu çalıştırmak için, malloc ve printf fonksiyonlarına erişim sağlayacak olan C kütüphanelerine link yapmalıyız.

```bash
$ nasm -f elf64 -o example.o example.asm
$ gcc -no-pie -o example example.o -lc
```

- `-lc` seçeneği, programı C standart kütüphanesine bağlar ve malloc, printf gibi işlevlerin erişilebilir olmasını sağlar.
-`-no-pie` seçeneği, programın konum bağımsız bir çalıştırılabilir dosya oluşturmasını engeller, böylece kod örneğimizin çalışması garanti altına alınır.

>[!WARNING]
>
> Dosyayı linklerken "çift tanım" hatası alıyorsanız. Aşağıda ki biçimde tekrar linkleyin;
>
>```bash
> gcc -nostartfiles -no-pie -o example example.o -lc
>```
>
> `-nostartfiles`: C'nin başlangıç dosyalarını eklemeyi devre dışı bırakır.
>
> Çift tanım hatası, GCC'nin kendi başlangıç kodunu (C programları için _start etiketi içeren bir dosya) linklemeye çalışmasından kaynaklanıyor. GCC, C programlarını linklerken crt1.o gibi dosyaları otomatik olarak ekler ve bu dosyalarda _start etiketi tanımlıdır. Ancak assembly programında zaten _start etiketini tanımladığımız için çift tanım hatası alıyoruz.
>
> Bu sorunu çözmek için GCC'yi C başlangıç kodlarını eklememeye zorlayabiliriz. Bunu yapmak için GCC’ye `-nostartfiles` seçeneği verilir. Bu seçenek, GCC'nin C başlangıç dosyalarını eklemeden linkleme yapmasını sağlar.

**Assembly'de Kendi Fonksiyonlarını Tanımlama ve Çağırma**

Assembly'de kendi fonksiyonlarınızı tanımlamak ve çağırmak için:

    Fonksiyonu başka dosyalardan erişebilmek için global ile tanımlayabilirsiniz.
    Başka dosyada tanımlanan bir fonksiyonu başka bir dosya da bildirmek için extern komutu kullanılabilir.
    call komutu ile bu fonksiyonları çağırabilirsiniz.

_Örnek-1: Assembly’de Kendi Fonksiyonunu Tanımlama ve Çağırma_

```asm
section .text
    global _start
    global add_numbers         ; add_numbers fonksiyonunu global yaparak erişilebilir hale getiriyoruz

; add_numbers fonksiyonu
; İlk argüman rdi, ikinci argüman rsi kayıtlarında
add_numbers:
    mov rax, rdi               ; İlk argümanı rax'e kopyala
    add rax, rsi               ; İkinci argümanı rax'e ekle
    ret                        ; Sonucu rax'te döndür

; Programın ana kısmı (_start)
_start:
    mov rdi, 5                 ; İlk argümanı ayarla (5)
    mov rsi, 10                ; İkinci argümanı ayarla (10)
    call add_numbers           ; add_numbers fonksiyonunu çağır
    ; rax'te dönen sonuç 15 olacaktır

    ; Çıkış yap
    mov rax, 60                ; sys_exit sistem çağrısı
    xor rdi, rdi               ; Çıkış kodu 0
    syscall
```

_add_numbers_ adlı fonksiyon iki argüman alır: rdi ve rsi kayıtlarında gelen bu argümanları toplar ve sonucu rax kaydında döndürür.
`_start` bölümünde add_numbers fonksiyonunu `call add_numbers` ile çağırıyoruz. _add_numbers_ fonksiyonu `ret` ile geri döndüğünde, rax kaydında sonucu (15) taşır.

Derleme ve Çalıştırma

```bash
nasm -f elf64 -o example.o example.asm
ld -o example example.o
```

_Örnek-2: Assembly’de Kendi Fonksiyonunu Tanımlama ve Başka Assembly Dosyasından Çağırma_

Assembly’de bir dosyada tanımlanan fonksiyonu başka bir dosyada kullanmak için, global ve extern direktiflerini kullanarak iki dosya arasında fonksiyon paylaşımı yapabilirsiniz. Birinci dosyada fonksiyonu tanımlayıp, ikinci dosyada onu çağırabilirsiniz.

Örneğin, `add_numbers.asm` dosyasında bir toplama fonksiyonu tanımlayalım ve `main.asm` dosyasından bu fonksiyonu çağıralım.

Adım 1: İlk Dosyada Fonksiyonu Tanımlama `add_numbers.asm`:

Bu dosyada add_numbers adlı bir fonksiyon tanımlıyoruz. Bu fonksiyon iki argüman alır, toplama işlemini yapar ve sonucu döndürür;

`add_numbers.asm`:
```asm
section .text
    global add_numbers        ; Fonksiyonu başka dosyalardan erişilebilir yapmak için global yapıyoruz

add_numbers:
    mov rax, rdi              ; İlk argümanı rax’e taşıyoruz
    add rax, rsi              ; İkinci argümanı rax ile topluyoruz
    ret                       ; Sonucu rax’te döndürüyoruz
```

	Bu dosyada add_numbers adlı bir fonksiyon tanımlanır.
	global add_numbers ifadesi ile bu fonksiyonu başka dosyalardan erişime açıyoruz.
	rdi ve rsi register’larına gelen iki argümanı topluyor ve sonucu rax register’ında döndürüyoruz.

Adım 2: İkinci Dosyada Fonksiyonu Bildirme ve Çağırma (main.asm)

Bu dosyada add_numbers fonksiyonunu extern ile tanımlayıp call komutuyla çağırıyoruz;

`main.asm`:
```asm
section .text
    global _start
    extern add_numbers         ; add_numbers fonksiyonunun başka bir dosyada tanımlı olduğunu belirtiyoruz

_start:
    mov rdi, 5                 ; İlk argümanı ayarla (5)
    mov rsi, 10                ; İkinci argümanı ayarla (10)
    call add_numbers           ; add_numbers fonksiyonunu çağır

    ; Sonuç rax kaydında dönecek. Burada sadece çıktıyı test etmek için sonlandırma işlemi yapılacak.
    mov rax, 60                ; sys_exit çağrısı
    xor rdi, rdi               ; Çıkış kodu 0
    syscall
```

	extern add_numbers ifadesi, add_numbers fonksiyonunun başka bir dosyada tanımlı olduğunu belirtir ve link aşamasında add_numbers'ın adresi buraya bağlanır.
	_start etiketi altında, add_numbers fonksiyonunu call komutu ile çağırıyoruz.
	rax'ta add_numbers'ın sonucu bulunacaktır (15), ancak bu örnekte çıktıyı yazdırmak için ek bir işlem yapılmamıştır.

 Adım 3: Derleme ve Linkleme

```bash
nasm -f elf64 -o add_numbers.o main.o add_numbers.s main.s
```

```bash
ld -o example main.o add_numbers.o
```

### **_errno_** nedir?

errno, C dilinde standart kütüphane işlevleri ve sistem çağrıları tarafından kullanılan (hata durumlarında errno'ya gerekli değer atamalarını yapıyorlar (Örn: open, write, read, malloc, fopen vb.)) bir hata durumunu gösteren küresel bir değişkendir. Programın çalışması sırasında oluşabilecek hata durumlarını belirlemek için kullanılır. errno’ya atanan değer, son çalıştırılan fonksiyonda bir hata meydana gelip gelmediğini anlamaya yarar ve bu hata durumlarına karşılık gelen hata kodlarını tutar.

**errno Nasıl Çalışır?**

Birçok standart C kütüphane işlevi (örneğin, open, read, write gibi dosya işlemleri ya da malloc gibi bellek ayırma işlevleri) hata durumlarında bir değer döndürür ve oluşan hatanın ayrıntıları errno değişkeninde saklanır. Hata türü, errno'nun pozitif tam sayı değeriyle belirtilir. Bu sayıyı kontrol ederek veya strerror(errno) gibi işlevlerle anlamlı hale getirerek hatanın ne olduğunu anlayabiliriz.

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file = fopen("nonexistent.txt", "r");  // Bu dosya muhtemelen yok
    if (file == NULL) {
        printf("Error: %s\n", strerror(errno));   // errno'nun anlamlı bir hata mesajını yazdırır
    }
    return 0;
}
```

Bu örnekte `fopen` fonksiyonu başarısız olursa errno otomatik olarak uygun hata koduyla güncellenir ve strerror(errno) ile anlamlı bir hata mesajı döndürülür. Örneğin, böyle bir hata kodu 2 olabilir ve strerror(errno) ile bu, `No such file or directory` olarak çevrilebilir.

Çoğu işletim sisteminde errno, doğrudan bir küresel değişken olarak tanımlanmaz; bunun yerine bir işlev veya bir makro aracılığıyla erişilir. Bu, özellikle çoklu iş parçacıklı (multi-threaded) programlarda farklı iş parçacıklarının errno'yu bağımsız şekilde kullanabilmesini sağlar. errno'yu doğrudan bir değişken yapmak yerine, iş parçacığına özgü hata durumu elde etmek için errno'ya bir işlev aracılığıyla erişilir.

`extern int *__errno_location(void);` veya benzeri ifadeler, errno'nun iş parçacığına özel bir bellek konumunu döndürmek için kullanılan bir işlev tanımıdır. Bu sayede her iş parçacığı kendi errno değerine sahip olur.
`__error` veya `errno_location` gibi işlevler veya makrolar, errno'ya doğrudan erişim yerine errno’yu bir işlev veya makro aracılığıyla erişilen bir gösterici yapar.

Çoklu iş parçacıklı ortamlarda, errno iş parçacığına özgü bir yapı olmalıdır; aksi halde bir iş parçacığının hata durumu diğerini etkileyebilir:

    extern veya __errno_location gibi ifadeler, errno’yu doğrudan bir değişken değil, iş parçacığına özgü bir bellek adresini işaret eden bir gösterici yapar.
    Bu gösterici, her iş parçacığı için ayrı ayrı tanımlanır ve böylece her iş parçacığı kendi errno durumunu bağımsız olarak kullanır.

>[!IMPORTANT]
>
> **Konuyla alakasız bir bilgi C için**
>
> **Errno'yu manuel ayarlama**
>
> errno standart olarak sistem çağrıları ve kütüphane işlevleri tarafından otomatik olarak ayarlanır. Ancak errno değişkenine doğrudan bir değer atama yapılabilir. errno, teknik olarak global bir tam sayı değişkenidir, bu nedenle geliştirici tarafından el ile de bir değer atanabilir.
>
> **errno Değerine Elle Atama Yapmanın Durumları ve Kullanım Örnekleri**
>
> ```c
> #include <stdio.h>
> #include <errno.h>
> #include <string.h>
>
> int main() {
>     errno = EACCES;   // errno'ya 'Permission denied' anlamına gelen bir hata kodu atıyoruz
>     printf("Error: %s\n", strerror(errno));  // Ayarlanan errno değerini anlamlı bir mesaj olarak yazdırır
>
>     errno = 0;        // errno'yu sıfırlayarak önceki hatayı temizliyoruz
>     return 0;
>  }
> ```
> - `errno = EACCES`; ifadesi, errno'ya `Permission denied` anlamına gelen hata kodunu el ile atar.
> - `strerror(errno)` ile bu hata kodunun anlamı yazdırılır.
> - `errno = 0;` ifadesiyle errno sıfırlanır ve sonraki hatalar için temiz bir başlangıç yapılır.
>
> Hata kodlarının daha fazlasına erişim için `man errno` dokümanını inceleyebilirsiniz.


**`extern __error` veya `__errno_location` Nedir?**

`extern __error` veya `extern __errno_location`, genellikle C kütüphanelerinde tanımlı olan errno değişkenine erişim sağlamak için kullanılan fonksiyonlar veya sembollerdir. Bu semboller sayesinde, assembly kodunda errno’ya erişim sağlanabilir ve hata durumları kontrol edilebilir. errno, doğrudan bir değişken olmaktan ziyade, bir işlev veya sembolle iş parçacığına özgü hale getirilir. Böylece, her iş parçacığı kendi errno değerini kullanarak farklı hata durumlarını bağımsız olarak saklayabilir.

**`__errno_location` (Linux ve glibc üzerinde):**

__errno_location, bir fonksiyon olarak tanımlanmıştır ve çağrıldığında, errno'yu iş parçacığına özgü şekilde saklayan bellekteki adresini döndürür.
Çok iş parçacıklı programlarda, her iş parçacığının kendi errno değerini tutmasını sağlar.
Linux sistemlerinde, glibc gibi kütüphanelerde errno’ya erişmek için __errno_location fonksiyonunu kullanılır.

Örnek:

```asm
extern __errno_location

; örnek kullanım
call __errno_location
mov rax, [rax]       ; `errno` değerini `rax`’e yükler
```

`call __errno_location` komutu errno’nun adresini döndürür ve ardından `[rax]` ile errno değerini okuyabiliriz.

`__error` (macOS üzerinde):

`__error`, errno adresini döndürmek için kullanılan macOS ve bazı BSD tabanlı sistemlerde yaygın olarak bulunan bir semboldür.
`__error` işlevi, errno’nun adresini döndürerek çok iş parçacıklı uygulamalarda her iş parçacığının kendi errno değerine erişimini sağlar.

Örnek:

```asm
extern __error

; örnek kullanım
call __error
mov rax, [rax]       ; `errno` değerini `rax`’e yükler
```

`__error` fonksiyonunu çağırarak errno adresini elde ediyoruz ve ardından `[rax]` ile errno değerini okuyabiliyoruz.

Örnek Senaryo: Hata Kodunu errno Üzerinden Elde Etmek

Bir dosya açma işlemi yaparken oluşabilecek hatayı assembly kodunda `__errno_location` veya `__error` aracılığıyla errno'dan alabiliriz:

```asm
section .data
    filename db 'nonexistent.txt', 0   ; Açılacak dosya adı
    errmsg db 'Error code: %d', 0xA    ; Hata mesajı formatı

section .text
    global _start
    extern __errno_location            ; Linux/glibc sistemlerde errno erişimi için
    ; veya macOS'ta: extern __error

_start:
    ; open() sistem çağrısını yap
    mov rax, 2                         ; sys_open çağrısı
    mov rdi, filename                  ; İlk argüman: dosya adı
    mov rsi, 0                         ; İkinci argüman: yalnızca okuma
    syscall

    ; Hata kontrolü
    cmp rax, 0                         ; rax < 0 ise hata oluşmuş, errno'yu kontrol et
    jl error_handler                   ; Hata durumu varsa error_handler'a dallan

    ; Başarıyla açılmışsa program buradan devam eder
    jmp end_program                    ; Programı bitir

error_handler:
    call __errno_location              ; errno'nun adresini al
    mov rbx, [rax]                     ; errno değerini rbx'e yükle
    ; Burada rbx'teki hata kodunu kullanarak işlem yapılabilir

end_program:
    mov rax, 60                        ; sys_exit çağrısı
    xor rdi, rdi                       ; Çıkış kodu 0
    syscall
```

- **`__errno_location` (Linux) ve `__error` (macOS)**: errno değerini tutan bellekteki adresi döndürür, böylece assembly kodu errno'ya erişebilir.
- **Kullanım Amacı**: Çok iş parçacıklı uygulamalarda her iş parçacığının kendi errno değerini kullanmasını sağlamak ve hata durumlarını assembly dilinde yönetmektir.
- **Assembly’de `call` ile Kullanımı**: Bu işlevler `call` komutu ile çağrılır ve errno adresi döndürülür. Bu sayede errno değeri kontrol edilebilir ve uygun hata yönetimi yapılabilir.

Bu yapı, düşük seviyeli kodlarda hata yönetimi açısından önemli bir araçtır ve özellikle sistem çağrıları veya C kütüphaneleriyle çalışırken hata durumlarını kontrol etmek için kullanılır.

Örnek Kullanım:

```asm
extern __ernno_location
global my_write

section .text
my_write:
    mov rax, 1  ; sys_write
    syscall     ; call write
    cmp rax, 0
    jl error
    ret
error:
    neg rax    ; get absolute value of syscall return
    mov rdi, rax
    call __ernno_location
    mov [rax], rdi  ; set the value of errno
    mov rax, -1
    ret
```

Bu assembly kodu, my_write adlı bir fonksiyonu tanımlıyor. Bu fonksiyon, Linuxdaki sys_write sistem çağrısını kullanarak veri yazmaya çalışıyor ve bir hata oluşursa `errno` değişkenine hata kodunu yazıyor.

	 extern __errno_location: __errno_location işlevinin başka bir dosyada (genellikle bir C kütüphanesinde) tanımlı olduğunu belirtir. Bu işlev, errno'yu iş parçacığına özel bir değişken olarak döndürür.
	global my_write: my_write fonksiyonunu diğer dosyalardan erişilebilir hale getirir.
	section .text: Kodun .text bölümünü başlatır; bu bölüm, çalıştırılabilir talimatları içerir.
	my_write:: Fonksiyonun başlangıcını tanımlar.
	mov rax, 1: sys_write sistem çağrısını kullanmak için rax kaydına 1 koyar. rax sistem çağrısının numarasını içerir ve sys_write sistem çağrısının numarası 1’dir.
	syscall: sys_write sistem çağrısını gerçekleştirir. Sistem çağrısı başarılı olursa, yazılan bayt sayısı rax’e döner. Başarısız olursa rax negatif bir hata kodu içerir.
	cmp rax, 0: rax değerinin sıfırdan küçük olup olmadığını kontrol eder. Sıfırdan küçükse, sistem çağrısı başarısız olmuş demektir ve hata durumuna geçilir.
	jl error: rax sıfırdan küçükse (jl – jump if less), error etiketine dallanır.
	ret: Sistem çağrısı başarılıysa fonksiyon başarılı olarak sona erer ve program akışı geri döner.
	neg rax: rax negatif bir hata kodu içerir, neg ile bu değeri pozitif yaparız. Bu, errno'ya yazacağımız mutlak hata kodunu elde etmemizi sağlar.
	mov rdi, rax: rax kaydındaki pozitif hata kodunu rdi kaydına yükleriz. Bu değeri daha sonra errno değişkenine yazacağız.
	call __errno_location: __errno_location işlevini çağırarak errno değişkeninin adresini alırız. __errno_location, iş parçacığına özgü errno adresini döndürür ve bu adres rax kaydında saklanır.
	mov [rax], rdi: rax’in işaret ettiği bellek konumuna (errno adresine), rdi kaydındaki hata kodunu yazarız. Bu adım, errno değerini ayarlamış olur.
	mov rax, -1: rax kaydına -1 koyarız; bu değer, my_write fonksiyonunun hata durumunda döneceği değerdir.
	ret: Fonksiyondan hata durumu sonucu ile çıkar.

 **`neg` Komutunun Görevi**

 neg komutu, bir değerin negatifini alır, yani değeri işaret değiştirir. Bu işlem, değer pozitifse negatif, negatifse pozitif hale gelir.

İşleyiş Mantığı

`neg` komutu, değeri matematiksel olarak negatif yaparken ikiye tümleyen (two’s complement) yöntemi kullanır, çünkü işlemciler negatif sayıları bu yöntemle ifade eder.

    Pozitif bir değere neg uygulanırsa, bu değeri negatif hale getirir.
    Negatif bir değere neg uygulanırsa, bu değerin pozitif mutlak değerini elde ederiz.

```asm
mov rax, -5   ; rax = -5
neg rax       ; rax = 5
```

**Hata Kodları ve `neg` Kullanımı**

Sistem çağrıları genellikle bir hata oluştuğunda negatif bir değer döndürür. Linux'ta sys_write gibi birçok sistem çağrısı başarısız olduğunda rax’te negatif bir hata kodu döner. Ancak `errno` ya yazılacak hata kodları pozitif tam sayılar olarak ifade edilir:

`neg` komutu, negatif olan hata kodunu pozitif hale getirerek errno'ya yazmaya uygun hale getirir.

Örneğin:

    Bir sistem çağrısı başarısız olduğunda rax değeri -2 ise, errno için bu hata kodu 2 olarak kaydedilmelidir.
    neg komutu ile rax’teki negatif değer pozitife çevrilir ve bu pozitif hata kodu errno'ya yazılır.

errno'ya yazılacak hata kodlarının pozitif tam sayılar olarak ifade edilmesini POSIX (Portable Operating System Interface) standartları belirler. POSIX standardı, UNIX tabanlı işletim sistemlerinde hata yönetimi ve errno gibi küresel hata değişkenlerinin nasıl çalışacağı konusunda bazı kurallar koyar.

**POSIX Standardı ve errno**

POSIX standardına göre:

    Hata kodları, pozitif tam sayılar olarak tanımlanmıştır. Bu hata kodları, belirli hataları tanımlayan pozitif sabit değerler olarak kullanılır. Örneğin:
        EACCES (Permission denied) hatası için hata kodu 13
        ENOENT (No such file or directory) hatası için hata kodu 2
    Bu standart, errno değişkenine atanacak hata kodlarının pozitif olması gerektiğini belirler, çünkü bu sayılar birer sabit hata kodu olarak yorumlanır ve işletim sistemlerinde hataların kolayca tanımlanabilmesi için aynı kalması sağlanır.

**Sistem Çağrılarında Negatif Hata Kodları**

Birçok sistem çağrısı (örneğin, Linux'taki sys_write gibi) hata durumunda negatif bir değer döndürür, çünkü dönen değer rax kaydına işlenir ve sistem çağrısının başarılı olup olmadığını kontrol etmek için sıfırdan küçük olup olmadığına bakılır. Bu sayede, sistem çağrısının başarısızlık durumlarını kontrol etmek kolaylaşır:

    Negatif bir döndürme değeri → Hata
    Pozitif veya sıfır bir döndürme değeri → Başarılı sonuç veya başarıyla işlem gören bayt sayısı

Bu negatif hata kodları, POSIX tarafından tanımlanan pozitif errno kodlarına uygun hale getirilmek üzere mutlak değere çevrilir. Bu sayede, POSIX uyumlu yazılımlar, errno'ya atanmış pozitif hata kodlarını kullanarak bir hatanın ne olduğunu anlayabilir ve buna göre işlem yapabilir.

**Neden `[rax]` Kullanılıyor?**

`[rax]` ifadesi, rax kaydında tutulan adresin işaret ettiği bellek konumuna erişmek için kullanılır. Bu şekilde errno adresinin işaret ettiği yere, yani errno değişkeninin bulunduğu bellek alanına yazma işlemi yapılır.

	Bellek Adresine Erişim: __errno_location işlevi, errno değişkeninin bellek adresini döndürür ve bu adres rax kaydında saklanır. rax kaydında errno değişkeninin adresi olduğu için, [rax] ifadesiyle bu adresin işaret ettiği bellek konumuna erişiriz.
	Değeri Adrese Yazmak: mov [rax], rdi komutuyla, rdi kaydındaki hata kodunu rax kaydındaki adresin işaret ettiği bellek konumuna yazarız. Bu bellek konumu errno değişkenine ayrılmış olduğu için, bu işlem errno'nun değerini ayarlamış olur.
	
 	rax: errno'nun bellek adresini tutar.
	[rax]: rax’teki adresin işaret ettiği bellek konumunu ifade eder.
 
Bu yüzden mov `[rax]`, rdi ifadesi, errno değişkenine rdi kaydındaki hata kodunu atamak için kullanılır.

### gcc'de ki `-no-pie` Seçeneği Nedir?

GCC derleyicisindeki `-no-pie` seçeneği, oluşturulan çalıştırılabilir dosyanın konum bağımsız çalıştırılabilir dosya (Position Independent Executable, PIE) olmamasını sağlar. Bu seçenek, programın sabit bellek adreslerinden çalışmasını zorlar. Konum bağımsız çalıştırılabilir dosyalar, güvenlik açısından avantajlıdır, ancak assembly dilinde veya düşük seviyeli programlama yaparken belirli durumlarda `-no-pie` seçeneği kullanmak gerekebilir.

**Konum Bağımsız Çalıştırılabilir Dosya (PIE) Nedir?**

PIE dosyalar, programın çalıştığı bellek adreslerinin rastgeleleştirilmesine olanak sağlar. Bellek adreslerinin rastgeleleştirilmesi (ASLR - Address Space Layout Randomization), program her çalıştığında kodun, verinin ve yığın alanlarının farklı bellek adreslerinden başlamasını sağlar. Bu özellik, güvenlik açısından faydalıdır çünkü kötü niyetli yazılımların sabit adresleri hedef almasını zorlaştırır.

- **PIE Dosyaları**: Derleme sırasında programın kodu, adreslerin mutlak (sabit) bellek konumlarına değil, göreceli (relative) adreslerle bağlanır.
- **ASLR Desteği**: Çalışma anında, işletim sistemi her çalıştırmada farklı bir bellek adresi aralığı belirler, bu da bellekten kod ve veri çalınmasını zorlaştırır.

Özetle, PIE özellikli çalıştırılabilir dosyalar ASLR ile uyumlu çalışır.

**`-no-pie` Seçeneği Ne Yapar?**

`-no-pie`, GCC'ye PIE modunu devre dışı bırakmasını ve programı sabit adresler kullanarak derlemesini söyler. Bu, programın konum bağımlı bir çalıştırılabilir dosya olarak oluşturulmasını sağlar. Konum bağımlı bir çalıştırılabilir dosya, kod ve veri segmentlerinin her çalıştırmada aynı adreslerde başlamasına yol açar.
-no-pie Seçeneğinin Özellikleri:

    Sabit Adresler: -no-pie ile oluşturulan dosyalar sabit adresleri kullanır, dolayısıyla belirli adreslere doğrudan erişim yapılabilir.
    Eski Kod ve Assembly Uyumluluğu: Düşük seviyeli kodlarda veya assembly dilinde yazarken sabit adreslerle çalışmak gerekebilir. -no-pie seçeneği bu duruma uyum sağlar.
    Performans: Konum bağımlı çalıştırılabilir dosyalar bazı durumlarda daha hızlı çalışabilir, çünkü her işlem için adres çevirisi yapmaya gerek kalmaz.

**Neden `-no-pie` Kullanalım?**

Düşük seviyeli programlamada, özellikle assembly kodunda veya sabit bellek adresleriyle çalışan sistem programlarında konum bağımsızlık (PIE) gereksiz veya karmaşıklığa yol açabilir. Örneğin:

    Assembly Programlama: Assembly kodları, mutlak bellek adreslerine doğrudan erişim gerektirebilir. -no-pie ile sabit adres kullanmak, adres hesaplamalarını daha kolay hale getirir.
    Gömülü Sistemler: Gömülü sistemlerde bellek alanları sabittir. Konum bağımsız çalıştırılabilir dosya bu sistemlerde gereksiz olabilir.
    Performans Gereksinimleri: Bazı durumlarda ASLR'nin getirdiği ek maliyetler performans açısından sakıncalı olabilir.
    
Assembly programlama, gömülü sistemler ve sabit adres gerektiren sistem programlarında bu seçenek sıklıkla kullanılır.

---

## :five: Diğer Terim ve Kavramlar ve Sorular ve İfadeler

### errno

	Tanım: errno, C dilinde hata kodlarını tutan bir global değişkendir. Bir sistem çağrısı veya kütüphane işlevi başarısız olduğunda, bu değişken hatanın türünü belirtmek için güncellenir.
	Assembly ile İlişkisi: Sistem çağrıları veya düşük seviyeli işlevler başarısız olduğunda, program genellikle errno'ya yazmak için belirli kayıtları veya hafıza alanlarını kullanır. Bu, Assembly'de bir hata durumunu ele almak veya hata mesajlarını özelleştirmek için kontrol edilmesi gereken bir durumdur.

 ### PIE (Position Independent Executable)

	Tanım: PIE, yürütülebilir bir dosyanın belleğe hangi adreste yükleneceğinin önceden belirlenemediği anlamına gelir. PIE, ASLR (Address Space Layout Randomization) gibi güvenlik özellikleri için gereklidir, çünkü kod ve veri segmentlerinin bellek adresi her çalıştırmada farklı olur.
	-no-pie Flag'i: GCC derleyicisinde -no-pie bayrağı, yürütülebilir dosyanın sabit adresli olmasını sağlar. Yani, program belirli bir adres aralığında başlatılır ve ASLR gibi güvenlik özellikleri devre dışı kalır.
	Assembly ile İlişkisi: PIE olmayan kodlarda, hafızadaki belirli sabit adreslere doğrudan erişilebilir. PIE kullanıldığında, tüm bellek erişimleri göreceli olarak yapılır (yani, bir ofset kullanarak hesaplanır). Bu, özellikle fonksiyon çağrılarında **Global Offset Table (GOT)** ve **Procedure Linkage Table (PLT)** gibi yapıların kullanımını zorunlu kılar.

 ### GCC Relocation Hatası

	Tanım: Relocation, derlenmiş bir kod parçasının bellek adreslerinin, programın yürütüleceği sırada güncellenmesini ifade eder. Derleme sırasında, kodun bellek içinde nereye yerleştirileceği bilinmediğinden, referans adresleri genellikle göreceli ya da geçici olarak belirlenir.
	Assembly ile İlişkisi: Assembly dilinde yazılmış bir programda, bazı adresler yer değişimi yapılacak adresler olarak işaretlenir. GOT ve PLT gibi tablolar relocation işlemlerinde kullanılır ve özellikle PIE etkinse bu çok önemli hale gelir.

 ### GOT (Global Offset Table)

 	Tanım: GOT, programın global verileri için adresleri depolayan bir tablodur. Özellikle, harici fonksiyonlara veya değişkenlere erişim gerektiğinde kullanılır.
	Assembly ile İlişkisi: GOT, harici fonksiyonların adreslerine başvururken kullanılır. PIE etkin olduğunda, GOT, PLT ile birlikte çalışarak her çalıştırmada fonksiyon adreslerine dinamik olarak erişilmesini sağlar. Bu, bellek adreslerinin sabit olmadığı durumda dış referansların güvenli ve dinamik olarak yönetilmesini sağlar.

 ### ranlib

	Tanım: ranlib, ar ile oluşturulan statik kütüphanelere (arşivlere) dizin bilgisi eklemek için kullanılan bir araçtır. Bu dizin bilgisi, kütüphanedeki fonksiyon ve sembollerin hızlıca bulunmasını sağlar.
	Assembly ile İlişkisi: Assembly’de statik kütüphaneler oluştururken, ranlib kütüphane indekslerini güncelleyerek linkleme işleminin hızlı olmasını sağlar. Özellikle çok sayıda modül ve sembol içeren projelerde `ranlib` kullanımı, bağlama süresini azaltır.


### GCC (`-L. -lasm` Flags)

	Tanım: GCC’nin -L. ve -lasm bayrakları, kütüphane bağlama yolunu ve kütüphane ismini belirtir. -L. derleyiciye mevcut dizini araması için bir kütüphane yolu olarak eklerken, -lasm "asm" isimli bir kütüphaneyi linklemesini söyler.
	Assembly ile İlişkisi: Eğer asm adında bir statik veya dinamik kütüphane varsa, -lasm bu kütüphanede tanımlanan işlevleri kullanmayı sağlar. Assembly ile derlenen kütüphaneler için yaygın olarak kullanılır.

 ### `-no-pie` Flag’i ve `WRT ..plt` İlişkisi

	Tanım: -no-pie bayrağı, yürütülebilir dosyanın konum bağımsız olmamasını (non-PIE) sağlar. WRT (With Respect To) .plt, .plt (Procedure Linkage Table) içinde işlem yapma gerekliliğini ifade eder.
	Assembly ile İlişkisi: -no-pie kullanıldığında, PLT üzerinden yapılan işlemler, sabit adreslere yönelik olur. Ancak PIE etkin olduğunda, PLT kullanılarak yapılan fonksiyon çağrıları her çalıştırmada farklı adreslere göre düzeltilir.

 ### WRT (With Respect To) ..plt

	Tanım: WRT ..plt (Procedure Linkage Table) ile ilişkili bir işlem yapılacağını belirtir. ..plt` özellikle harici fonksiyonların adreslerini yönetir.
	Assembly ile İlişkisi: Assembly’de yazarken, bir fonksiyon çağrısı yapıldığında PLT’ye göre yönlendirme yapılabilir. PLT, GOT ile birlikte kullanılarak çağrılan fonksiyonun adresine erişim sağlar. Özellikle PIE etkin olduğunda, ..plt bu görevi dinamik olarak üstlenir.

### Terimlerin İlişkileri

- **errno** genellikle sistem çağrıları veya hatalar ile ilişkilidir ve Assembly’de programın doğru çalışıp çalışmadığını kontrol etmek için kullanılır.
- **PIE** ve **Relocation**, programın bellek adresinin yürütme zamanında nasıl ayarlandığını kontrol eder. **Relocation**, adreslerin yürütme zamanında güncellenmesini sağlarken, PIE sayesinde bu adresler dinamik olarak rastgele yerlere yerleştirilebilir.
- **GOT ve PLT**, PIE durumunda programın harici fonksiyonlara ve değişkenlere güvenli bir şekilde erişmesini sağlar.
- **GCC bayrakları**, derleyicinin hangi kütüphaneleri bağlayacağını ve hangi bellek düzeni tercih edilmesi gerektiğini belirtir.
- **ranlib**, Assembly veya C/C++ projelerinde statik kütüphane yönetimini kolaylaştırır.

### x86-64 Linux'ta 32-bit mutlak adreslere artık izin verilmiyor mu?

x86-64 Linux'ta **32-bit mutlak adreslere doğrudan erişime izin verilmez**. Bunun nedeni, modern x86-64 sistemlerde **64-bit adreslemeye geçiş** yapılmış olması ve güvenlik ile performans açısından bazı tasarım kısıtlamalarının getirilmiş olmasıdır. Bu kısıtlamalar, **PIE (Position Independent Executable)** ve **ASLR (Address Space Layout Randomization)** gibi özelliklerin uygulanmasını kolaylaştırır. Özellikle **PIE** sayesinde programın ve kütüphanelerinin adresleri çalışma zamanında rastgele bir konuma yüklenebilir, böylece saldırı yüzeyi azaltılmış olur.

**`_errno_location` ve 32-Bit Mutlak Adresler**

`_errno_location` gibi fonksiyonlar, tipik olarak global veya statik verilere erişim sağlamak için kullanılır. Bu tür fonksiyonlarda doğrudan 32-bit mutlak adresleme yapılırsa, kod artık taşınabilir olmaz. Dolayısıyla, modern 64-bit derlemelerde **relatif (göreceli) adresleme** kullanmak zorunlu hale gelmiştir.

**x86-64 işlemcilerinde:**

1. **32-Bit Mutlak Adreslemeye İzin Verilmez**: Bu, güvenlik ve bellek yönetimi açısından gereklidir. 64-bit sistemlerde mutlak adresler 64 bitlik bir genişlikte olmalıdır, aksi halde 32-bit mutlak adresleme yalnızca düşük adres alanlarını kapsayabilir ve bellek çakışmaları veya erişim hatalarına neden olur.
2. **GOT ve PLT Kullanımı**: 64-bit adresleme zorunluluğu nedeniyle, `_errno_location` gibi fonksiyonların eriştiği global veya statik verilere **GOT (Global Offset Table)** üzerinden erişilir. GOT, mutlak adresleri tutar ve her çalışma anında güncellenebilir, böylece 32-bit sınırlamalarından bağımsız hale gelir.
3. **Relatif Adresleme**: 64-bit derleme, veri ve fonksiyon erişiminde **göreceli adreslemeye** zorlar. Bu yöntem, sabit adreslerden kaçınıp, bellek düzenine göre dinamik ayarlamalar yapılmasını sağlar.

**Bu Kısıtlamanın Assembly ve Derleyici İle İlişkisi**

Bu nedenle, `gcc` gibi derleyiciler artık `x86-64` hedefli derlemelerde **mutlak 32-bit adreslemeye izin vermez** ve 64-bit adreslemeye zorlar. `_errno_location` gibi bir sembole erişim, GOT ve PLT tabloları üzerinden sağlanarak dolaylı hale getirilir.

Bu tür erişimler için:

- **GCC’de `-fPIC` veya `-fPIE`** bayrakları kullanılarak kodun konumdan bağımsız çalışması sağlanır.
- **Assembly’de** doğrudan 32-bit adresleme yerine `RIP-relative` adresleme yapılır (`RIP` x86-64 işlemcisinde instruction pointer’ı gösterir). Bu da, komutların çalışma sırasında instruction pointer'a göre göreceli bir adresi işaret etmesini sağlar.

Sonuç

Kısacası, **x86-64 Linux'ta 32-bit mutlak adreslemeye doğrudan erişim mümkün değildir**. Bu sınırlama, güvenlik ve sistem uyumluluğunu artırmak için uygulanan bir tasarım tercihidir. `_errno_location` gibi global sembollere erişim gerektiğinde, ya GOT kullanılır ya da göreceli adresleme ile erişim sağlanır.

Şayet errno bölümünde ki örnekleri gcc kullanarak linklemeye kalkışırsak `relocation` hatası alacağız.

ft_write.s
```asm
section .text
global ft_write
extern __errno_location

ft_write:
    mov rax, 1
    syscall
    cmp rax, -1
    je err
    ret

err:
    neg rax                 
    mov rdi, rax
    call __errno_location
    mov [rax], rdi
    mov rax, -1
    ret
```

main.c
```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

extern ssize_t ft_write(int fd, const void *buf, size_t count);

int main(void)
{
    char *str = "Hello";
    ft_write(1, str, 5);
}
```

Linkleme
```bash
nasm -felf64 -o my_write.o my_write.s
gcc -o test main.c ft_write.o
```

```bash
/usr/bin/ld: ft_write.o: warning: relocation against `__errno_location@@GLIBC_2.2.5' in read-only section `.text'
/usr/bin/ld: ft_write.o: relocation R_X86_64_PC32 against symbol `__errno_location@@GLIBC_2.2.5' can not be used when making a PIE object; recompile with -fPIE
/usr/bin/ld: final link failed: bad value
collect2: error: ld returned 1 exit status
```

errno yalnızca 32-bit olduğundan içine 64-bit RAX yazmayın. Ve çağrı boyunca errno değerini yığın belleğine kaydedin. (Veya rbx'i kaydedin/geri yükleyin ve ebx'e kopyalayın)

### Register'lar ile ilgili bir bilgi

Bir register'a tam sayı atanabilir ve değeri orada saklar ancak bir string atandiginda o string'in adresinin ilk değerinin adresini (başlangıç adresi) tutar şayet string değerine erişmek istersek `[]` kullanmamız gerekir. Bu da string'in ilk işaret edilen yerin değeri olacaktır. Örneğin "Selam" adında bir string var ve bu rdi register'ına atanmış. Register "Selam" string'nin ilk harifinin adresini tutar. Ve ona yani ilk harfin değerine ulaşmak istersek de `[rdi]` dememiz gerekecek. Bu da register'larin hem tam sayı gibi değerleri haznesinde direkt tutması hem de bir pointer gibi adres saklaması gibi özelliklerin bulunduğunu gösteriyor.

### `cmp`, `jmp` vb. flags Detayları

NASM (Netwide Assembler) Assembly dilinde, `cmp` ve `jmp` talimatları ve bayraklar (flags), programın akışını kontrol etmek ve karşılaştırmalar yapmak için kullanılır. Bu talimatların ve bayrakların nasıl çalıştığını anlamak, Assembly'de doğru programlama yapabilmek için önemlidir.

**`cmp` Talimatı**
`cmp` talimatı, iki değeri karşılaştırmak için kullanılır. Bu talimat, iki değeri birbirine çıkarmadan önce bir işlem yapmaz, ancak **CPU'nun bayraklarını (flags)** ayarlar. Sonra bu bayraklar, bir sıçrama (jump) talimatı ile kontrol edilebilir.

```asm
cmp operand1, operand2
```
- **operand1** ve **operand2**, karşılaştırılacak iki değeri ifade eder. Bu değerler bir register, bir bellek adresi veya doğrudan bir sayı olabilir.

`cmp` talimatı, aslında şu işlemi yapar:
```asm
sub operand1, operand2
```

Ancak `cmp` talimatı, sonuçları kaydetmez; yalnızca bayrakları günceller. Eğer bu bayraklar daha sonra kontrol edilirse, hangi durumda olduğunuz hakkında bilgi verir.

flags (bayraklar):
`cmp` talimatı, aşağıdaki bayrakları etkiler:

- **ZF (Zero Flag)**: Eğer operand1 ve operand2 eşitse (yani sonuç sıfırsa), ZF set edilir (1). Aksi takdirde, ZF sıfır olur.
- **SF (Sign Flag)**: Sonuç negatifse, SF set edilir (1); pozitifse, SF sıfır olur.
- **PF (Parity Flag)**: Sonuçta oluşan baytların çift sayıda 1 bit içerip içermediğini belirtir.
- **OF (Overflow Flag)**: İşlemde taşma (overflow) olup olmadığını belirtir. Yalnızca imzalı sayılarla yapılan karşılaştırmalarda anlamlıdır.
- **CF (Carry Flag)**: Eğer operand1 < operand2 ise, CF set edilir (1). Bu bayrak, özellikle taşma durumlarıyla ilgilidir.

**`jmp` Talimatı**
`jmp` talimatı, programın akışını değiştiren ve başka bir etikete (label) atlamanızı sağlayan bir sıçrama komutudur. `jmp` talimatı her zaman çalışır, yani koşulsuz bir sıçramadır.

```asm
jmp label
```

Bu, programın akışını belirtilen etikete (`label`) yönlendirir. Bu sıçrama, programın akışını herhangi bir koşula bakmaksızın değiştirir.

**Koşullu Sıçrama Talimatları**

Assembly dilinde, `cmp` ve benzeri talimatlarla bayraklar ayarlandıktan sonra, koşullu sıçramalar kullanarak belirli durumlara göre akışı değiştirebilirsiniz. Bu sıçramalar, bayraklara dayanarak programın akışını kontrol eder. İşte bazı yaygın koşullu sıçrama talimatları:

- **`je` (Jump if Equal)**: ZF bayrağı set edilmişse (yani iki değer eşitse), sıçrama yapılır.
  ```asm
  je label  ; ZF = 1 ise, belirtilen etikete atla
  ```
  
- **`jne` (Jump if Not Equal)**: ZF bayrağı sıfırsa (yani iki değer eşit değilse), sıçrama yapılır.
  ```asm
  jne label  ; ZF = 0 ise, belirtilen etikete atla
  ```
  
- **`jg` (Jump if Greater)**: SF = OF ve ZF = 0 (yani operand1 > operand2) ise sıçrama yapılır.
  ```asm
  jg label  ; Operand1, Operand2'den büyükse, belirtilen etikete atla
  ```

- **`jl` (Jump if Less)**: SF ≠ OF (yani operand1 < operand2) ise sıçrama yapılır.
  ```asm
  jl label  ; Operand1, Operand2'den küçükse, belirtilen etikete atla
  ```

- **`js` (Jump if Sign)**: SF = 1 (yani işlem sonucu negatifse), sıçrama yapılır.
  ```asm
  js label  ; Sonuç negatifse, belirtilen etikete atla
  ```

- **`jc` (Jump if Carry)**: CF = 1 (yani taşma varsa) ise sıçrama yapılır.
  ```asm
  jc label  ; Taşma varsa, belirtilen etikete atla
  ```

- **`jo` (Jump if Overflow)**: OF = 1 (yani taşma varsa) ise sıçrama yapılır.
  ```asm
  jo label  ; Taşma varsa, belirtilen etikete atla
  ```

- **`jz` (Jump if Zero)**: ZF = 1 (yani iki değer eşitse) ise sıçrama yapılır.
  ```asm
  jz label  ; ZF = 1 ise, belirtilen etikete atla
  ```

- **`jnz` (Jump if Not Zero)**: ZF = 0 (yani iki değer eşit değilse) ise sıçrama yapılır.
  ```asm
  jnz label  ; ZF = 0 ise, belirtilen etikete atla
  ```

 vb..

 **Bayrakların Kullanımı ve Koşullu Sıçramalar**

Bayraklar, programın akışını yönlendiren çok önemli bir bileşendir. `cmp` talimatı bayrakları ayarladıktan sonra, bu bayraklar koşullu sıçramalarla kullanılabilir. Örneğin, iki değerin eşit olup olmadığını kontrol etmek için şu şekilde yazılabilir:

```asm
cmp rax, rbx      ; rax ile rbx'i karşılaştır
je equal_label    ; Eğer eşitse (ZF = 1), equal_label etiketiyle belirtilen yere atla
```

Eğer iki sayı eşitse, `ZF` bayrağı set edilir ve `je` talimatı `equal_label` etiketine sıçrar. Eğer eşit değilse, program sıradaki komutları çalıştırmaya devam eder.

**Özet**
- **`cmp`**: İki değeri karşılaştırır, ancak sadece bayrakları ayarlar. Sonucu görmek için bayraklar kullanılır.
- **Bayraklar**: Karşılaştırma sonrasında farklı durumları belirler. Örneğin, `ZF`, `CF`, `SF` ve `OF` gibi bayraklar, sıçrama talimatlarıyla birlikte programın akışını yönlendirir.
- **`jmp`**: Koşulsuz sıçramalar yapar.
- **Koşullu `jmp` talimatları**: `je`, `jne`, `jg`, `jl`, `js`, `jc`, `jo`, `jz`, `jnz` gibi komutlarla bayraklara bağlı olarak sıçrama yapabiliriz.

Bu talimatlar ve bayraklar, Assembly'deki akış kontrolü ve karşılaştırmalar için temel araçlardır.


### `call` ve `jmp`, `jne`, `jz` vb. Program Akışı Kontrol Komutlarının Birbirlerinden Farkları

`call` komutu kullanıldığında `call`'ın çağrıldığı satırın adresi bellekte kaydedilir çünkü `call` ile çağrılan fonksiyon işlevini yerine getirdiğinde ve `ret` komutu kullanıldığında çağrıldığı yere geri dönecek. Ancak `jmp`, `jz`, `jne` vb. komutları direkt olarak belirtilen label'e sıçrarlar ve `ret` vb. bir komut kullanıldığında (şayet bir fonksiyonun içinde değilsek yani ana fonksiyondaysak yani herhangi bir fonksiyonun içinde degil main kısımdaysak (:d)) `rax` register'ı dönülür.

>[!IMPORTANT]
>
> **Konuyla çok ilgisi olmayan iki bilgi**
>
> 1. `echo $?`
> 
> `$?` programın çıkış kodunu verir ve bu aslında `sys_exit` sistem çağrısının parametresi olan `error_code` numarasıdır. Assembly'de exit'i çağırdığımızda rdi'ye verdiğimiz değer aslında `$?` oluyor minishell'de öğrendiğimiz.
> 
> ```asm
> section .text
> global _start
>
> _start:
>	mov rax, 60
>	mov rdi, 97 ; "97" = "$?"
>	syscall
> ```
>
> 2. Linux'da `as` Komutu
> 
> GNU Assembler'ın kısaltması olarak bilinen `as` komutu ile assembly dosyaları derlenebilir.
>
> ```asm
> as -o hello.o hello.s
> ```

### Assembly'de strcmp Gibi Bir Fonksiyon Yazarken Fonksiyon Parametrelerin İşaretçilerini (Parametre Geçişlerini, Çağrı Konvansiyonlarını (Calling Convantions)) Nereden/Nasıl Biliyoruz?

İşletim sisteminin kullandigi ABI'ye gore. Assembly'de yazılan her program dönüşünü rax'a yapar. Manuel olarak da bir işlem gerçekleştirdiğimizde assembly'de geri dönüş değerini yine rax'a yapmalıyız çünkü standartlar ve prosedürler (ABI) bu şekilde işlenmiş. Burada bir nevi derleyici (compiler) biz oluyoruz. Ancak derleyici olabilmek içinde az önce bahsetmiş olduğum standart ve prosedürleri bilmek gerekiyor. Ve bunlar işletim sisteminden işletim sistemine göre değişkenlik gösteriyor.

### `al`, `bl`, `cl` vb. 8-bitlik Register'ların char (orn: 'S' gibi) Tek Bytle'lık Değer Tutma Kabiliyeti

byte byte karsilastirma yapmak icin assembly'de, `al` ve `cl` gibi 8-bitlik register'lar kullanılabilir. Şayet rax, veya rcx gibi register kullansaydık, değer kontrollerinin eşit olup olmama durumları için yanlış bir kontrol şekli yapılmış olurdu. Çünkü bu register'lar o değerlerin adreslerini tuttuğundan aslında adres karşılaştırması yapmış olacaktık. `cmp` komutu kıyas yapmak için kıyas yapılan öğeleri `rcx`, `rdx`, `al`, `bl` vb. birbirlerinden çıkarır ve ona gore EFLAGS'i ayarlar. Bu sayede biz o flag'e `jz` veya `jne` gibi talimatlar kullandığımızda o satira ona göre sıçrar.

Assembly'de `al` ve `bl` gibi 8-bitlik registerlar kullanmamızın nedeni, string karşılaştırırken her karakterin 1 byte olmasıdır. `al`, `bl`, `cl`, ve `dl` gibi 8-bitlik registerlar, daha büyük registerların (örneğin `ax`, `bx`) alt kısımlarıdır ve tek bir byte (8-bit) veri tutmak için idealdir.

1. **Register Yapısı**

    	ax, bx, cx, ve dx gibi 16-bit registerlar ikiye bölünebilir: üst 8-bit (örneğin ah) ve alt 8-bit (örneğin al).
    	Bu alt registerlar (al, bl, cl, ve dl) tek bir byte veri saklar, bu da ASCII karakterleri gibi 1-byte'lık değerleri işlemek için idealdir.

2. **Veri Boyutu ve Bellek Verimliliği**

    	ASCII karakterler 1 byte (8 bit) boyutundadır, bu yüzden 8-bit register olan AL ve BL doğrudan tek bir karakteri tutmak için uygundur.
    	Eğer 16-bit registerlar (örneğin ax veya bx) kullansaydık, her karakter karşılaştırmasında 16 bitlik veri yüklenecekti, ancak bu veri 1 byte’tan fazla olduğu için gereksiz yer kaplayacaktı. Bu durum hem bellek açısından hem de işlem performansı açısından verimsiz olurdu.

3. **Kod Okunabilirliği ve Performans**

    	al ve bl kullanarak doğrudan 8-bitlik karşılaştırma yapılabilir, bu da kodu daha okunabilir ve daha hızlı hale getirir. Özellikle mikroişlemci düzeyinde, veri tipine uygun boyutta register kullanmak performansı artırır.

Özet
Bu yüzden `al` ve `bl` kullanmak, hem gereksiz büyük veri taşınmasını önlemek için hem de işlemciye yük olmaması için uygundur.

### Neden `al`, `bl`, `cl` vb. yerine `ah`, `bh`, `ch` Kullanılamıyor?

Bunun nedeni, x86-64 (64-bit) mimarisi üzerinde yüksek byte register'larının (ch, dh, bh, ah) bazı işlemlerde kullanılamamasıdır. 64-bit işlemcilerde, rex öneki ile kodlanmış talimatlar yüksek byte register'larını (ah, bh, ch, dh) desteklemez. Ancak, düşük byte register'ları (al, bl, cl, dl) bu sınırlamaya tabi değildir.

**`rex` Öneki ve Yüksek Byte Register'ları**

x86-64 mimarisinde, rex öneki 64-bit register’lar üzerinde işlem yapabilmek ve genişletilmiş register’lara erişmek için kullanılır. Bu önek, register genişlemesi sağlar, yani 32-bit yerine 64-bit register’larla işlem yapılmasına olanak tanır. Ancak rex öneki etkinleştirildiğinde, ch, bh, ah, dh gibi yüksek byte register'larını kullanmak mümkün olmaz.

Örnek olarak ft_strcmp fonksiyonunu ele alalım ve orada kullanılan "cl" register'ı yerine "ch" kullanalım ve kodu derleyelim. nasm'ın vereceği hata şu şekildedir;

```bash
error: cannot use high register in rex instruction
```

Kodda rbx veya rax gibi 64-bit register’lar kullanıldığında, NASM assembler bu register'ların 64-bit modda olduğunu varsayar ve rex öneki otomatik olarak eklenir. Bu önek kullanıldığı anda ch gibi yüksek byte register'ları artık desteklenmez, çünkü rex öneki, 64-bit işlemler için cl, bl, dl, al gibi düşük byte register'larının kullanılmasını zorunlu hale getirir.

```asm
movsx rax, ch
```

Nasm bu satırda rex önekinin etkinleştirildiğini algılıyor ve uyumsuzluk yaratacağından bu işleme izin verilmiyor.

REX öneki etkin olduğunda, ch, dh, ah, bh gibi yüksek bayt register'ları kullanılamaz, çünkü x86-64 mimarisindeki adresleme modları bu yüksek bayt register'larıyla uyumlu değildir. Bunun temel nedeni, REX öneki ile eklenen bitlerin bu yüksek bayt register'larla çakışması ve işlemcinin doğru adresleme yapamamasıdır.

REX Önekinin Adresleme Modu ve Yüksek Bayt Register'ları ile Uyumsuzluğu

x86-64 mimarisinde REX öneki, register genişlemesini ve 64-bit işlem desteğini sağlamak için kullanılır. REX öneki, bir byte (8 bit) uzunluğunda bir önektir ve şu şekilde kodlanır:

    REX önekinin 4 bitinden biri olan B biti, register adreslemesini genişletir.
    Bu B biti, ah, bh, ch, dh gibi yüksek bayt register'ları için kullanılan eski adresleme moduyla çakışır.

Örneğin:

    x86-64'te rax, eax, ax ve al gibi düşük bayt register'ları REX öneki ile uyumlu çalışır, çünkü bunların adresleme modunda bir sorun yoktur.
    Ancak ch, ah, dh, bh gibi register'lar, REX önekinin B bitiyle adreslemeyi genişletmeye çalıştığı sırada uyumsuzluk yaratır. Bu yüzden, REX öneki etkin olduğunda bu yüksek bayt register'larını kullanmak işlemcide kodlama çakışmasına neden olur.

Alternatif: Düşük Bayt Register'ları Kullanmak

Bu uyumsuzluk nedeniyle, x86-64’te REX öneki gerektiren bir işlemi yaparken, yüksek bayt register'ları yerine düşük bayt register'ları (al, bl, cl, dl) kullanmalısınız. Düşük bayt register'ları, REX önekiyle uyumlu olarak adreslenir ve işlemler bu uyumlulukla sorunsuz yürütülür.
Özet

    REX öneki ve yüksek bayt register'ları (örneğin ch, dh, ah, bh) arasındaki uyumsuzluk, x86-64’teki genişletilmiş adresleme modlarının çakışmasından kaynaklanır.
    REX öneki kullanmanız gereken bir durumda, yüksek bayt register'ları yerine düşük bayt register'larını (cl, dl, al, bl) tercih etmeniz gerekir. Bu, kodun doğru çalışmasını sağlar.

### `rex` prefix'i (Öneki)

REX öneki, x86-64 mimarisinde 64-bit işlemleri ve genişletilmiş register kullanımını destekleyen özel bir önektir. REX, Register Extension ifadesinin kısaltmasıdır ve 64-bit işlemcilerin ek özelliklerini kullanabilmesini sağlar.

**REX Öneki'nin İşlevi**

x86-64 işlemciler, 32-bit mimariden 64-bit mimariye geçiş yaptığında bazı ek ihtiyaçlar ortaya çıkmıştır:

	64-bit İşlem Desteği: Standart 32-bit mimaride, register’lar maksimum 32-bit veri işleyebiliyordu. Ancak 64-bit mimaride daha geniş veri işlemek gerektiğinden, REX öneki eklenerek işlemcinin 64-bit veri ile işlem yapması sağlandı.
    	Genişletilmiş Register'lar: 32-bit işlemcilerde eax, ebx, ecx, edx gibi register'lar vardı. 64-bit işlemcilerde bunlara ek olarak r8-r15 isimli 8 yeni genel amaçlı register eklendi. Bu genişletilmiş register'lara erişebilmek için REX öneki gereklidir.

**REX Öneki Yapısı**

REX öneki, 0100 bit dizisi ile başlar ve 4 bitlik bir alana sahiptir (REX öneki toplamda 1 bayttır). Bu 4 bit, çeşitli özellikleri kontrol eder:

    W: 64-bit genişliğinde işlem yapılacağını belirtir.
    R: Ek register bitidir; r8-r15 gibi genişletilmiş register'lara erişmek için kullanılır.
    X: Ek index register bitidir; bazı adresleme modlarında ek register'lara erişimi sağlar.
    B: Ek base register bitidir; r8-r15 gibi genişletilmiş base register'lara erişim sağlar.

**REX Öneki ile Kullanılamayan Yüksek Bayt Register'ları**

REX öneki etkinleştirildiğinde, eski mimaride kullanılan bazı yüksek bayt register'ları (ah, bh, ch, dh) ile işlem yapılamaz. Bunun nedeni, bu register'ların kodlamasının REX öneki ile çakışması ve işlemcinin kodlamayı doğru yorumlayamamasıdır. Bu yüzden 64-bit modda, al, bl, cl, dl gibi düşük bayt register'ları kullanılabilir, ancak ah, bh, ch, dh gibi yüksek bayt register'ları kullanılamaz.
Örnek: REX Öneki Gerektiren ve Gerektirmeyen İşlemler

    REX Öneki Gerekli: mov rax, 1 – 64-bit veriyle işlem yapıldığından W biti 1 olur ve REX öneki eklenir.
    REX Öneki Gerekli Değil: mov eax, 1 – 32-bit veriyle işlem yapıldığından REX öneki gerekmez.

Özet

    REX öneki, 64-bit modda 64-bit veri işlemleri ve genişletilmiş register'lara erişimi sağlar.
    ah, bh, ch, dh gibi yüksek bayt register'ları REX öneki ile uyumlu olmadığı için, 64-bit modda düşük bayt register'ları (örneğin al, bl, cl, dl) tercih edilir.

### `movzx` ve `movsx` Gibi Talitmatların İşlevleri

8-bit bir register'daki (orn: al, bl, cl vb.) degeri 64-bit bir register'a genisleterek atamak istersek "movzx" veya "movsx" komutlarini kullanabiliriz.

`movzx` ve `movsx` gibi talimatların farkı da değerin işaretli (signed) veya işaretsiz (unsigned) şekilde genişletilip genişletilmemesi seçeneği sunuyor.

`movsx` - işaretli şekilde genişleme yapıp değeri taşır

`movzx` - işaretsiz şekilde genişleme yapıp değeri taşır

Örneğin _ft_strcmp_ fonksiyonunda `movzx` kullanılırsa şayet negatif değeleri döndürmüyor ancak bize negatif değer döndüren bir return degeri gerekli oldugundan `movsx` kullanılıyor.

### Assembly'de Signed ve Unsigned

Assembly ve diğer düşük seviyeli programlama dillerinde "işaretli" (signed) ve "işaretsiz" (unsigned) kavramları, verinin pozitif veya negatif olma durumunu belirler. Bu kavramları anlamak için veri türünün bellekte nasıl temsil edildiğine bakmamız gerekiyor.

**İşaretsiz (Unsigned) Sayılar**

İşaretsiz bir sayı, yalnızca **pozitif** değerleri ifade eder. Bütün bitler, sayının değerini temsil eder, işaret bitine gerek yoktur. 

Örneğin, 8-bitlik bir işaretsiz sayı için:

- Minimum değer: `0`
- Maksimum değer: `255` (2^8 - 1)

Örnek:
- `00000000` (binary) = `0` (decimal)
- `11111111` (binary) = `255` (decimal)

**İşaretli (Signed) Sayılar**

İşaretli sayılar hem pozitif hem de negatif değerleri temsil edebilir. Bu durumda en yüksek bit (sol baştaki bit) sayı için **işaret bitidir**:
- İşaret biti `0` ise, sayı pozitif kabul edilir.
- İşaret biti `1` ise, sayı negatif kabul edilir.

İşaretli sayılar genellikle **iki'nin tümleyeni** (two's complement) yöntemi ile temsil edilir. Örneğin, 8-bitlik bir işaretli sayı için:

- Minimum değer: `-128`
- Maksimum değer: `127`

Örnek:
- `00000000` (binary) = `0` (decimal)
- `01111111` (binary) = `127` (decimal)
- `10000000` (binary) = `-128` (decimal)
- `11111111` (binary) = `-1` (decimal)

**Genişletme İşlemlerinde İşaretli ve İşaretsiz Farkı**

İşaretsiz (`movzx`) ve işaretli (`movsx`) genişletme komutları, küçük bir değeri daha büyük bir register'a genişletirken verinin pozitif veya negatif olma durumuna göre davranır:

1. **İşaretsiz Genişletme (`movzx`)**:
   - `movzx`, "Move with Zero Extension" (sıfır ile genişletme) anlamına gelir. Bu komut, küçük değerin işaretini dikkate almaz ve genişletilen üst bitleri sıfır ile doldurur.
   - Örneğin, `DL` registerındaki `11111111` (8-bit) değeri `MOVZX` ile `RAX` registerına taşınırsa, `RAX` değeri `00000000 00000000 00000000 000000FF` olur, yani `255`.

2. **İşaretli Genişletme (`movsx`)**:
   - `movsx`, "Move with Sign Extension" (işaret ile genişletme) anlamına gelir. Bu komut, küçük değerin işaret bitini koruyarak genişletme yapar. Eğer sayı negatifse (yani işaret biti `1` ise), üst bitleri `1` ile doldurur; pozitifse (işaret biti `0` ise) üst bitleri `0` ile doldurur.
   - Örneğin, `DL` registerındaki `11111111` değeri `MOVSX` ile `RAX` registerına genişletilirse, `RAX` değeri `FFFFFFFFFFFFFFFF` olur, yani `-1` (çünkü işaret bitini korumuş olur).
  
**Örneklerle Karşılaştırma**

Farz edelim ki `DL` registerında `11111111` (8-bit) değeri var:

- **İşaretsiz olarak ele alındığında (`movzx` ile)**:
  ```asm
  movzx rax, dl
  ```
  Bu komut `RAX`'a `255` değerini yükler, çünkü tüm üst bitler `0` ile doldurulur.

- **İşaretli olarak ele alındığında (`movsx` ile)**:
  ```asm
  movsx rax, dl
  ```
  Bu komut `RAX`'a `-1` değerini yükler, çünkü işaret bitine göre üst bitler `1` ile doldurulur.

- **İşaretsiz (Unsigned)**: Sayılar yalnızca pozitif değerlidir, işaret biti kullanılmaz.
- **İşaretli (Signed)**: Sayılar hem pozitif hem de negatif olabilir; en yüksek bit işaret bitidir.
- `movzx`: Üst bitleri sıfır ile doldurur (işaretsiz genişletme).
- `movsx`: Üst bitleri işarete göre doldurur (işaretli genişletme).

Bu ayrım, özellikle taşma ve işaret bitinin korunmasının önemli olduğu durumlarda işlemcinin doğru sonucu vermesi açısından kritik öneme sahiptir.

### Assembly'de `malloc` Çağrısı Yapıldığında Arkaplanda ki Değişimler

Assembly'de bir fonksiyon çağrısı yapıldığında o fonksiyon parametre kullanıyorsa rdi, rsi, rdx vb. gibi parametre geçiş register'larına gerekli atamalar yapılmalıdır fonksiyonun isteğine göre (bunun için harici fonkisyon çağrısı yapılıyorsa `man` kullanılarak gerekliliklerine bakılabilir). Ve geri dönüş değeri varsa her zaman rax'a geri dönüş yapıldığı unutulmamalıdır. Örneğin `malloc` bellekte yer tahsisi yapabilmek için parametre olarak bir boyut (size) istiyor. Bunun için rdi'ye (ABI'den dolayı) çağrı yapmadan önce istenilen boyut sayısını atayıp/hazırlayıp daha sonrasında `malloc` fonksiyonu çağırmamız gerekiyor. Çağırdıktan sonra da `malloc` fonksiyonunun (eğer tahsis edebilsiyse) rax register'ına bellekte ayrılan kısmın başlangıç adresini döndürdüğünü bilmemiz gerekiyor. `man malloc` yazarak detaylar incelenebilir.

Assembly'de `malloc` fonksiyonunu çağırdığınızda, bellekte belirli bir boyutta alan tahsis edilmesi süreci başlatılır. Bu fonksiyon genellikle `libc` (C standart kütüphanesi) tarafından sağlanır ve çağrıldıktan sonra belirli bir sistem çağrısını veya bir bellek yönetim mekanizmasını tetikler. Bu süreçte `RAX` ve diğer bazı kayıtlarda önemli değişiklikler olur.

**`malloc` Çağrısında `RAX` ve Diğer Kayıtlarda Ne Olur?**

1. **`RDI` ve `RAX` Kayıtlarının Ayarlanması**:
   - `malloc`'a tahsis edilmesi istenilen bellek boyutu parametre olarak verilir. Sistem V AMD64 ABI'ye göre, ilk argüman (bu durumda tahsis edilmesi gereken boyut) `RDI` kaydında geçilir.
   - `malloc`, `RAX`'ı kullanarak işletim sistemi veya kütüphane içindeki alt fonksiyonlara çağrı yapar. Bu nedenle, `malloc` çağrıldıktan sonra `RAX`’in içeriği değişmiş olur.

2. **Bellek Tahsisi**:
   - `malloc`, işletim sistemindeki bellek tahsis fonksiyonlarını (örneğin `brk` veya `mmap`) kullanarak belirtilen miktarda belleği ayırır. Eğer `brk` veya `mmap` çağrılırsa, `RAX` ve diğer kayıtlar farklı değerlere sahip olabilir.
   - Bellek tahsisi başarılı olursa, `malloc` tahsis edilen bellek bloğunun başlangıç adresini döndürür. Bu adres de genellikle `RAX` kaydında saklanır.

3. **`RAX` Kaydının Dönüş Değeri Olarak Kullanılması**:
   - `malloc` başarılı olduğunda, tahsis edilen belleğin başlangıç adresini `RAX` kaydına yazar ve çağrıyı yapan kod bu değeri `RAX` üzerinden alır.
   - Eğer `malloc` başarısız olursa, `RAX` değeri `NULL` (0) olarak döner. Bu durumda, bellek tahsis edilemediği anlamına gelir.
  
**`malloc` Arkaplanda Ne Yapar?**

1. **Heap Bölgesini Yönetme**:
   - `malloc`, heap adı verilen bellek bölgesinde alan ayırır. İşletim sistemi tarafından heap bölgesi, programın başında belirlenir ve büyütülüp küçültülebilir.
   - Küçük bellek tahsisleri genellikle mevcut bir heap bloğundan yapılır ve heap sınırlarını değiştirmez. Ancak daha büyük tahsisler gerektiğinde `sbrk` veya `mmap` gibi sistem çağrıları ile heap büyütülür.

2. **Serbest Blokları Yönetme**:
   - `malloc`, serbest blokları takip eden bir veri yapısı kullanır. Bellekten alan ayrıldıkça veya serbest bırakıldıkça (`free` ile), bu veri yapısı güncellenir.
   - Küçük bellek parçaları için `malloc` genellikle mevcut bloklardan birini kullanır, bu sayede heap'i yeniden düzenlemek gerekmez.

3. **Sistem Çağrısı Yapılması**:
   - Büyük bir bellek bloğu talebi olduğunda, `malloc`, işletim sistemine bir sistem çağrısı yaparak yeni bir bellek bölgesi ayırır. Bu genellikle `mmap` çağrısı ile yapılır ve işletim sistemi belleğin fiziksel tahsisini sağlar.
   - Bu sistem çağrıları sırasında `RAX` kaydında çağrı numarası ve diğer kayıtlarda gerekli argümanlar bulunur.
  
**`malloc` ve `RAX` ile İlgili Özet**

- `malloc`, `RAX` kaydında tahsis edilen belleğin başlangıç adresini döndürür veya başarısız olduğunda 0 (NULL) döner.
- `malloc` çağrıldığında, `RAX` ve diğer kayıtlardaki veriler değişebilir.
- Arka planda, `malloc` heap alanını yönetir ve gerektiğinde sistem çağrıları ile işletim sisteminden yeni bellek blokları alır.

Bu süreç, performans optimizasyonu ve bellek verimliliği sağlamak amacıyla oldukça karmaşıktır. Ancak özetle `malloc`, `RAX`'ı dönüş değeri olarak kullanır ve işletim sisteminden gerekli olan bellek alanını tahsis eder.

### PLT Prosedür Tablosu Aracılığıyla `malloc` Çağrısı

`call malloc WRT ..plt` ifadesi, **malloc** fonksiyonunun **Procedure Linkage Table (PLT)** aracılığıyla çağrılmasını ifade eder. Bu, özellikle **konumdan bağımsız (position-independent)** çalışması gereken kodlarda veya **dinamik olarak bağlanmış (dynamically linked)** fonksiyonların adreslerinin belirsiz olduğu durumlarda kullanılır.

**PLT Nedir?**

**Procedure Linkage Table (PLT)**, programın **dinamik kütüphanelerdeki fonksiyonlara ulaşmasını sağlayan bir tablodur**. PLT, yürütme sırasında dış fonksiyon adreslerine (örneğin `malloc`, `printf` gibi) erişimi sağlayan bir aracıdır. Bu mekanizma sayesinde:

1. **Programın konumdan bağımsız çalışması sağlanır**: Kod, belleğe farklı adreslerde yüklenmiş olsa bile, PLT üzerinden çağrılan fonksiyonların adresleri güncellenir.
2. **Dinamik bağlama** yapılır: Fonksiyonun adresi ilk çağrıldığında PLT aracılığıyla dinamik olarak bulunur ve çalıştırılır. Sonraki çağrılar, PLT’ye kaydedilmiş bu adrese doğrudan yönlendirilir.

**`malloc` Fonksiyonuna `WRT ..plt` ile Çağrı Yapılması**

`call malloc WRT ..plt` ifadesinde:

- **`malloc` fonksiyonu**, `malloc` fonksiyonunun dinamik olarak yüklenmiş bir adresine erişmek anlamına gelir.
- **`WRT ..plt` ifadesi**, **With Respect To Procedure Linkage Table** anlamına gelir. Yani, `malloc` fonksiyonunun PLT tablosu üzerinden çağrılacağını ifade eder.

Bu çağrı yöntemi sayesinde, **programın çalışma zamanında** `malloc`'un gerçek adresi **PLT üzerinden çözümlenir** ve programın bulunduğu yerden bağımsız olarak `malloc` işlevi güvenli bir şekilde çağrılır.

- `call malloc WRT ..plt`: `malloc` fonksiyonuna çağrıyı PLT tablosu üzerinden yapar.
- Bu, `malloc`'un adresinin çalışma zamanında dinamik olarak çözüleceğini ve `malloc` gibi dinamik bağlanan fonksiyonların konumdan bağımsız olarak çalışabileceğini garanti eder.

### Assembly'de Debug (Hata Ayıklama) Nasıl Yapılabilir?

**`gdb` (GNU Debugger) Kullanarak**

`gdb` kullanarak assembly'de adım adım register'larda hangi değerlerin olduğu, program akışının takibi vb. işlemler için kullanılabilir. Ancak öncelikle `.s` dosyasının _debugging information_ generate etmemiz gerekli:

>[!IMPORTANT]
>
> **Çok Gereksiz Bilgi**
>
> GAS, as, veya gcc GNU'nun araçlarını kullanarak daha hızlı ve uyumlu debugging işlemi yapılabilir. Ancak bunun için kodun syntax'ının AT&T olması isteniyor. Aksi halde bu araçlar Intel syntax'ını tanımıyor. Tanıması için belki de bir yöntem vardır. Var.

Obje dosyasını oluştururken `-g` opsiyonunu kullanarak "debugging information" generate ettirilmelidir. Sebebi gdb debug için bunu istiyor;

```bash
nasm -f -elf64 -g -o test.o test.s
```

Ardından link'leyip çalıştırılabilir dosya üretilmeli;

```bash
ld -o test test.o
```

Daha sonra `gdb` ile debug'a başlanabilir;

```bash
gdb ./test
```

Hangi noktadan itibaren ayıklamaya başlayacağımızı bildirmek için bir "breakpoint" atanması gerekli. `_start` etiketinden başlayacağını belirtiyoruz;

```bash
(gdb) br _start
```

Programı çalıştırmak için;

```bash
(gdb) run
```

Assembly kodunu Intel sözdiziminde gösterir. GDB varsayılan olarak AT&T sözdizimini kullanır, ancak Intel sözdizimi birçok programcıya daha tanıdık ve okunaklı gelir;

```bash
(gdb) set disassembly-flavor intel
```

Program akışını takip edebilmek için `lay next` komutu ile Kaynak Kodu, Assembly Kaynak Kodu ve Register Değişkenlerinin Listesinin takibi yapılabilir. Ekran gibi düşünülebilir. Komutu pek çok kez kullanım bu ekranlar arasında geçişi ve bölünmeyi ayarlar. Komutu yazıp çalıştırdıktan sonra <ENTER> tuşuyla ekranlar hızlı bir şekikde ayarlanabilir;

```bash
(gdb) lay next
```

Satır satır ilerlemek için kullanılan komut;

```bash
(gdb) nexti
```

Diğer Komutlar
- `li`: Kodu listelemek için
- `disassemble _start`: _start etiketinden itibaren kodun disassembly çıktısını verir. disassemble _start komutunu çalıştırdığınızda, _start etiketinden başlayarak o kısımdaki makine kodlarının assembly diline çevrilmiş halini (disassembly) görürsünüz. Bu komut, _start etiketinden itibaren belirli bir kod bölgesinin talimatlarını ve adreslerini gösterir.
- `print/x $eax`: eax register'ının içeriğini onaltılık formatta yazdırır.
- `x/90xb _start`: _start adresinden itibaren bellekteki 90 baytı bayt bayt onaltılık formatta gösterir.
- `info reg`: register'ları gösterir
- `info all-reg`: bütün register'ları listeler
- `i r <register-name>`: spesifik register'i goruntuler
- `print $<register-name>`: spesifik register'i goruntuler
- `info stack`: stack’teki (yığın) çağrı çerçevelerini (call frames) listeler ve programın çağrı geçmişini (call stack) gösterir.
- `info float`: kayan nokta register'larının (floating-point registers) durumunu ve kayan nokta işlem biriminin (FPU) içeriklerini gösterir.
- `lay asm`: Assembly kaynak kodu ekranını açar.
- `lay reg`: Register'ların ekranını açar.
- `lay src`: Kaynak Kodu ekrannı açar.

2. **SASM Kullanarak**

gdb'de ki TUI (Text-based User Interface) yerine daha sade bir görünüm için GUI kullanan [SASM](https://dman95.github.io/SASM/english.html) programını kullanarak debugging yapılabilir. Sadece Debugging değil aynı zaman da içerisinde pek çok assembler barındırdığından assembly kodu da çalıştırmak mümkündür.

3. **QtCreator Kullanarak**

Yine GUI'lı bir şekilde debugging için [Qt Creator](https://www.qt.io/product/development-tools) kullanılabilir.

**Diğer Debugger'lar**

1. [Nemiver](https://wiki.gnome.org/Apps/Nemiver)
2. [DDD (Data Display Debugger)](https://www.gnu.org/software/ddd/)
3. [VS-Code Assembly Debugger](https://github.com/newtonsart/vscode-assembly)

---

## :six: Kaynaklar

### CPU
1. [x86](https://en.wikipedia.org/wiki/X86)
2. [x86-32-bit Wiki](https://en.wikipedia.org/wiki/X86#32-bit)
3. [Intel® 64 and IA-32 Architectures Software Developer’s Manual Volume 1: Basic Architecture](https://web.archive.org/web/20150123212110/http://www.intel.com/content/dam/www/public/us/en/documents/manuals/64-ia-32-architectures-software-developer-vol-1-manual.pdf)
4. [16-bit Operations](https://en.wikipedia.org/wiki/Intel_8080#16-bit_operations)
5. [ntel® 64 and IA-32 Architectures Software Developer Manuals](https://www.intel.com/content/www/us/en/developer/articles/technical/intel-sdm.html)


### Register
1. [What are the Names of the new x86-64 Processors Registers](https://stackoverflow.com/questions/1753602/what-are-the-names-of-the-new-x86-64-processors-registers#1753627)
2. [What Does X Mean in eax ebx ecx in Assembly](https://stackoverflow.com/questions/2545192/what-does-x-mean-in-eax-ebx-ecx-in-assembly/2545226#2545226)
3. [What do the E and R prefixes stand for in the names of Intel 32-bit and 64-bit registers?](https://stackoverflow.com/questions/43933379/what-do-the-e-and-r-prefixes-stand-for-in-the-names-of-intel-32-bit-and-64-bit-r)
4. [What does ESP mean in assembly?](https://stackoverflow.com/questions/2537367/what-does-esp-mean-in-assembly/2537380#2537380)
5. [File:Table of x86 Registers svg.svg](https://en.wikipedia.org/wiki/File:Table_of_x86_Registers_svg.svg)
6. [Why did they use numbers for register names in x86-64?](https://stackoverflow.com/questions/12770378/why-did-they-use-numbers-for-register-names-in-x86-64)
7. [Why are first four x86 General Purpose Registers named in such unintuitive order?](https://retrocomputing.stackexchange.com/questions/5121/why-are-first-four-x86-general-purpose-registers-named-in-such-unintuitive-order)
8. [What does the 'R' in x64 register names stand for?](https://softwareengineering.stackexchange.com/questions/127668/what-does-the-r-in-x64-register-names-stand-for)
9. [CPU Register Names](http://web.archive.org/web/20140413211300/http://www.x86-64.org/pipermail/discuss/2000-September/000283.html)
10. [What is the purpose of the RBP register in x86_64 assembler?](https://stackoverflow.com/questions/41912684/what-is-the-purpose-of-the-rbp-register-in-x86-64-assembler#41912747)
11. [X86 64 Register and Instruction Quick Start](https://wiki.cdot.senecapolytechnic.ca/wiki/X86_64_Register_and_Instruction_Quick_Start)


### Sistem Çağrı Numaraları Tablosu
1. [Linux - 1](https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/)
4. [Linux - 2](https://lxr.linux.no/#linux+v3.2/arch/x86/include/asm/unistd_64.h)
5. [Linux - 3](https://github.com/torvalds/linux/blob/master/arch/x86/entry/syscalls/syscall_64.tbl)
2. [MacOS - 1](https://github.com/rewired-gh/macos-system-call-table/blob/main/arm64-system-calls.md)
3. [MacOS - 2](https://github.com/opensource-apple/xnu/blob/master/bsd/kern/syscalls.master)
4. [MacOS - 3](https://github.com/dyjakan/osx-syscalls-list?tab=readme-ov-file)
5. [64-bit syscall documentation for MacOS assembly](https://stackoverflow.com/questions/47834513/64-bit-syscall-documentation-for-macos-assembly)


### NASM ve ASM
1. [NASM Tutorial - 1](https://cs.lmu.edu/~ray/notes/nasmtutorial/)
2. [ASM Tutorial - 1](https://github.com/0xAX/asm)
3. [ASM Video - 1](https://www.youtube.com/watch?v=4gwYkEK0gOk)
4. [ASM Tutorial - 2](https://docs.freebsd.org/en/books/developers-handbook/x86/#x86-system-calls)
5. [NASM Tutorial - 2](https://www.nasm.us/doc/)
6. [Kathleen Booth](https://en.wikipedia.org/wiki/Kathleen_Booth)
7. [Dive Into Systems](https://diveintosystems.org/)
8. [The Stack](https://yuriygeorgiev.com/2024/02/19/x86-64-cpu-architecture-the-stack/)
9. [The Netwide Assembler: NASM](https://www.nasm.us/xdoc/2.11.02/html/nasmdoc3.html#section-3.2)
10. [Assembly Files: Difference between .a .s .asm](https://stackoverflow.com/questions/34098596/assembly-files-difference-between-a-s-asm#34098830)
11. [Geeks for Geeks What is Assembly Language](https://www.geeksforgeeks.org/what-is-assembly-language/)
12. [How to change errno value in asm x64](https://stackoverflow.com/questions/62046052/how-to-change-errno-value-in-asm-x64)
13. [x86-64 ASM French](https://perso.univ-st-etienne.fr/ezequel/L2info/coursAssembleur_x86_64.pdf)
14. [Intro NASM French](http://asmongueur.free.fr/Apprendre/Nasm/Intro_Nasm_Linux.htm)
15. [Le langage assembleur intel 64 bits French](https://www.lacl.fr/tan/asm)
16. [x86-64 Linux Assembly Tutorial Video List](https://www.youtube.com/playlist?list=PLetF-YjXm-sCH6FrTz4AQhfH6INDQvQSn)
17. [x86_64 NASM Assembly Quick Reference ("Cheat Sheet")](https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html)
18. [vfuster 42 libasm github](https://github.com/vfuster66/42_libasm)
19. [32-bit absolute addresses no longer allowed in x86-64 Linux?](https://stackoverflow.com/questions/43367427/32-bit-absolute-addresses-no-longer-allowed-in-x86-64-linux)
20. [What does @plt mean here?](https://stackoverflow.com/questions/5469274/what-does-plt-mean-here)
21. [Code in Assembly - Video](https://www.youtube.com/watch?v=6S5KRJv-7RU)
22. [Assembly Programming GNU GAS x86-64 Video List](https://www.youtube.com/playlist?list=PLvv0ScY6vfd9BSBznpARlKGziF1xrlU54)
23. [x86 Assembly with NASM](https://youtube.com/playlist?list=PL2EF13wm-hWCoj6tUBGUmrkJmH1972dBB&si=lpWxiJmMjL6mHHvz)
24. [How to print a number in assembly NASM?](https://stackoverflow.com/questions/8194141/how-to-print-a-number-in-assembly-nasm#8194407)
25. [Using printf while calling ASM from C](https://stackoverflow.com/questions/51177360/using-printf-while-calling-asm-from-c)
26. [NASM](https://ece-research.unm.edu/jimp/310/nasm/nasmdoc6.html)
27. [Linker error on calling C libraries from asm (using NASM)? ](https://www.reddit.com/r/asm/comments/1afi6nr/linker_error_on_calling_c_libraries_from_asm/)
28. [x86 Assembly](https://www.cs.put.poznan.pl/tzok/public/cawllp-04-asm.html)
29. [What is REX prefix in Instruction Encoding?](https://stackoverflow.com/questions/68604377/what-is-rex-prefix-in-instruction-encoding)
30. [What does 'REX' stand for in an x86-64 REX prefix?](https://stackoverflow.com/questions/59164978/what-does-rex-stand-for-in-an-x86-64-rex-prefix)
31. [x86-64 Instruction Encoding](https://blog.kenanb.com/code/low-level/2024/01/05/x86-64-insn-encoding.html)
32. [Mac OS X 64 bit Assembly](http://dustin.schultz.io/mac-os-x-64-bit-assembly-system-calls.html)
33. [basic assembly not working on Mac (x86_64+Lion)?](https://stackoverflow.com/questions/11179400/basic-assembly-not-working-on-mac-x86-64lion)
34. [Writing 64 Bit Assembly on Mac OS X](http://www.idryman.org/blog/2014/12/02/writing-64-bit-assembly-on-mac-os-x/)
35. [Getting Started with Assembly on x86-64 MacOS: Hello World](https://zerodayarcade.com/tutorials/hello-world-assembly-macos)
36. [How to write an assembly ‘hello world’ on macOS](https://jameshfisher.com/2017/02/20/macos-assembly-hello-world/)
37. [https://rderik.com/blog/let-s-write-some-assembly-code-in-macos-for-intel-x86-64/](https://rderik.com/blog/let-s-write-some-assembly-code-in-macos-for-intel-x86-64/)
38. [Hello World in x86_64 Assembly on Linux, and macOS](https://retrocoding.net/hello-world-in-x8664-assembly-on-linux-and-macos)
39. [Making system calls from Assembly in Mac OS X](https://filippo.io/making-system-calls-from-assembly-in-mac-os-x/)



### Calling Conventions & ABI
1. [Where is the x86-64 System V ABI documented?](https://stackoverflow.com/questions/18133812/where-is-the-x86-64-system-v-abi-documented)
2. [What are the calling conventions for UNIX & Linux system calls (and user-space functions) on i386 and x86-64](https://stackoverflow.com/questions/2535989/what-are-the-calling-conventions-for-unix-linux-system-calls-and-user-space-f)
3. [x86 Calling Conventions Wiki](https://en.wikipedia.org/wiki/X86_calling_conventions)
4. [x86-64 ABI](http://x86-64.org/documentation/abi.pdf)
5. [psABI x86-64](https://uclibc.org/docs/psABI-x86_64.pdf)
6. [x32 ABI](https://sites.google.com/site/x32abi/)
7. [System V ABI 4.1](https://www.sco.com/developers/devspecs/gabi41.pdf)
8. [System V Application Binary Interface](https://www.sco.com/developers/gabi/2003-12-17/contents.html)
9. [System V Application Binary Interface 0.95](http://refspecs.linux-foundation.org/elf/x86_64-abi-0.95.pdf)
10. [Calling Conventions PDF](https://www.agner.org/optimize/calling_conventions.pdf)


### Mix
1. [Mix - 1](https://gist.github.com/FiloSottile/7125822)
2. [Mix - 2](https://refspecs.linuxfoundation.org/)
3. [Mix - 3](https://uclibc.org/specs.html)
4. [Mix - 4](https://www.agner.org/optimize/)
5. [Mix - 5](https://learn.microsoft.com/en-us/windows-hardware/drivers/debugger/x64-architecture)
6. [Mix - 6](http://6.s081.scripts.mit.edu/sp18/x86-64-architecture-guide.html)
7. [Mix - 7](https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf)
8. [Mix - 8](https://refspecs.linuxbase.org/elf/)
9. [Mix - 9](https://wiki.osdev.org/X86-64_Instruction_Encoding)



### Konuyla Alakasız
1. [CXX ABI](https://itanium-cxx-abi.github.io/cxx-abi/)
2. [LLDB Debugger](https://lldb.llvm.org/index.html)
3. [LLVM](https://llvm.org/)
4. [Debuggin C with GDB](https://www.youtube.com/watch?v=ny6y0pPO--4)
5. [GDB 101](https://www.youtube.com/watch?v=Dq8l1_-QgAc)
6. [Nemiver Debugger](https://wiki.gnome.org/Apps/Nemiver)
7. [DDD Debugger](https://www.gnu.org/software/ddd/)


### ASM Debug
1. [How to print register values in GDB?](https://stackoverflow.com/questions/5429137/how-to-print-register-values-in-gdb)
2. [GDB (Step by Step Introduction)](https://www.geeksforgeeks.org/gdb-step-by-step-introduction/)
3. [x86-64 Debugging ASM - Video](https://www.youtube.com/watch?v=xmvCoi3zfDY)
4. [GDB - Video 1](https://www.youtube.com/watch?v=mfmXcbiRs0E)
5. [GDB - Video 2](https://www.youtube.com/watch?v=mm0b_H0KIRw)
6. [SASM](https://dman95.github.io/SASM/english.html)
7. [Qt Creator](https://www.qt.io/product/development-tools)
8. [Debugging NASM in VS code](https://stackoverflow.com/questions/63188810/debugging-nasm-in-vs-code)
9. [NASM Assembler Debugger](https://stackoverflow.com/questions/2043105/nasm-assembler-debugger)
10. [Introduction of SASM](https://www.youtube.com/watch?v=Gm2gVRyWLyI&t)
11. [0104 How to debug assembly Using VS Code - video](https://www.youtube.com/watch?v=MMr2tzyqjhk)
12. [NASM Debugger Qt Creator - Video](https://www.youtube.com/watch?v=1qroLN-Ep9g)
13. [NASM Assembler and GDB with example - Video](https://www.youtube.com/watch?v=ZZTUgIFm9u0)
14. [Godbolt](https://godbolt.org/)
15. [VS-Code Assembly Tool](https://github.com/newtonsart/vscode-assembly)

---

## :seven: Onaylama ve Akran Değerlendirmesi

**Linux:**

Assembly kodunuz Linux sistemi üzerinde çalışıyorsa, 42 PC'de sanal makineye Linux kurup değerlendirmenizi bu ortamda gerçekleştirebilirsiniz.

**MacOS:**

Assembly kodunuz MacOS sistemi üzerinde çalışıyorsa, 42 PC'de sanal makineye MacOS kurup değerlendirmenizi bu ortamda gerçekleştirebilirsiniz.

---

## :eight: Ekler

### Linux System Call Table for x86-64

| %rax          | System call                | %rdi                           | %rsi                             | %rdx                  | %r10               | %r8                   | %r9                 |
|---------------|----------------------------|---------------------------------|-----------------------------------|-----------------------|--------------------|-----------------------|---------------------|
| 0             | sys_read                   | unsigned int fd                | char *buf                        | size_t count          |                    |                       |                     |
| 1             | sys_write                  | unsigned int fd                | const char *buf                  | size_t count          |                    |                       |                     |
| 2             | sys_open                   | const char *filename           | int flags                        | int mode              |                    |                       |                     |
| 3             | sys_close                  | unsigned int fd                |                                   |                       |                    |                       |                     |
| 4             | sys_stat                   | const char *filename           | struct stat *statbuf             |                       |                    |                       |                     |
| 5             | sys_fstat                  | unsigned int fd                | struct stat *statbuf             |                       |                    |                       |                     |
| 6             | sys_lstat                  | const char *filename           | struct stat *statbuf             |                       |                    |                       |                     |
| 7             | sys_poll                   | struct poll_fd *ufds           | unsigned int nfds                | long timeout_msecs    |                    |                       |                     |
| 8             | sys_lseek                  | unsigned int fd                | off_t offset                     | unsigned int origin   |                    |                       |                     |
| 9             | sys_mmap                   | unsigned long addr             | unsigned long len                | unsigned long prot    | unsigned long flags | unsigned long fd      | unsigned long off   |
| 10            | sys_mprotect               | unsigned long start            | size_t len                       | unsigned long prot    |                    |                       |                     |
| 11            | sys_munmap                 | unsigned long addr             | size_t len                       |                       |                    |                       |                     |
| 12            | sys_brk                    | unsigned long brk              |                                   |                       |                    |                       |                     |
| 13            | sys_rt_sigaction           | int sig                        | const struct sigaction *act      | struct sigaction *oact | size_t sigsetsize |                       |                     |
| 14            | sys_rt_sigprocmask         | int how                        | sigset_t *nset                   | sigset_t *oset        | size_t sigsetsize |                       |                     |
| 15            | sys_rt_sigreturn           | unsigned long __unused         |                                   |                       |                    |                       |                     |
| 16            | sys_ioctl                  | unsigned int fd                | unsigned int cmd                 | unsigned long arg     |                    |                       |                     |
| 17            | sys_pread64                | unsigned long fd               | char *buf                        | size_t count          | loff_t pos         |                       |                     |
| 18            | sys_pwrite64               | unsigned int fd                | const char *buf                  | size_t count          | loff_t pos         |                       |                     |
| 19            | sys_readv                  | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    |                    |                       |                     |
| 20            | sys_writev                 | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    |                    |                       |                     |
| 21            | sys_access                 | const char *filename           | int mode                         |                       |                    |                       |                     |
| 22            | sys_pipe                   | int *filedes                   |                                   |                       |                    |                       |                     |
| 23            | sys_select                 | int n                          | fd_set *inp                      | fd_set *outp          | fd_set *exp        | struct timeval *tvp   |                     |
| 24            | sys_sched_yield            |                                 |                                   |                       |                    |                       |                     |
| 25            | sys_mremap                 | unsigned long addr             | unsigned long old_len            | unsigned long new_len | unsigned long flags | unsigned long new_addr |                     |
| 26            | sys_msync                  | unsigned long start            | size_t len                       | int flags             |                    |                       |                     |
| 27            | sys_mincore                | unsigned long start            | size_t len                       | unsigned char *vec    |                    |                       |                     |
| 28            | sys_madvise                | unsigned long start            | size_t len_in                    | int behavior          |                    |                       |                     |
| 29            | sys_shmget                 | key_t key                      | size_t size                      | int shmflg            |                    |                       |                     |
| 30            | sys_shmat                  | int shmid                      | char *shmaddr                    | int shmflg            |                    |                       |                     |
| 31            | sys_shmctl                 | int shmid                      | int cmd                          | struct shmid_ds *buf  |                    |                       |                     |
| 32            | sys_dup                    | unsigned int fildes            |                                   |                       |                    |                       |                     |
| 33            | sys_dup2                   | unsigned int oldfd             | unsigned int newfd               |                       |                    |                       |                     |
| 34            | sys_pause                  |                                 |                                   |                       |                    |                       |                     |
| 35            | sys_nanosleep              | struct timespec *rqtp          | struct timespec *rmtp            |                       |                    |                       |                     |
| 36            | sys_getitimer              | int which                      | struct itimerval *value          |                       |                    |                       |                     |
| 37            | sys_alarm                  | unsigned int seconds           |                                   |                       |                    |                       |                     |
| 38            | sys_setitimer              | int which                      | struct itimerval *value          | struct itimerval *ovalue |                 |                       |                     |
| 39            | sys_getpid                 |                                 |                                   |                       |                    |                       |                     |
| 40            | sys_sendfile               | int out_fd                     | int in_fd                        | off_t *offset         | size_t count       |                       |                     |
| 41            | sys_socket                 | int family                     | int type                         | int protocol          |                    |                       |                     |
| 42            | sys_connect                | int fd                         | struct sockaddr *uservaddr       | int addrlen           |                    |                       |                     |
| 43            | sys_accept                 | int fd                         | struct sockaddr *upeer_sockaddr  | int *upeer_addrlen    |                    |                       |                     |
| 44            | sys_sendto                 | int fd                         | void *buff                       | size_t len            | unsigned flags     | struct sockaddr *addr | int addr_len        |
| 45            | sys_recvfrom               | int fd                         | void *ubuf                       | size_t size           | unsigned flags     | struct sockaddr *addr | int *addr_len       |
| 46            | sys_sendmsg                | int fd                         | struct msghdr *msg               | unsigned flags        |                    |                       |                     |
| 47            | sys_recvmsg                | int fd                         | struct msghdr *msg               | unsigned int flags    |                    |                       |                     |
| 48            | sys_shutdown               | int fd                         | int how                          |                       |                    |                       |                     |
| 49            | sys_bind                   | int fd                         | struct sockaddr *umyaddr         | int addrlen           |                    |                       |                     |
| 50            | sys_listen                 | int fd                         | int backlog                      |                       |                    |                       |                     |
| 51            | sys_getsockname            | int fd                         | struct sockaddr *usockaddr       | int *usockaddr_len    |                    |                       |                     |
| 52            | sys_getpeername            | int fd                         | struct sockaddr *usockaddr       | int *usockaddr_len    |                    |                       |                     |
| 53            | sys_socketpair             | int family                     | int type                         | int protocol          | int *usockvec      |                       |                     |
| 54            | sys_setsockopt             | int fd                         | int level                        | int optname           | char *optval       | int optlen            |                     |
| 55            | sys_getsockopt             | int fd                         | int level                        | int optname           | char *optval       | int *optlen           |                     |
| 56            | sys_clone                  | unsigned long clone_flags      | unsigned long newsp              | void *parent_tid      | void *child_tid    | unsigned int tid      |                     |
| 57            | sys_fork                   |                                 |                                   |                       |                    |                       |                     |
| 58            | sys_vfork                  |                                 |                                   |                       |                    |                       |                     |
| 59            | sys_execve                 | const char *filename           | const char *const argv[]         | const char *const envp[] |               |                       |                     |
| 60            | sys_exit                   | int error_code                 |                                   |                       |                    |                       |                     |
| 61            | sys_wait4                  | pid_t pid                      | int *wstatus                     | int options           | struct rusage *rusage |                    |                     |
| 62            | sys_kill                   | pid_t pid                      | int sig                          |                       |                    |                       |                     |
| 63            | sys_uname                  | struct new_utsname *name       |                                   |                       |                    |                       |                     |
| 64            | sys_semget                 | key_t key                      | int nsems                        | int semflg            |                    |                       |                     |
| 65            | sys_semop                  | int semid                      | struct sembuf *tsops             | unsigned nsops        |                    |                       |                     |
| 66            | sys_semctl                 | int semid                      | int semnum                       | int cmd               | union semun arg    |                       |                     |
| 67            | sys_shmdt                  | char *shmaddr                  |                                   |                       |                    |                       |                     |
| 68            | sys_msgget                 | key_t key                      | int msgflg                       |                       |                    |                       |                     |
| 69            | sys_msgsnd                 | int msqid                      | struct msgbuf *msgp              | size_t msgsz          | int msgflg         |                       |                     |
| 70            | sys_msgrcv                 | int msqid                      | struct msgbuf *msgp              | size_t msgsz          | long msgtyp        | int msgflg            |                     |
| 71            | sys_msgctl                 | int msqid                      | int cmd                          | struct msqid_ds *buf  |                    |                       |                     |
| 72            | sys_fcntl                  | unsigned int fd                | unsigned int cmd                 | unsigned long arg     |                    |                       |                     |
| 73            | sys_flock                  | unsigned int fd                | unsigned int cmd                 |                       |                    |                       |                     |
| 74            | sys_fsync                  | unsigned int fd                |                                   |                       |                    |                       |                     |
| 75            | sys_fdatasync              | unsigned int fd                |                                   |                       |                    |                       |                     |
| 76            | sys_truncate               | const char *path               | long length                      |                       |                    |                       |                     |
| 77            | sys_ftruncate              | unsigned int fd                | unsigned long length             |                       |                    |                       |                     |
| 78            | sys_getdents               | unsigned int fd                | struct linux_dirent *dirp        | unsigned int count    |                    |                       |                     |
| 79            | sys_getcwd                 | char *buf                      | unsigned long size               |                       |                    |                       |                     |
| 80            | sys_chdir                  | const char *filename           |                                   |                       |                    |                       |                     |
| 81            | sys_fchdir                 | unsigned int fd                |                                   |                       |                    |                       |                     |
| 82            | sys_rename                 | const char *oldname            | const char *newname              |                       |                    |                       |                     |
| 83            | sys_mkdir                  | const char *pathname           | mode_t mode                      |                       |                    |                       |                     |
| 84            | sys_rmdir                  | const char *pathname           |                                   |                       |                    |                       |                     |
| 85            | sys_creat                  | const char *pathname           | mode_t mode                      |                       |                    |                       |                     |
| 86            | sys_link                   | const char *oldname            | const char *newname              |                       |                    |                       |                     |
| 87            | sys_unlink                 | const char *pathname           |                                   |                       |                    |                       |                     |
| 88            | sys_symlink                | const char *oldname            | const char *newname              |                       |                    |                       |                     |
| 89            | sys_readlink               | const char *path               | char *buf                        | int bufsiz            |                    |                       |                     |
| 90            | sys_chmod                  | const char *filename           | mode_t mode                      |                       |                    |                       |                     |
| 91            | sys_fchmod                 | unsigned int fd                | mode_t mode                      |                       |                    |                       |                     |
| 92            | sys_chown                  | const char *filename           | uid_t user                       | gid_t group           |                    |                       |                     |
| 93            | sys_fchown                 | unsigned int fd                | uid_t user                       | gid_t group           |                    |                       |                     |
| 94            | sys_lchown                 | const char *filename           | uid_t user                       | gid_t group           |                    |                       |                     |
| 95            | sys_umask                  | int mask                       |                                   |                       |                    |                       |                     |
| 96            | sys_gettimeofday           | struct timeval *tv             | struct timezone *tz              |                       |                    |                       |                     |
| 97            | sys_getrlimit              | unsigned int resource          | struct rlimit *rlim              |                       |                    |                       |                     |
| 98            | sys_getrusage              | int who                        | struct rusage *ru                |                       |                    |                       |                     |
| 99            | sys_sysinfo                | struct sysinfo *info           |                                   |                       |                    |                       |                     |
| 100           | sys_times                  | struct tms *tbuf               |                                   |                       |                    |                       |                     |
| 101           | sys_ptrace                 | long request                   | long pid                         | unsigned long addr    | unsigned long data |                       |                     |
| 102           | sys_getuid                 |                                 |                                   |                       |                    |                       |                     |
| 103           | sys_syslog                 | int type                       | char *bufp                       | int len               |                    |                       |                     |
| 104           | sys_getgid                 |                                 |                                   |                       |                    |                       |                     |
| 105           | sys_setuid                 | uid_t uid                      |                                   |                       |                    |                       |                     |
| 106           | sys_setgid                 | gid_t gid                      |                                   |                       |                    |                       |                     |
| 107           | sys_geteuid                |                                 |                                   |                       |                    |                       |                     |
| 108           | sys_getegid                |                                 |                                   |                       |                    |                       |                     |
| 109           | sys_setpgid                | pid_t pid                      | pid_t pgid                       |                       |                    |                       |                     |
| 110           | sys_getppid                |                                 |                                   |                       |                    |                       |                     |
| 111           | sys_getpgrp                |                                 |                                   |                       |                    |                       |                     |
| 112           | sys_setsid                 |                                 |                                   |                       |                    |                       |                     |
| 113           | sys_setreuid               | uid_t ruid                     | uid_t euid                       |                       |                    |                       |                     |
| 114           | sys_setregid               | gid_t rgid                     | gid_t egid                       |                       |                    |                       |                     |
| 115           | sys_getgroups              | int gidsetsize                 | gid_t *grouplist                 |                       |                    |                       |                     |
| 116           | sys_setgroups              | int gidsetsize                 | gid_t *grouplist                 |                       |                    |                       |                     |
| 117           | sys_setresuid              | uid_t ruid                     | uid_t euid                       | uid_t suid            |                    |                       |                     |
| 118           | sys_getresuid              | uid_t *ruid                    | uid_t *euid                      | uid_t *suid           |                    |                       |                     |
| 119           | sys_setresgid              | gid_t rgid                     | gid_t egid                       | gid_t sgid            |                    |                       |                     |
| 120           | sys_getresgid              | gid_t *rgid                    | gid_t *egid                      | gid_t *sgid           |                    |                       |                     |
| 121           | sys_getpgid                | pid_t pid                      |                                   |                       |                    |                       |                     |
| 122           | sys_setfsuid               | uid_t fsuid                    |                                   |                       |                    |                       |                     |
| 123           | sys_setfsgid               | gid_t fsgid                    |                                   |                       |                    |                       |                     |
| 124           | sys_getsid                 | pid_t pid                      |                                   |                       |                    |                       |                     |
| 125           | sys_capget                 | cap_user_header_t header       | cap_user_data_t datap            |                       |                    |                       |                     |
| 126           | sys_capset                 | cap_user_header_t header       | const cap_user_data_t data       |                       |                    |                       |                     |
| 127           | sys_rt_sigpending          | sigset_t *uset                 | size_t sigsetsize                |                       |                    |                       |                     |
| 128           | sys_rt_sigtimedwait        | const sigset_t *uthese         | siginfo_t *uinfo                 | const struct timespec *uts  |                |                    |                     |
| 129           | sys_rt_sigqueueinfo        | pid_t pid                      | int sig                          | siginfo_t *uinfo      |                    |                       |                     |
| 130           | sys_rt_sigsuspend          | sigset_t *unewset              | size_t sigsetsize                |                       |                    |                       |                     |
| 131           | sys_sigaltstack            | const stack_t *uss             | stack_t *uoss                    |                       |                    |                       |                     |
| 132           | sys_utime                  | char *filename                 | struct utimbuf *times            |                       |                    |                       |                     |
| 133           | sys_mknod                  | const char *filename           | umode_t mode                     | unsigned dev          |                    |                       |                     |
| 134           | sys_uselib                 | const char *library            |                                   |                       |                    |                       |                     |
| 135           | sys_personality            | unsigned int personality       |                                   |                       |                    |                       |                     |
| 136           | sys_ustat                  | unsigned dev                   | struct ustat *ubuf               |                       |                    |                       |                     |
| 137           | sys_statfs                 | const char *path               | struct statfs *buf               |                       |                    |                       |                     |
| 138           | sys_fstatfs                | unsigned int fd                | struct statfs *buf               |                       |                    |                       |                     |
| 139           | sys_sysfs                  | int option                     | unsigned long arg1               | unsigned long arg2    |                    |                       |                     |
| 140           | sys_getpriority            | int which                      | int who                          |                       |                    |                       |                     |
| 141           | sys_setpriority            | int which                      | int who                          | int niceval           |                    |                       |                     |
| 142           | sys_sched_setparam         | pid_t pid                      | struct sched_param *param        |                       |                    |                       |                     |
| 143           | sys_sched_getparam         | pid_t pid                      | struct sched_param *param        |                       |                    |                       |                     |
| 144           | sys_sched_setscheduler     | pid_t pid                      | int policy                       | struct sched_param *param  |             |                    |                     |
| 145           | sys_sched_getscheduler     | pid_t pid                      |                                   |                       |                    |                       |                     |
| 146           | sys_sched_get_priority_max | int policy                     |                                   |                       |                    |                       |                     |
| 147           | sys_sched_get_priority_min | int policy                     |                                   |                       |                    |                       |                     |
| 148           | sys_sched_rr_get_interval  | pid_t pid                      | struct timespec *interval        |                       |                    |                       |                     |
| 149           | sys_mlock                  | unsigned long start            | size_t len                       |                       |                    |                       |                     |
| 150           | sys_munlock                | unsigned long start            | size_t len                       |                       |                    |                       |                     |
| 151           | sys_mlockall               | int flags                      |                                   |                       |                    |                       |                     |
| 152           | sys_munlockall             |                                 |                                   |                       |                    |                       |                     |
| 153           | sys_vhangup                |                                 |                                   |                       |                    |                       |                     |
| 154           | sys_modify_ldt             | int func                       | void *ptr                        | unsigned long bytecount |                |                    |                     |
| 155           | sys_pivot_root             | const char *new_root           | const char *put_old              |                       |                    |                       |                     |
| 156           | sys__sysctl                | struct __sysctl_args *args     |                                   |                       |                    |                       |                     |
| 157           | sys_prctl                  | int option                     | unsigned long arg2               | unsigned long arg3    | unsigned long arg4 | unsigned long arg5    |                     |
| 158           | sys_arch_prctl             | int code                       | unsigned long addr               |                       |                    |                       |                     |
| 159           | sys_adjtimex               | struct timex *txc_p            |                                   |                       |                    |                       |                     |
| 160           | sys_setrlimit              | unsigned int resource          | struct rlimit *rlim              |                       |                    |                       |                     |
| 161           | sys_chroot                 | const char *filename           |                                   |                       |                    |                       |                     |
| 162           | sys_sync                   |                                 |                                   |                       |                    |                       |                     |
| 163           | sys_acct                   | const char *name               |                                   |                       |                    |                       |                     |
| 164           | sys_settimeofday           | struct timeval *tv             | struct timezone *tz              |                       |                    |                       |                     |
| 165           | sys_mount                  | const char *dev_name           | const char *dir_name             | const char *type      | unsigned long flags | void *data           |                     |
| 166           | sys_umount2                | const char *name               | int flags                        |                       |                    |                       |                     |
| 167           | sys_swapon                 | const char *specialfile        | int swap_flags                   |                       |                    |                       |                     |
| 168           | sys_swapoff                | const char *specialfile        |                                   |                       |                    |                       |                     |
| 169           | sys_reboot                 | int magic1                     | int magic2                       | unsigned int cmd      | void *arg         |                       |                     |
| 170           | sys_sethostname            | char *name                     | int len                          |                       |                    |                       |                     |
| 171           | sys_setdomainname          | char *name                     | int len                          |                       |                    |                       |                     |
| 172           | sys_iopl                   | unsigned int level             |                                   |                       |                    |                       |                     |
| 173           | sys_ioperm                 | unsigned long from             | unsigned long num                | int turn_on           |                    |                       |                     |
| 174           | sys_create_module          | const char *name_user          | unsigned long len                | const struct module *mod |              |                    |                     |
| 175           | sys_init_module            | void *umod                     | unsigned long len                | const char *uargs     |                    |                       |                     |
| 176           | sys_delete_module          | const char *name_user          | unsigned int flags               |                       |                    |                       |                     |
| 177           | sys_get_kernel_syms        | struct kernel_sym *table       |                                   |                       |                    |                       |                     |
| 178           | sys_query_module           | const char *name               | int which                        | void *buf             | size_t bufsize     | size_t *ret          |                     |
| 179           | sys_quotactl               | unsigned int cmd               | const char *special              | qid_t id              | void *addr        |                    |                     |
| 180           | sys_nfsservctl             | int cmd                        | struct nfsctl_arg *arg           | union nfsctl_res *res |                    |                       |                     |
| 181           | sys_getpmsg                | int fd                         | struct strbuf *ctl               | struct strbuf *dat    | int *flags         |                     |                     |
| 182           | sys_putpmsg                | int fd                         | struct strbuf *ctl               | struct strbuf *dat    | int flags         |                     |                     |
| 183           | sys_afs_syscall            |                                 |                                   |                       |                    |                       |                     |
| 184           | sys_tuxcall                |                                 |                                   |                       |                    |                       |                     |
| 185           | sys_security               |                                 |                                   |                       |                    |                       |                     |
| 186           | sys_gettid                 |                                 |                                   |                       |                    |                       |                     |
| 187           | sys_readahead              | int fd                         | loff_t offset                    | size_t count         |                    |                       |                     |
| 188           | sys_setxattr               | const char *path               | const char *name                 | const void *value     | size_t size        | int flags            |                     |
| 189           | sys_lsetxattr              | const char *path               | const char *name                 | const void *value     | size_t size        | int flags            |                     |
| 190           | sys_fsetxattr              | int fd                         | const char *name                 | const void *value     | size_t size        | int flags            |                     |
| 191           | sys_getxattr               | const char *path               | const char *name                 | void *value           | size_t size        |                    |                     |
| 192           | sys_lgetxattr              | const char *path               | const char *name                 | void *value           | size_t size        |                    |                     |
| 193           | sys_fgetxattr              | int fd                         | const char *name                 | void *value           | size_t size        |                    |                     |
| 194           | sys_listxattr              | const char *path               | char *list                       | size_t size           |                    |                       |                     |
| 195           | sys_llistxattr             | const char *path               | char *list                       | size_t size           |                    |                       |                     |
| 196           | sys_flistxattr             | int fd                         | char *list                       | size_t size           |                    |                       |                     |
| 197           | sys_removexattr            | const char *path               | const char *name                 |                    |                    |                       |                     |
| 198           | sys_lremovexattr           | const char *path               | const char *name                 |                    |                    |                       |                     |
| 199           | sys_fremovexattr           | int fd                         | const char *name                 |                    |                    |                       |                     |
| 200           | sys_tkill                  | int pid                        | int sig                          |                       |                    |                       |                     |
| 201           | sys_time                   | time_t *tloc                   |                                   |                       |                    |                       |                     |
| 202           | sys_futex                  | int *uaddr                     | int futex_op                     | int val               | const struct timespec *timeout | int *uaddr2 | int val3            |
| 203           | sys_sched_setaffinity      | pid_t pid                      | unsigned int len                 | unsigned long *user_mask_ptr |             |                    |                     |
| 204           | sys_sched_getaffinity      | pid_t pid                      | unsigned int len                 | unsigned long *user_mask_ptr |             |                    |                     |
| 205           | sys_set_thread_area        | struct user_desc *u_info       |                                   |                       |                    |                       |                     |
| 206           | sys_io_setup               | unsigned int nr_events         | aio_context_t *ctx_idp           |                       |                    |                       |                     |
| 207           | sys_io_destroy             | aio_context_t ctx_id           |                                   |                       |                    |                       |                     |
| 208           | sys_io_getevents           | aio_context_t ctx_id           | long min_nr                      | long nr               | struct io_event *events | struct timespec *timeout | |
| 209           | sys_io_submit              | aio_context_t ctx_id           | long nr                          | struct iocb **iocbpp |                    |                       |                     |
| 210           | sys_io_cancel              | aio_context_t ctx_id           | struct iocb *iocb                | struct io_event *result |                |                    |                     |
| 211           | sys_get_thread_area        | struct user_desc *u_info       |                                   |                       |                    |                       |                     |
| 212           | sys_lookup_dcookie         | u64 cookie                     | char *buf                        | size_t len            |                    |                       |                     |
| 213           | sys_epoll_create           | int size                       |                                   |                       |                    |                       |                     |
| 214           | sys_epoll_ctl_old          |                                 |                                   |                       |                    |                       |                     |
| 215           | sys_epoll_wait_old         |                                 |                                   |                       |                    |                       |                     |
| 216           | sys_remap_file_pages       | unsigned long start            | unsigned long size               | unsigned long prot    | unsigned long pgoff | unsigned long flags  |                     |
| 217           | sys_getdents64             | unsigned int fd                | struct linux_dirent64 *dirp      | unsigned int count    |                    |                       |                     |
| 218           | sys_set_tid_address        | int *tidptr                    |                                   |                       |                    |                       |                     |
| 219           | sys_restart_syscall        |                                 |                                   |                       |                    |                       |                     |
| 220           | sys_semtimedop             | int semid                      | struct sembuf *sops              | unsigned nsops        | const struct timespec *timeout |   |                     |
| 221           | sys_fadvise64              | int fd                         | loff_t offset                    | size_t len            | int advice         |                       |                     |
| 222           | sys_timer_create           | const clockid_t clockid        | struct sigevent *sevp            | timer_t *timerid      |                    |                       |                     |
| 223           | sys_timer_settime          | timer_t timerid                | int flags                        | const struct itimerspec *new_value | struct itimerspec *old_value |   |     |
| 224           | sys_timer_gettime          | timer_t timerid                | struct itimerspec *curr_value    |                       |                    |                       |                     |
| 225           | sys_timer_getoverrun       | timer_t timerid                |                                   |                       |                    |                       |                     |
| 226           | sys_timer_delete           | timer_t timerid                |                                   |                       |                    |                       |                     |
| 227           | sys_clock_settime          | const clockid_t clockid        | const struct timespec *tp        |                       |                    |                       |                     |
| 228           | sys_clock_gettime          | const clockid_t clockid        | struct timespec *tp              |                       |                    |                       |                     |
| 229           | sys_clock_getres           | const clockid_t clockid        | struct timespec *res             |                       |                    |                       |                     |
| 230           | sys_clock_nanosleep        | const clockid_t clockid        | int flags                        | const struct timespec *rqtp | struct timespec *rmtp |          |   |
| 231           | sys_exit_group             | int status                     |                                   |                       |                    |                       |                     |
| 232           | sys_epoll_wait             | int epfd                       | struct epoll_event *events       | int maxevents         | int timeout        |                       |                     |
| 233           | sys_epoll_ctl              | int epfd                       | int op                           | int fd                | struct epoll_event *event |   |             |
| 234           | sys_tgkill                 | pid_t tgid                     | pid_t pid                        | int sig               |                    |                       |                     |
| 235           | sys_utimes                 | char *filename                 | struct timeval *utimes           |                       |                    |                       |                     |
| 236           | sys_vserver                |                                 |                                   |                       |                    |                       |                     |
| 237           | sys_mbind                  | unsigned long start            | unsigned long len                | int mode              | const unsigned long *nmask | unsigned long maxnode | int flags |
| 238           | sys_set_mempolicy          | int mode                       | const unsigned long *nmask       | unsigned long maxnode |                    |                       |                     |
| 239           | sys_get_mempolicy          | int *mode                      | unsigned long *nmask             | unsigned long addr    | unsigned long maxnode | int flags          |                     |
| 240           | sys_mq_open                | const char *name               | int oflag                        | mode_t mode           | struct mq_attr *attr |                       |                     |
| 241           | sys_mq_unlink              | const char *name               |                                   |                       |                    |                       |                     |
| 242           | sys_mq_timedsend           | mqd_t mqdes                    | const char *msg_ptr              | size_t msg_len        | unsigned int msg_prio | const struct timespec *abs_timeout | |
| 243           | sys_mq_timedreceive        | mqd_t mqdes                    | char *msg_ptr                    | size_t msg_len        | unsigned int *msg_prio | const struct timespec *abs_timeout | |
| 244           | sys_mq_notify              | mqd_t mqdes                    | const struct sigevent *notification |                    |                    |                       |                     |
| 245           | sys_mq_getsetattr          | mqd_t mqdes                    | struct mq_attr *newattr          | struct mq_attr *oldattr |                 |                    |                     |
| 246           | sys_kexec_load             | unsigned long entry            | unsigned long nr_segments        | struct kexec_segment *segments | unsigned long flags |       |    |
| 247           | sys_waitid                 | int which                      | pid_t pid                        | struct siginfo *infop | int options        | struct rusage *ru    |                     |
| 248           | sys_add_key                | const char *type               | const char *description          | const void *payload   | size_t plen        | key_serial_t destringid |         |
| 249           | sys_request_key            | const char *type               | const char *description          | const char *callout_info | key_serial_t destringid |       |     |
| 250           | sys_keyctl                 | int cmd                        | unsigned long arg2               | unsigned long arg3    | unsigned long arg4 | unsigned long arg5   |                     |
| 251           | sys_ioprio_set             | int which                      | int who                          | int ioprio            |                    |                       |                     |
| 252           | sys_ioprio_get             | int which                      | int who                          |                       |                    |                       |                     |
| 253           | sys_inotify_init           |                                 |                                   |                       |                    |                       |                     |
| 254           | sys_inotify_add_watch      | int fd                         | const char *pathname             | uint32_t mask         |                    |                       |                     |
| 255           | sys_inotify_rm_watch       | int fd                         | __s32 wd                         |                       |                    |                       |                     |
| 256           | sys_migrate_pages          | pid_t pid                      | unsigned long maxnode            | const unsigned long *old_nodes | const unsigned long *new_nodes |       |    |
| 257           | sys_openat                 | int dfd                        | const char *filename             | int flags             | mode_t mode        |                       |                     |
| 258           | sys_mkdirat                | int dfd                        | const char *pathname             | mode_t mode           |                    |                       |                     |
| 259           | sys_mknodat                | int dfd                        | const char *filename             | mode_t mode           | dev_t dev          |                       |                     |
| 260           | sys_fchownat               | int dfd                        | const char *filename             | uid_t user            | gid_t group        | int flag             |                     |
| 261           | sys_futimesat              | int dfd                        | const char *filename             | struct timeval *utimes |                   |                       |                     |
| 262           | sys_newfstatat             | int dfd                        | const char *filename             | struct stat *statbuf  | int flag           |                       |                     |
| 263           | sys_unlinkat               | int dfd                        | const char *pathname             | int flag              |                    |                       |                     |
| 264           | sys_renameat               | int olddfd                     | const char *oldname              | int newdfd            | const char *newname |                      |                     |
| 265           | sys_linkat                 | int olddfd                     | const char *oldname              | int newdfd            | const char *newname | int flags            |                     |
| 266           | sys_symlinkat             | const char *oldname            | int newdfd                       | const char *newname   |                    |                       |                     |
| 267           | sys_readlinkat            | int dfd                        | const char *pathname             | char *buf             | int bufsiz         |                       |                     |
| 268           | sys_fchmodat              | int dfd                        | const char *filename             | mode_t mode           | int flag           |                       |                     |
| 269           | sys_faccessat             | int dfd                        | const char *filename             | int mode              | int flag           |                       |                     |
| 270           | sys_pselect6              | int n                          | fd_set *inp                      | fd_set *outp          | fd_set *exp        | const struct timespec *tsp | const sigset_t *sig   |
| 271           | sys_ppoll                 | struct pollfd *ufds            | unsigned int nfds                | const struct timespec *tsp | const sigset_t *sigmask |                |  |
| 272           | sys_unshare               | unsigned long unshare_flags    |                                   |                       |                    |                       |                     |
| 273           | sys_set_robust_list       | struct robust_list_head *head  | size_t len                       |                       |                    |                       |                     |
| 274           | sys_get_robust_list       | int pid                        | struct robust_list_head **head   | size_t *len           |                    |                       |                     |
| 275           | sys_splice                | int fd_in                      | loff_t *off_in                   | int fd_out            | loff_t *off_out    | size_t len           | unsigned int flags  |
| 276           | sys_tee                   | int fdin                       | int fdout                        | size_t len            | unsigned int flags |                       |                     |
| 277           | sys_sync_file_range       | int fd                         | loff_t offset                    | loff_t nbytes         | unsigned int flags |                       |                     |
| 278           | sys_vmsplice              | int fd                         | const struct iovec *iov          | unsigned long nr_segs | unsigned int flags |                       |                     |
| 279           | sys_move_pages            | pid_t pid                      | unsigned long nr_pages           | const void **pages    | const int *nodes   | int *status          | int flags           |
| 280           | sys_utimensat             | int dfd                        | const char *filename             | struct timespec *utimes | int flags        |                       |                     |
| 281           | sys_epoll_pwait           | int epfd                       | struct epoll_event *events       | int maxevents         | int timeout        | const sigset_t *sigmask | int sigsetsize  |
| 282           | sys_signalfd              | int ufd                        | const sigset_t *user_mask        | size_t sizemask       |                    |                       |                     |
| 283           | sys_timerfd_create        | int clockid                    | int flags                        |                       |                    |                       |                     |
| 284           | sys_eventfd               | unsigned int count             |                                   |                       |                    |                       |                     |
| 285           | sys_fallocate              | int fd                         | int mode                         | loff_t offset         | loff_t len         |                       |                     |
| 286           | sys_timerfd_settime        | int ufd                        | int flags                        | const struct itimerspec *utmr | const struct itimerspec *otmr |   |         |
| 287           | sys_timerfd_gettime        | int ufd                        | struct itimerspec *otmr          |                       |                    |                       |                     |
| 288           | sys_accept4                | int fd                         | struct sockaddr *upeer_sockaddr  | int *upeer_addrlen    | int flags          |                       |                     |
| 289           | sys_signalfd4              | int ufd                        | const sigset_t *user_mask        | size_t sizemask       | int flags          |                       |                     |
| 290           | sys_eventfd2               | unsigned int count             | int flags                        |                       |                    |                       |                     |
| 291           | sys_epoll_create1          | int flags                      |                                   |                       |                    |                       |                     |
| 292           | sys_dup3                   | unsigned int oldfd             | unsigned int newfd               | int flags             |                    |                       |                     |
| 293           | sys_pipe2                  | int *fildes                    | int flags                        |                       |                    |                       |                     |
| 294           | sys_inotify_init1          | int flags                      |                                   |                       |                    |                       |                     |
| 295           | sys_preadv                 | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    | unsigned long pos_l | unsigned long pos_h |                    |
| 296           | sys_pwritev                | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    | unsigned long pos_l | unsigned long pos_h |                    |
| 297           | sys_rt_tgsigqueueinfo      | pid_t tgid                     | pid_t pid                        | int sig               | siginfo_t *uinfo   |                       |                     |
| 298           | sys_perf_event_open        | struct perf_event_attr *attr_uptr | pid_t pid                      | int cpu               | int group_fd       | unsigned long flags   |                     |
| 299           | sys_recvmmsg               | int fd                         | struct msghdr *msg               | unsigned int vlen     | unsigned int flags | struct timespec *timeout |                    |
| 300           | sys_fanotify_init          | unsigned int flags             | unsigned int event_f_flags       |                       |                    |                       |                     |
| 301           | sys_fanotify_mark          | int fanotify_fd                | unsigned int flags               | uint64_t mask         | int dfd            | const char *pathname  |                    |
| 302           | sys_prlimit64              | pid_t pid                      | unsigned int resource            | const struct rlimit64 *new_limit | struct rlimit64 *old_limit |   |      |
| 303           | sys_name_to_handle_at      | int dfd                        | const char *name                 | struct file_handle *handle | int *mnt_id      | int flags            |                    |
| 304           | sys_open_by_handle_at      | int mount_fd                   | struct file_handle *handle       | int flags             |                    |                       |                     |
| 305           | sys_clock_adjtime          | clockid_t which_clock          | struct timex *tx                 |                       |                    |                       |                     |
| 306           | sys_syncfs                 | int fd                         |                                   |                       |                    |                       |                     |
| 307           | sys_sendmmsg               | int fd                         | struct msghdr *msg               | unsigned int vlen     | unsigned int flags |                       |                     |
| 308           | sys_setns                  | int fd                         | int nstype                       |                       |                    |                       |                     |
| 309           | sys_getcpu                 | unsigned *cpu                  | unsigned *node                   | struct getcpu_cache *cache |                |                    |                     |
| 310           | sys_process_vm_readv       | pid_t pid                      | const struct iovec *lvec         | unsigned long liovcnt | const struct iovec *rvec | unsigned long riovcnt | unsigned long flags |
| 311           | sys_process_vm_writev      | pid_t pid                      | const struct iovec *lvec         | unsigned long liovcnt | const struct iovec *rvec | unsigned long riovcnt | unsigned long flags |
| 312           | sys_kcmp                   | pid_t pid1                     | pid_t pid2                       | int type              | unsigned long idx1 | unsigned long idx2    |                    |
| 313           | sys_finit_module           | int fd                         | const char *uargs                | int flags             |                    |                       |                     |
| 314           | sys_sched_setattr          | pid_t pid                      | struct sched_attr *attr          | unsigned int flags    |                    |                       |                     |
| 315           | sys_sched_getattr          | pid_t pid                      | struct sched_attr *attr          | unsigned int size     | unsigned int flags |                       |                     |
| 316           | sys_renameat2              | int olddfd                     | const char *oldname              | int newdfd            | const char *newname | unsigned int flags   |                    |
| 317           | sys_seccomp                | unsigned int op                | unsigned int flags               | const char *uargs     |                    |                       |                     |
| 318           | sys_getrandom              | char *buf                      | size_t count                     | unsigned int flags    |                    |                       |                     |
| 319           | sys_memfd_create           | const char *uname_ptr          | unsigned int flags               |                       |                    |                       |                     |
| 320           | sys_kexec_file_load        | int kernel_fd                  | int initrd_fd                    | unsigned long cmdline_len | const char *cmdline_ptr | unsigned long flags |   |
| 321           | sys_bpf                    | int cmd                        | union bpf_attr *attr             | unsigned int size     |                    |                       |                     |
| 322           | sys_execveat               | int dfd                        | const char *filename             | const char *const *argv | const char *const *envp | int flags       |   |
| 323           | sys_userfaultfd            | int flags                      |                                   |                       |                    |                       |                     |
| 324           | sys_membarrier             | int cmd                        | int flags                        |                       |                    |                       |                     |
| 325           | sys_mlock2                 | unsigned long start            | size_t len                       | int flags             |                    |                       |                     |
| 326           | sys_copy_file_range        | int fd_in                      | loff_t *off_in                   | int fd_out            | loff_t *off_out    | size_t len           | unsigned int flags  |
| 327           | sys_preadv2                | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    | unsigned long pos_l | unsigned long pos_h  | int flags           |
| 328           | sys_pwritev2               | unsigned long fd               | const struct iovec *vec          | unsigned long vlen    | unsigned long pos_l | unsigned long pos_h  | int flags           |
| 329           | sys_pkey_mprotect          | unsigned long start            | size_t len                       | unsigned long prot    | int pkey           |                       |                     |
| 330           | sys_pkey_alloc             | unsigned long flags            | unsigned long access_rights      |                       |                    |                       |                     |
| 331           | sys_pkey_free              | int pkey                       |                                   |                       |                    |                       |                     |
| 332           | sys_statx                  | int dfd                        | const char *filename             | unsigned int flags    | unsigned int mask  | struct statx *buffer |                    |
| 333           | io_pgetevents              |                                |                                  |                       |                    |                      |                    |
| 334           | rseq                       |                                |                                  |                       |                    |                      |                    |
| 335           | pkey_mprotect              |                                |                                  |                       |                    |                      |                    |


### MacOS System Call Table

| **NR**|             **name**           | **%x8**| **description**                                               |
| :---: | :----------------------------: | :---: | :------------------------------------------------------------- |
| 0   | syscall                          | 0x0   | indirect system call                                           |
| 1   | exit                             | 0x1   | terminate the calling process                                  |
| 2   | fork                             | 0x2   | create a new process                                           |
| 3   | read                             | 0x3   | read input                                                     |
| 4   | write                            | 0x4   | write output                                                   |
| 5   | open                             | 0x5   | open or create a file for reading or writing                   |
| 6   | close                            | 0x6   | delete a descriptor                                            |
| 7   | wait4                            | 0x7   | wait for process termination                                   |
| 9   | link                             | 0x9   | make a hard file link                                          |
| 10  | unlink                           | 0xa   | remove directory entry                                         |
| 12  | chdir                            | 0xc   | change current working directory                               |
| 13  | fchdir                           | 0xd   | change current working directory                               |
| 14  | mknod                            | 0xe   | make a special file node                                       |
| 15  | chmod                            | 0xf   | change mode of file                                            |
| 16  | chown                            | 0x10  | change owner and group of a file                               |
| 18  | getfsstat                        | 0x12  | get list of all mounted file systems                           |
| 20  | getpid                           | 0x14  | get parent or calling process identification                   |
| 23  | setuid                           | 0x17  | set user and group ID                                          |
| 24  | getuid                           | 0x18  | get user identification                                        |
| 25  | geteuid                          | 0x19  | get user identification                                        |
| 26  | ptrace                           | 0x1a  | process tracing and debugging                                  |
| 27  | recvmsg                          | 0x1b  | receive a message from a socket                                |
| 28  | sendmsg                          | 0x1c  | send a message from a socket                                   |
| 29  | recvfrom                         | 0x1d  | receive a message from a socket                                |
| 30  | accept                           | 0x1e  | accept a connection on a socket                                |
| 31  | getpeername                      | 0x1f  | get address of connected peer                                  |
| 32  | getsockname                      | 0x20  | get socket name                                                |
| 33  | access                           | 0x21  | check accessibility of a file                                  |
| 34  | chflags                          | 0x22  | set file flags                                                 |
| 35  | fchflags                         | 0x23  | set file flags                                                 |
| 36  | sync                             | 0x24  | synchronize disk block in-core status with that on disk        |
| 37  | kill                             | 0x25  | send signal to a process                                       |
| 39  | getppid                          | 0x27  | get parent or calling process identification                   |
| 41  | dup                              | 0x29  | duplicate an existing file descriptor                          |
| 42  | pipe                             | 0x2a  | create descriptor pair for interprocess communication          |
| 43  | getegid                          | 0x2b  | get group process identification                               |
| 46  | sigaction                        | 0x2e  | software signal facilities                                     |
| 47  | getgid                           | 0x2f  | get group process identification                               |
| 48  | sigprocmask                      | 0x30  | manipulate current signal mask                                 |
| 49  | getlogin                         | 0x31  | get/set login name                                             |
| 50  | setlogin                         | 0x32  | get/set login name                                             |
| 51  | acct                             | 0x33  | enable or disable process accounting                           |
| 52  | sigpending                       | 0x34  | get pending signals                                            |
| 53  | sigaltstack                      | 0x35  | set and/or get signal stack context                            |
| 54  | ioctl                            | 0x36  | control device                                                 |
| 55  | reboot                           | 0x37  | reboot system or halt processor                                |
| 56  | revoke                           | 0x38  | revoke file access                                             |
| 57  | symlink                          | 0x39  | make symbolic link to a file                                   |
| 58  | readlink                         | 0x3a  | read value of a symbolic link                                  |
| 59  | execve                           | 0x3b  | execute a file                                                 |
| 60  | umask                            | 0x3c  | set file creation mode mask                                    |
| 61  | chroot                           | 0x3d  | change root directory                                          |
| 65  | msync                            | 0x41  | synchronize a mapped region                                    |
| 66  | vfork                            | 0x42  | deprecated system call to create a new process                 |
| 73  | munmap                           | 0x49  | remove a mapping                                               |
| 74  | mprotect                         | 0x4a  | control the protection of pages                                |
| 75  | madvise                          | 0x4b  | give advice about use of memory                                |
| 78  | mincore                          | 0x4e  | determine residency of memory pages                            |
| 79  | getgroups                        | 0x4f  | get group access list                                          |
| 80  | setgroups                        | 0x50  | set group access list                                          |
| 81  | getpgrp                          | 0x51  | get process group                                              |
| 82  | setpgid                          | 0x52  | set process group                                              |
| 83  | setitimer                        | 0x53  | get/set value of interval timer                                |
| 85  | swapon                           | 0x55  | start/stop swapping to file/device                             |
| 86  | getitimer                        | 0x56  | get/set value of interval timer                                |
| 89  | getdtablesize                    | 0x59  | get descriptor table size                                      |
| 90  | dup2                             | 0x5a  | duplicate an existing file descriptor                          |
| 92  | fcntl                            | 0x5c  | file control                                                   |
| 93  | select                           | 0x5d  | synchronous I/O                                                |
| 95  | fsync                            | 0x5f  | synchronize a file's in-core state with that on disk           |
| 96  | setpriority                      | 0x60  | get/set program scheduling priority                            |
| 97  | socket                           | 0x61  | create an endpoint for communication                           |
| 98  | connect                          | 0x62  | initiate a connection on a socket                              |
| 100 | getpriority                      | 0x64  | get/set program scheduling priority                            |
| 104 | bind                             | 0x68  | bind a name to a socket                                        |
| 105 | setsockopt                       | 0x69  | get and set options on sockets                                 |
| 106 | listen                           | 0x6a  | listen for connections on a socket                             |
| 111 | sigsuspend                       | 0x6f  | atomically release blocked signals and wait for interrupt      |
| 116 | gettimeofday                     | 0x74  | get/set date and time                                          |
| 117 | getrusage                        | 0x75  | get information about resource utilization                     |
| 118 | getsockopt                       | 0x76  | get and set options on sockets                                 |
| 120 | readv                            | 0x78  | read input                                                     |
| 121 | writev                           | 0x79  | write output                                                   |
| 122 | settimeofday                     | 0x7a  | get/set date and time                                          |
| 123 | fchown                           | 0x7b  | change owner and group of a file                               |
| 124 | fchmod                           | 0x7c  | change mode of file                                            |
| 126 | setreuid                         | 0x7e  | set real and effective user IDs                                |
| 127 | setregid                         | 0x7f  | set real and effective group ID                                |
| 128 | rename                           | 0x80  | change the name of a file                                      |
| 131 | flock                            | 0x83  | apply or remove an advisory lock on an open file               |
| 132 | mkfifo                           | 0x84  | make a fifo file                                               |
| 133 | sendto                           | 0x85  | send a message from a socket                                   |
| 134 | shutdown                         | 0x86  | shut down part of a full-duplex connection                     |
| 135 | socketpair                       | 0x87  | create a pair of connected sockets                             |
| 136 | mkdir                            | 0x88  | make a directory file                                          |
| 137 | rmdir                            | 0x89  | remove a directory file                                        |
| 138 | utimes                           | 0x8a  | set file access and modification times                         |
| 139 | futimes                          | 0x8b  | set file access and modification times                         |
| 140 | adjtime                          | 0x8c  | correct the time to allow synchronization of the system clock  |
| 142 | gethostuuid                      | 0x8e  | return a unique identifier for the current machine             |
| 147 | setsid                           | 0x93  | create session and set process group ID                        |
| 151 | getpgid                          | 0x97  | get process group                                              |
| 152 | setprivexec                      | 0x98  | (not available)                                                |
| 153 | pread                            | 0x99  | read input                                                     |
| 154 | pwrite                           | 0x9a  | write output                                                   |
| 155 | nfssvc                           | 0x9b  | NFS services                                                   |
| 157 | statfs                           | 0x9d  | get file system statistics                                     |
| 158 | fstatfs                          | 0x9e  | get file system statistics                                     |
| 159 | unmount                          | 0x9f  | mount or dismount a filesystem                                 |
| 161 | getfh                            | 0xa1  | get file handle                                                |
| 165 | quotactl                         | 0xa5  | manipulate filesystem quotas                                   |
| 167 | mount                            | 0xa7  | mount or dismount a filesystem                                 |
| 169 | csops                            | 0xa9  | (not available)                                                |
| 170 | csops_audittoken                 | 0xaa  | (not available)                                                |
| 173 | waitid                           | 0xad  | (not available)                                                |
| 177 | kdebug_typefilter                | 0xb1  | (not available)                                                |
| 178 | kdebug_trace_string              | 0xb2  | (not available)                                                |
| 179 | kdebug_trace64                   | 0xb3  | (not available)                                                |
| 180 | kdebug_trace                     | 0xb4  | (not available)                                                |
| 181 | setgid                           | 0xb5  | set user and group ID                                          |
| 182 | setegid                          | 0xb6  | set user and group ID                                          |
| 183 | seteuid                          | 0xb7  | set user and group ID                                          |
| 184 | sigreturn                        | 0xb8  | (not available)                                                |
| 186 | thread_selfcounts                | 0xba  | (not available)                                                |
| 187 | fdatasync                        | 0xbb  | (not available)                                                |
| 188 | stat                             | 0xbc  | get file status                                                |
| 189 | fstat                            | 0xbd  | get file status                                                |
| 190 | lstat                            | 0xbe  | get file status                                                |
| 191 | pathconf                         | 0xbf  | get configurable pathname variables                            |
| 192 | fpathconf                        | 0xc0  | get configurable pathname variables                            |
| 194 | getrlimit                        | 0xc2  | control maximum system resource consumption                    |
| 195 | setrlimit                        | 0xc3  | control maximum system resource consumption                    |
| 196 | getdirentries                    | 0xc4  | get directory entries in a filesystem independent format       |
| 197 | mmap                             | 0xc5  | "allocate memory, or map files or devices into memory"         |
| 199 | lseek                            | 0xc7  | reposition read/write file offset                              |
| 200 | truncate                         | 0xc8  | truncate or extend a file to a specified length                |
| 201 | ftruncate                        | 0xc9  | truncate or extend a file to a specified length                |
| 202 | sysctl                           | 0xca  | read/write system parameters                                   |
| 203 | mlock                            | 0xcb  | lock (unlock) physical pages in memory                         |
| 204 | munlock                          | 0xcc  | lock (unlock) physical pages in memory                         |
| 205 | undelete                         | 0xcd  | attempt to recover a deleted file                              |
| 216 | open_dprotected_np               | 0xd8  | (not available)                                                |
| 217 | fsgetpath_ext                    | 0xd9  | (not available)                                                |
| 220 | getattrlist                      | 0xdc  | get file system attributes                                     |
| 221 | setattrlist                      | 0xdd  | set file system attributes                                     |
| 222 | getdirentriesattr                | 0xde  | get file system attributes for multiple                        |
| 223 | exchangedata                     | 0xdf  | atomically exchange data between two files                     |
| 225 | searchfs                         | 0xe1  | search a volume quickly                                        |
| 226 | delete                           | 0xe2  | (not available)                                                |
| 227 | copyfile                         | 0xe3  | (not available)                                                |
| 228 | fgetattrlist                     | 0xe4  | get file system attributes                                     |
| 229 | fsetattrlist                     | 0xe5  | set file system attributes                                     |
| 230 | poll                             | 0xe6  | synchronous I/O multiplexing                                   |
| 234 | getxattr                         | 0xea  | get an extended attribute value                                |
| 235 | fgetxattr                        | 0xeb  | get an extended attribute value                                |
| 236 | setxattr                         | 0xec  | set an extended attribute value                                |
| 237 | fsetxattr                        | 0xed  | set an extended attribute value                                |
| 238 | removexattr                      | 0xee  | remove an extended attribute value                             |
| 239 | fremovexattr                     | 0xef  | remove an extended attribute value                             |
| 240 | listxattr                        | 0xf0  | list extended attribute names                                  |
| 241 | flistxattr                       | 0xf1  | list extended attribute names                                  |
| 242 | fsctl                            | 0xf2  | (not available)                                                |
| 243 | initgroups                       | 0xf3  | (not available)                                                |
| 244 | posix_spawn                      | 0xf4  | spawn a process                                                |
| 245 | ffsctl                           | 0xf5  | (not available)                                                |
| 247 | nfsclnt                          | 0xf7  | NFS client services                                            |
| 248 | fhopen                           | 0xf8  | open a file by file handle                                     |
| 250 | minherit                         | 0xfa  | control the inheritance of pages                               |
| 251 | semsys                           | 0xfb  | (not available)                                                |
| 252 | msgsys                           | 0xfc  | (not available)                                                |
| 253 | shmsys                           | 0xfd  | (not available)                                                |
| 254 | semctl                           | 0xfe  | control operations on a semaphore set                          |
| 255 | semget                           | 0xff  | obtain a semaphore id                                          |
| 256 | semop                            | 0x100 | atomic array of operations on a semaphore set                  |
| 258 | msgctl                           | 0x102 | (not available)                                                |
| 259 | msgget                           | 0x103 | (not available)                                                |
| 260 | msgsnd                           | 0x104 | (not available)                                                |
| 261 | msgrcv                           | 0x105 | (not available)                                                |
| 262 | shmat                            | 0x106 | map/unmap shared memory                                        |
| 263 | shmctl                           | 0x107 | shared memory control operations                               |
| 264 | shmdt                            | 0x108 | map/unmap shared memory                                        |
| 265 | shmget                           | 0x109 | get shared memory area identifier                              |
| 266 | shm_open                         | 0x10a | open a shared memory object                                    |
| 267 | shm_unlink                       | 0x10b | remove shared memory object                                    |
| 268 | sem_open                         | 0x10c | initialize and open a named semaphore                          |
| 269 | sem_close                        | 0x10d | close a named semaphore                                        |
| 270 | sem_unlink                       | 0x10e | remove a named semaphore                                       |
| 271 | sem_wait                         | 0x10f | lock a semaphore                                               |
| 272 | sem_trywait                      | 0x110 | lock a semaphore                                               |
| 273 | sem_post                         | 0x111 | unlock a semaphore                                             |
| 274 | sysctlbyname                     | 0x112 | (not available)                                                |
| 277 | open_extended                    | 0x115 | (not available)                                                |
| 278 | umask_extended                   | 0x116 | (not available)                                                |
| 279 | stat_extended                    | 0x117 | (not available)                                                |
| 280 | lstat_extended                   | 0x118 | (not available)                                                |
| 281 | fstat_extended                   | 0x119 | (not available)                                                |
| 282 | chmod_extended                   | 0x11a | (not available)                                                |
| 283 | fchmod_extended                  | 0x11b | (not available)                                                |
| 284 | access_extended                  | 0x11c | (not available)                                                |
| 285 | settid                           | 0x11d | (not available)                                                |
| 286 | gettid                           | 0x11e | (not available)                                                |
| 287 | setsgroups                       | 0x11f | (not available)                                                |
| 288 | getsgroups                       | 0x120 | (not available)                                                |
| 289 | setwgroups                       | 0x121 | (not available)                                                |
| 290 | getwgroups                       | 0x122 | (not available)                                                |
| 291 | mkfifo_extended                  | 0x123 | (not available)                                                |
| 292 | mkdir_extended                   | 0x124 | (not available)                                                |
| 293 | identitysvc                      | 0x125 | (not available)                                                |
| 294 | shared_region_check_np           | 0x126 | (not available)                                                |
| 296 | vm_pressure_monitor              | 0x128 | (not available)                                                |
| 297 | psynch_rw_longrdlock             | 0x129 | (not available)                                                |
| 298 | psynch_rw_yieldwrlock            | 0x12a | (not available)                                                |
| 299 | psynch_rw_downgrade              | 0x12b | (not available)                                                |
| 300 | psynch_rw_upgrade                | 0x12c | (not available)                                                |
| 301 | psynch_mutexwait                 | 0x12d | (not available)                                                |
| 302 | psynch_mutexdrop                 | 0x12e | (not available)                                                |
| 303 | psynch_cvbroad                   | 0x12f | (not available)                                                |
| 304 | psynch_cvsignal                  | 0x130 | (not available)                                                |
| 305 | psynch_cvwait                    | 0x131 | (not available)                                                |
| 306 | psynch_rw_rdlock                 | 0x132 | (not available)                                                |
| 307 | psynch_rw_wrlock                 | 0x133 | (not available)                                                |
| 308 | psynch_rw_unlock                 | 0x134 | (not available)                                                |
| 309 | psynch_rw_unlock2                | 0x135 | (not available)                                                |
| 310 | getsid                           | 0x136 | get process session                                            |
| 311 | settid_with_pid                  | 0x137 | (not available)                                                |
| 312 | psynch_cvclrprepost              | 0x138 | (not available)                                                |
| 313 | aio_fsync                        | 0x139 | (not available)                                                |
| 314 | aio_return                       | 0x13a | retrieve return status of asynchronous I/O operation           |
| 315 | aio_suspend                      | 0x13b | suspend until asynchronous I/O operations or timeout complete  |
| 316 | aio_cancel                       | 0x13c | cancel an outstanding asynchronous I/O operation (REALTIME)    |
| 317 | aio_error                        | 0x13d | retrieve error status of asynchronous I/O operation (REALTIME) |
| 318 | aio_read                         | 0x13e | asynchronous read from a file (REALTIME)                       |
| 319 | aio_write                        | 0x13f | asynchronous write to a file (REALTIME)                        |
| 320 | lio_listio                       | 0x140 | (not available)                                                |
| 322 | iopolicysys                      | 0x142 | (not available)                                                |
| 323 | process_policy                   | 0x143 | (not available)                                                |
| 324 | mlockall                         | 0x144 | (not available)                                                |
| 325 | munlockall                       | 0x145 | (not available)                                                |
| 327 | issetugid                        | 0x147 | is current process tainted by uid or gid changes               |
| 328 | __pthread_kill                   | 0x148 | (not available)                                                |
| 329 | __pthread_sigmask                | 0x149 | (not available)                                                |
| 330 | __sigwait                        | 0x14a | (not available)                                                |
| 331 | __disable_threadsignal           | 0x14b | (not available)                                                |
| 332 | __pthread_markcancel             | 0x14c | (not available)                                                |
| 333 | __pthread_canceled               | 0x14d | (not available)                                                |
| 334 | __semwait_signal                 | 0x14e | (not available)                                                |
| 336 | proc_info                        | 0x150 | (not available)                                                |
| 337 | sendfile                         | 0x151 | send a file to a socket                                        |
| 338 | stat64                           | 0x152 | get file status                                                |
| 339 | fstat64                          | 0x153 | get file status                                                |
| 340 | lstat64                          | 0x154 | get file status                                                |
| 341 | stat64_extended                  | 0x155 | (not available)                                                |
| 342 | lstat64_extended                 | 0x156 | (not available)                                                |
| 343 | fstat64_extended                 | 0x157 | (not available)                                                |
| 344 | getdirentries64                  | 0x158 | (not available)                                                |
| 345 | statfs64                         | 0x159 | get file system statistics                                     |
| 346 | fstatfs64                        | 0x15a | get file system statistics                                     |
| 347 | getfsstat64                      | 0x15b | (not available)                                                |
| 348 | __pthread_chdir                  | 0x15c | (not available)                                                |
| 349 | __pthread_fchdir                 | 0x15d | (not available)                                                |
| 350 | audit                            | 0x15e | commit BSM audit record to audit log                           |
| 351 | auditon                          | 0x15f | configure system audit parameters                              |
| 353 | getauid                          | 0x161 | retrieve audit user ID                                         |
| 354 | setauid                          | 0x162 | set audit indentifier                                          |
| 357 | getaudit_addr                    | 0x165 | retrieve audit session state                                   |
| 358 | setaudit_addr                    | 0x166 | set audit session state                                        |
| 359 | auditctl                         | 0x167 | configure system audit parameters                              |
| 360 | bsdthread_create                 | 0x168 | (not available)                                                |
| 361 | bsdthread_terminate              | 0x169 | (not available)                                                |
| 362 | kqueue                           | 0x16a | kernel event notification                                      |
| 363 | kevent                           | 0x16b | kernel event notification                                      |
| 364 | lchown                           | 0x16c | change owner and group of a file                               |
| 366 | bsdthread_register               | 0x16e | (not available)                                                |
| 367 | workq_open                       | 0x16f | (not available)                                                |
| 368 | workq_kernreturn                 | 0x170 | (not available)                                                |
| 369 | kevent64                         | 0x171 | kernel event notification                                      |
| 370 | __old_semwait_signal             | 0x172 | (not available)                                                |
| 371 | __old_semwait_signal_nocancel    | 0x173 | (not available)                                                |
| 372 | thread_selfid                    | 0x174 | (not available)                                                |
| 373 | ledger                           | 0x175 | (not available)                                                |
| 374 | kevent_qos                       | 0x176 | kernel event notification                                      |
| 375 | kevent_id                        | 0x177 | (not available)                                                |
| 380 | __mac_execve                     | 0x17c | (not available)                                                |
| 381 | __mac_syscall                    | 0x17d | (not available)                                                |
| 382 | __mac_get_file                   | 0x17e | (not available)                                                |
| 383 | __mac_set_file                   | 0x17f | (not available)                                                |
| 384 | __mac_get_link                   | 0x180 | (not available)                                                |
| 385 | __mac_set_link                   | 0x181 | (not available)                                                |
| 386 | __mac_get_proc                   | 0x182 | (not available)                                                |
| 387 | __mac_set_proc                   | 0x183 | (not available)                                                |
| 388 | __mac_get_fd                     | 0x184 | (not available)                                                |
| 389 | __mac_set_fd                     | 0x185 | (not available)                                                |
| 390 | __mac_get_pid                    | 0x186 | (not available)                                                |
| 394 | pselect                          | 0x18a | synchronous I/O multiplexing a la POSIX.1g                     |
| 395 | pselect_nocancel                 | 0x18b | (not available)                                                |
| 396 | read_nocancel                    | 0x18c | (not available)                                                |
| 397 | write_nocancel                   | 0x18d | (not available)                                                |
| 398 | open_nocancel                    | 0x18e | (not available)                                                |
| 399 | close_nocancel                   | 0x18f | (not available)                                                |
| 400 | wait4_nocancel                   | 0x190 | (not available)                                                |
| 401 | recvmsg_nocancel                 | 0x191 | (not available)                                                |
| 402 | sendmsg_nocancel                 | 0x192 | (not available)                                                |
| 403 | recvfrom_nocancel                | 0x193 | (not available)                                                |
| 404 | accept_nocancel                  | 0x194 | (not available)                                                |
| 405 | msync_nocancel                   | 0x195 | (not available)                                                |
| 406 | fcntl_nocancel                   | 0x196 | (not available)                                                |
| 407 | select_nocancel                  | 0x197 | (not available)                                                |
| 408 | fsync_nocancel                   | 0x198 | (not available)                                                |
| 409 | connect_nocancel                 | 0x199 | (not available)                                                |
| 410 | sigsuspend_nocancel              | 0x19a | (not available)                                                |
| 411 | readv_nocancel                   | 0x19b | (not available)                                                |
| 412 | writev_nocancel                  | 0x19c | (not available)                                                |
| 413 | sendto_nocancel                  | 0x19d | (not available)                                                |
| 414 | pread_nocancel                   | 0x19e | (not available)                                                |
| 415 | pwrite_nocancel                  | 0x19f | (not available)                                                |
| 416 | waitid_nocancel                  | 0x1a0 | (not available)                                                |
| 417 | poll_nocancel                    | 0x1a1 | (not available)                                                |
| 418 | msgsnd_nocancel                  | 0x1a2 | (not available)                                                |
| 419 | msgrcv_nocancel                  | 0x1a3 | (not available)                                                |
| 420 | sem_wait_nocancel                | 0x1a4 | (not available)                                                |
| 421 | aio_suspend_nocancel             | 0x1a5 | (not available)                                                |
| 422 | __sigwait_nocancel               | 0x1a6 | (not available)                                                |
| 423 | __semwait_signal_nocancel        | 0x1a7 | (not available)                                                |
| 424 | __mac_mount                      | 0x1a8 | (not available)                                                |
| 425 | __mac_get_mount                  | 0x1a9 | (not available)                                                |
| 426 | __mac_getfsstat                  | 0x1aa | (not available)                                                |
| 427 | fsgetpath                        | 0x1ab | get the path associated with filesystem node identifier (inode |
| 428 | audit_session_self               | 0x1ac | (not available)                                                |
| 429 | audit_session_join               | 0x1ad | (not available)                                                |
| 430 | fileport_makeport                | 0x1ae | (not available)                                                |
| 431 | fileport_makefd                  | 0x1af | (not available)                                                |
| 432 | audit_session_port               | 0x1b0 | (not available)                                                |
| 433 | pid_suspend                      | 0x1b1 | (not available)                                                |
| 434 | pid_resume                       | 0x1b2 | (not available)                                                |
| 435 | pid_hibernate                    | 0x1b3 | (not available)                                                |
| 436 | pid_shutdown_sockets             | 0x1b4 | (not available)                                                |
| 438 | shared_region_map_and_slide_np   | 0x1b6 | (not available)                                                |
| 439 | kas_info                         | 0x1b7 | (not available)                                                |
| 440 | memorystatus_control             | 0x1b8 | (not available)                                                |
| 441 | guarded_open_np                  | 0x1b9 | (not available)                                                |
| 442 | guarded_close_np                 | 0x1ba | (not available)                                                |
| 443 | guarded_kqueue_np                | 0x1bb | (not available)                                                |
| 444 | change_fdguard_np                | 0x1bc | (not available)                                                |
| 445 | usrctl                           | 0x1bd | (not available)                                                |
| 446 | proc_rlimit_control              | 0x1be | (not available)                                                |
| 447 | connectx                         | 0x1bf | initiate a connection on a socket                              |
| 448 | disconnectx                      | 0x1c0 | disconnects a connection on a socket                           |
| 449 | peeloff                          | 0x1c1 | (not available)                                                |
| 450 | socket_delegate                  | 0x1c2 | (not available)                                                |
| 451 | telemetry                        | 0x1c3 | (not available)                                                |
| 452 | proc_uuid_policy                 | 0x1c4 | (not available)                                                |
| 453 | memorystatus_get_level           | 0x1c5 | (not available)                                                |
| 454 | system_override                  | 0x1c6 | (not available)                                                |
| 455 | vfs_purge                        | 0x1c7 | (not available)                                                |
| 456 | sfi_ctl                          | 0x1c8 | (not available)                                                |
| 457 | sfi_pidctl                       | 0x1c9 | (not available)                                                |
| 458 | coalition                        | 0x1ca | (not available)                                                |
| 459 | coalition_info                   | 0x1cb | (not available)                                                |
| 460 | necp_match_policy                | 0x1cc | (not available)                                                |
| 461 | getattrlistbulk                  | 0x1cd | get file system attributes for multiple directory entries      |
| 462 | clonefileat                      | 0x1ce | create copy on write clones of files                           |
| 463 | openat                           | 0x1cf | open or create a file for reading or writing                   |
| 464 | openat_nocancel                  | 0x1d0 | (not available)                                                |
| 465 | renameat                         | 0x1d1 | change the name of a file                                      |
| 466 | faccessat                        | 0x1d2 | check accessibility of a file                                  |
| 467 | fchmodat                         | 0x1d3 | change mode of file                                            |
| 468 | fchownat                         | 0x1d4 | change owner and group of a file                               |
| 469 | fstatat                          | 0x1d5 | get file status                                                |
| 470 | fstatat64                        | 0x1d6 | (not available)                                                |
| 471 | linkat                           | 0x1d7 | make a hard file link                                          |
| 472 | unlinkat                         | 0x1d8 | remove directory entry                                         |
| 473 | readlinkat                       | 0x1d9 | read value of a symbolic link                                  |
| 474 | symlinkat                        | 0x1da | make symbolic link to a file                                   |
| 475 | mkdirat                          | 0x1db | make a directory file                                          |
| 476 | getattrlistat                    | 0x1dc | get file system attributes                                     |
| 477 | proc_trace_log                   | 0x1dd | (not available)                                                |
| 478 | bsdthread_ctl                    | 0x1de | (not available)                                                |
| 479 | openbyid_np                      | 0x1df | (not available)                                                |
| 480 | recvmsg_x                        | 0x1e0 | (not available)                                                |
| 481 | sendmsg_x                        | 0x1e1 | (not available)                                                |
| 482 | thread_selfusage                 | 0x1e2 | (not available)                                                |
| 483 | csrctl                           | 0x1e3 | (not available)                                                |
| 484 | guarded_open_dprotected_np       | 0x1e4 | (not available)                                                |
| 485 | guarded_write_np                 | 0x1e5 | (not available)                                                |
| 486 | guarded_pwrite_np                | 0x1e6 | (not available)                                                |
| 487 | guarded_writev_np                | 0x1e7 | (not available)                                                |
| 488 | renameatx_np                     | 0x1e8 | change the name of a file                                      |
| 489 | mremap_encrypted                 | 0x1e9 | (not available)                                                |
| 490 | netagent_trigger                 | 0x1ea | (not available)                                                |
| 491 | stack_snapshot_with_config       | 0x1eb | (not available)                                                |
| 492 | microstackshot                   | 0x1ec | (not available)                                                |
| 493 | grab_pgo_data                    | 0x1ed | (not available)                                                |
| 494 | persona                          | 0x1ee | (not available)                                                |
| 496 | mach_eventlink_signal            | 0x1f0 | (not available)                                                |
| 497 | mach_eventlink_wait_until        | 0x1f1 | (not available)                                                |
| 498 | mach_eventlink_signal_wait_until | 0x1f2 | (not available)                                                |
| 499 | work_interval_ctl                | 0x1f3 | (not available)                                                |
| 500 | getentropy                       | 0x1f4 | get entropy                                                    |
| 501 | necp_open                        | 0x1f5 | (not available)                                                |
| 502 | necp_client_action               | 0x1f6 | (not available)                                                |
| 503 | __nexus_open                     | 0x1f7 | (not available)                                                |
| 504 | __nexus_register                 | 0x1f8 | (not available)                                                |
| 505 | __nexus_deregister               | 0x1f9 | (not available)                                                |
| 506 | __nexus_create                   | 0x1fa | (not available)                                                |
| 507 | __nexus_destroy                  | 0x1fb | (not available)                                                |
| 508 | __nexus_get_opt                  | 0x1fc | (not available)                                                |
| 509 | __nexus_set_opt                  | 0x1fd | (not available)                                                |
| 510 | __channel_open                   | 0x1fe | (not available)                                                |
| 511 | __channel_get_info               | 0x1ff | (not available)                                                |
| 512 | __channel_sync                   | 0x200 | (not available)                                                |
| 513 | __channel_get_opt                | 0x201 | (not available)                                                |
| 514 | __channel_set_opt                | 0x202 | (not available)                                                |
| 515 | ulock_wait                       | 0x203 | (not available)                                                |
| 516 | ulock_wake                       | 0x204 | (not available)                                                |
| 517 | fclonefileat                     | 0x205 | create copy on write clones of files                           |
| 518 | fs_snapshot                      | 0x206 | (not available)                                                |
| 519 | register_uexc_handler            | 0x207 | (not available)                                                |
| 520 | terminate_with_payload           | 0x208 | (not available)                                                |
| 521 | abort_with_payload               | 0x209 | (not available)                                                |
| 522 | necp_session_open                | 0x20a | (not available)                                                |
| 523 | necp_session_action              | 0x20b | (not available)                                                |
| 524 | setattrlistat                    | 0x20c | set file system attributes                                     |
| 525 | net_qos_guideline                | 0x20d | (not available)                                                |
| 526 | fmount                           | 0x20e | (not available)                                                |
| 527 | ntp_adjtime                      | 0x20f | (not available)                                                |
| 528 | ntp_gettime                      | 0x210 | (not available)                                                |
| 529 | os_fault_with_payload            | 0x211 | (not available)                                                |
| 530 | kqueue_workloop_ctl              | 0x212 | (not available)                                                |
| 531 | __mach_bridge_remote_time        | 0x213 | (not available)                                                |
| 532 | coalition_ledger                 | 0x214 | (not available)                                                |
| 533 | log_data                         | 0x215 | (not available)                                                |
| 534 | memorystatus_available_memory    | 0x216 | (not available)                                                |
| 535 | objc_bp_assist_cfg_np            | 0x217 | (not available)                                                |
| 536 | shared_region_map_and_slide_2_np | 0x218 | (not available)                                                |
| 537 | pivot_root                       | 0x219 | (not available)                                                |
| 538 | task_inspect_for_pid             | 0x21a | (not available)                                                |
| 539 | task_read_for_pid                | 0x21b | (not available)                                                |
| 540 | preadv                           | 0x21c | read input                                                     |
| 541 | pwritev                          | 0x21d | write output                                                   |
| 542 | preadv_nocancel                  | 0x21e | (not available)                                                |
| 543 | pwritev_nocancel                 | 0x21f | (not available)                                                |
| 544 | ulock_wait2                      | 0x220 | (not available)                                                |
| 545 | proc_info_extended_id            | 0x221 | (not available)                                                |
| 546 | tracker_action                   | 0x222 | (not available)                                                |
| 547 | debug_syscall_reject             | 0x223 | (not available)                                                |
| 548 | MAXSYSCALL                       | 0x224 | (not available)                                                |
| 63  | invalid                          | 0x3f  | (not available)                                                |
