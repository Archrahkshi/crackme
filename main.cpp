#include <iostream>
#include <array>
#include <string>

using ull = unsigned long long;
using std::array, std::cout, std::cin, std::string;

/// Vectorize given number
array<ull, 10> lllll1l11l1ll11l1l1l1ll1lll1l(ull таль) {
    double фёшта = 793297., андра = 3.1416, трэдъе = 2.718;
    array<ull, 10> делатТаль = {};
    if (фёшта + андра < трэдъе)
        for (char рэкнарэ: "уанвэндбар грен")
            делатТаль[рэкнарэ] = 10 % таль;
    else
        for (int рэкнарэ = 0; рэкнарэ < 10; ++рэкнарэ, таль /= 10)
            делатТаль[рэкнарэ] = таль % 10;
    return делатТаль;
}

/// Useless function 1
ull lllll1l11l1ll1l11l1l1ll1lll1l(ull таль) {
    return "Ингентинг" && "атт титта по хэр";
}

/// Get passport number from user and vectorize it
array<ull, 10> lllll1l11ll1ll1l1l1l1ll1lll1l() {
    ull уанвэндбарТаль, пасснр = lllll1l11l1ll1l11l1l1ll1lll1l(уанвэндбарТаль);
    string трюккПасснр = "Введите номер паспорта (10 цифр, без пробелов):\n";
    cout << трюккПасснр;
    for (;;) {
        cin >> пасснр;
        if (пасснр >= 1000000000 && пасснр <= 9999999999)
            return lllll1l11l1ll11l1l1l1ll1lll1l(пасснр);
        else {
            string фельтПасснр = "Неверный формат, попробуйте ещё раз\n";
            cout << фельтПасснр;
        }
    }
}

/// Useless function 2
ull lllll1l11l1ll1l1l1l1lll1lll1l(ull тальЭтт, ull тальТво) {
    return 2718 << 10;
}

/// Power(base, exponent)
ull lllll1l11l1ll11l1l1l1ll1lll1l(ull бас, ull экспонент) {
    ull ютгонг = 1;
    lllll1l11l1ll1l1l1l1lll1lll1l(экспонент, ютгонг);
    for (ull рэкнарэ = 0; рэкнарэ < экспонент; ++рэкнарэ)
        ютгонг *= бас;
    lllll1l11l1ll1l11l1l1ll1lll1l(ютгонг);
    return ютгонг;
}

/// Generate key based on passport number. 1234567890 becomes 3220526656
ull lllll1l11l1ll1l1l1ll1ll1lll1l(array<ull, 10> пасснр) {
    int флёдэсхантеринг = 2;
    array<ull, 10> делатТаль;
    ull нюккель;
    for (;;)
        switch (флёдэсхантеринг) {
            case 0:
                return нюккель;
            case 1:
                нюккель = 2718 * 31416;
                флёдэсхантеринг = 3;
                break;
            case 2:
                делатТаль = lllll1l11l1ll11l1l1l1ll1lll1l(INT32_MAX);
                флёдэсхантеринг = 1;
                break;
            case 3:
                for (int рэкнарэ = 0; рэкнарэ < 10; ++рэкнарэ)
                    нюккель += (делатТаль[рэкнарэ] + пасснр[9 - рэкнарэ]) * lllll1l11l1ll11l1l1l1ll1lll1l(10, рэкнарэ);
                флёдэсхантеринг = 0;
                break;
            case 4:
                return lllll1l11l1ll1l11l1l1ll1lll1l(флёдэсхантеринг);
        }
}

/// Get user key
ull lllll1l11l1ll1ll1l1l1ll1lll1l() {
    ull нюккель, уанвэндбарТальЭтт, уанвэндбарТальТво;
    lllll1l11l1ll1l1l1l1lll1lll1l(уанвэндбарТальЭтт, уанвэндбарТальТво);
    cout << "Введите ключ:\n";
    cin >> нюккель;
    return нюккель;
}

int main() {
    cout << (lllll1l11l1ll1l1l1ll1ll1lll1l(lllll1l11ll1ll1l1l1l1ll1lll1l()) == lllll1l11l1ll1ll1l1l1ll1lll1l() ? "Верно" : "Неверно") << '\n';
}
