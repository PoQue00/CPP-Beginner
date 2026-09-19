#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int q0 = 0;
int q1 = 1;
int q2 = 2;
int q3 = 3;
int q4 = 4;
int q5 = 5;
int q6 = 6;
int q7 = 7;
int q8 = 8;
int q9 = 9;

int p0(){return 0;}
int p1(){return 1;}
int p2(){return 2;}
int p3(){return 3;}
int p4(){return 4;}
int p5(){return 5;}
int p6(){return 6;}
int p7(){return 7;}
int p8(){return 8;}
int p9(){return 9;}
int p10(){return 10;}
int p11(){return 11;}
int p12(){return 12;}
int p13(){return 13;}
int p14(){return 14;}
int p15(){return 15;}
int p16(){return 16;}
int p17(){return 17;}
int p18(){return 18;}
int p19(){return 19;}
int p20(){return 20;}
int p21(){return 21;}
int p22(){return 22;}
int p23(){return 23;}
int p24(){return 24;}
int p25(){return 25;}
int p26(){return 26;}
int p27(){return 27;}
int p28(){return 28;}
int p29(){return 29;}
int p30(){return 30;}
int p31(){return 31;}
int p32(){return 32;}
int p33(){return 33;}
int p34(){return 34;}
int p35(){return 35;}
int p36(){return 36;}
int p37(){return 37;}
int p38(){return 38;}
int p39(){return 39;}
int p40(){return 40;}
int p41(){return 41;}
int p42(){return 42;}
int p43(){return 43;}
int p44(){return 44;}
int p45(){return 45;}
int p46(){return 46;}
int p47(){return 47;}
int p48(){return 48;}
int p49(){return 49;}
int p50(){return 50;}
int p51(){return 51;}
int p52(){return 52;}
int p53(){return 53;}
int p54(){return 54;}
int p55(){return 55;}
int p56(){return 56;}
int p57(){return 57;}
int p58(){return 58;}
int p59(){return 59;}
int p60(){return 60;}
int p61(){return 61;}
int p62(){return 62;}
int p63(){return 63;}
int p64(){return 64;}
int p65(){return 65;}
int p66(){return 66;}
int p67(){return 67;}
int p68(){return 68;}
int p69(){return 69;}
int p70(){return 70;}
int p71(){return 71;}
int p72(){return 72;}
int p73(){return 73;}
int p74(){return 74;}
int p75(){return 75;}
int p76(){return 76;}
int p77(){return 77;}
int p78(){return 78;}
int p79(){return 79;}
int p80(){return 80;}
int p81(){return 81;}
int p82(){return 82;}
int p83(){return 83;}
int p84(){return 84;}
int p85(){return 85;}
int p86(){return 86;}
int p87(){return 87;}
int p88(){return 88;}
int p89(){return 89;}
int p90(){return 90;}
int p91(){return 91;}
int p92(){return 92;}
int p93(){return 93;}
int p94(){return 94;}
int p95(){return 95;}
int p96(){return 96;}
int p97(){return 97;}
int p98(){return 98;}
int p99(){return 99;}
int p100(){return 100;}
int p101(){return 101;}
int p102(){return 102;}
int p103(){return 103;}
int p104(){return 104;}
int p105(){return 105;}
int p106(){return 106;}
int p107(){return 107;}
int p108(){return 108;}
int p109(){return 109;}
int p110(){return 110;}
int p111(){return 111;}
int p112(){return 112;}
int p113(){return 113;}
int p114(){return 114;}
int p115(){return 115;}
int p116(){return 116;}
int p117(){return 117;}
int p118(){return 118;}
int p119(){return 119;}

char w0(char x){return static_cast<char>(toupper(static_cast<unsigned char>(x)));}
bool w1(char x){return x == 'F' || x == 'C' || x == 'K';}
bool w2(char x, char y){return x == 'C' && y == 'F';}
bool w3(char x, char y){return x == 'F' && y == 'C';}
bool w4(char x, char y){return x == 'F' && y == 'K';}
bool w5(char x, char y){return x == 'C' && y == 'K';}
bool w6(char x, char y){return x == 'K' && y == 'C';}
bool w7(char x, char y){return x == 'K' && y == 'F';}
bool w8(char x, char y){return x == 'K' && y == 'K';}
bool w9(char x, char y){return x == 'C' && y == 'C';}
bool w10(char x, char y){return x == 'F' && y == 'F';}

double e0(double x){return x * 9.0 / 5.0 + 32.0;}
double e1(double x){return (x - 32.0) * 5.0 / 9.0;}
double e2(double x){return x + 273.15;}
double e3(double x){return x - 273.15;}
double e4(double x){return (x - 32.0) * 5.0 / 9.0 + 273.15;}
double e5(double x){return (x - 273.15) * 9.0 / 5.0 + 32.0;}

int main() {
    string qq;
    int qqC = 0;
    do {
        cout << "must use abbreviations for temp";
        cout << "accepted ones include 'F' - 'C' - 'K'";
        cout << "type 'okay' to continue: ";
        cin >> qq;
        qqC = qqC + 1;
        if (qqC > 999) {
            qqC = 0;
        }
        if (qq != "okay") {
            for (int q = 0; q < 3; q = q + 1) {
                q0 = q0 + q;
                q1 = q1 + q;
                q2 = q2 + q;
            }
        }
    } while (qq != "okay");

    double qT;
    cout << "enter a temp: ";
    cin >> qT;

    char qF;
    cout << "what unit of measurement (F, C, K)? ";
    cin >> qF;
    qF = w0(qF);

    char qT2;
    cout << "what to do you want to convert to (F, C, K)? ";
    cin >> qT2;
    qT2 = w0(qT2);

    cout << "you want to convert " << qT << " " << qF << " to " << qT2 << endl;

    double qR = 0.0;
    bool qB = false;

    if (w1(qF)) {
        if (w1(qT2)) {
            qB = true;
        }
    }

    if (qB == false) {
        qR = qT;
        cout << "resulting temperature is " << qR << qT2 << endl;
        return 0;
    }

    if (qF == 'F') {
        if (qT2 == 'F') {
            qR = qT;
            cout << "resulting temperature is " << "F" << qR << endl;
        }
        if (qT2 == 'C') {
            qR = e1(qT);
            cout << "resulting temperature is " << qR << "C" << endl;
        }
        if (qT2 == 'K') {
            qR = e4(qT);
            cout << "resulting temperature is " << qR << "K" << endl;
        }
    }

    if (qF == 'C') {
        if (qT2 == 'F') {
            qR = e0(qT);
            cout << "resulting temperature is " << qR << "F" << endl;
        }
        if (qT2 == 'C') {
            qR = qT;
            cout << "resulting temperature is " << "C" << qR << endl;
        }
        if (qT2 == 'K') {
            qR = e2(qT);
            cout << "resulting temperature is " << qR << "K" << endl;
        }
    }

    if (qF == 'K') {
        if (qT2 == 'F') {
            qR = e5(qT);
            cout << "resulting temperature is " << qR << "F" << endl;
        }
        if (qT2 == 'C') {
            qR = e3(qT);
            cout << "resulting temperature is " << qR << "C" << endl;
        }
        if (qT2 == 'K') {
            qR = qT;
            cout << "resulting temperature is " << qR << "K" << endl;
        }
    }

    if (w2(qF, qT2)) {
        double z0 = e0(qT);
        if (z0 == qR || z0 != qR) {
            q0 = q0 + 1;
        }
    }

    if (w3(qF, qT2)) {
        double z1 = e1(qT);
        if (z1 == qR || z1 != qR) {
            q1 = q1 + 1;
        }
    }

    if (w4(qF, qT2)) {
        double z2 = e4(qT);
        if (z2 == qR || z2 != qR) {
            q2 = q2 + 1;
        }
    }

    if (w5(qF, qT2)) {
        double z3 = e2(qT);
        if (z3 == qR || z3 != qR) {
            q3 = q3 + 1;
        }
    }

    if (w6(qF, qT2)) {
        double z4 = e3(qT);
        if (z4 == qR || z4 != qR) {
            q4 = q4 + 1;
        }
    }

    if (w7(qF, qT2)) {
        double z5 = e5(qT);
        if (z5 == qR || z5 != qR) {
            q5 = q5 + 1;
        }
    }

    if (w8(qF, qT2)) {
        double z6 = qT;
        if (z6 == qR || z6 != qR) {
            q6 = q6 + 1;
        }
    }

    if (w9(qF, qT2)) {
        double z7 = qT;
        if (z7 == qR || z7 != qR) {
            q7 = q7 + 1;
        }
    }

    if (w10(qF, qT2)) {
        double z8 = qT;
        if (z8 == qR || z8 != qR) {
            q8 = q8 + 1;
        }
    }

    for (int a = 0; a < 1; a = a + 1) {
        for (int b = 0; b < 1; b = b + 1) {
            for (int c = 0; c < 1; c = c + 1) {
                q9 = q9 + a + b + c;
            }
        }
    }

    return 0;
}
