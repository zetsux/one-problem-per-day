#include <stdio.h>
#include <string.h>

void bigSubtract(int a[], int b[], int lena, int lenb, int sb) {
    int ia = lena - 1, ib = lenb - 1;
    while (ib >= sb) {
        if (a[ia] < b[ib]) {
            a[ia] = a[ia] + 10 - b[ib];
            a[ia - 1]--;
        } else {
            a[ia] -= b[ib];
        }


        ia--;
        ib--;
    }

    while (a[ia] < 0 && ia >= 0) {
        a[ia] += 10;
        a[ia - 1]--;
        ia--;
    }
}

void bigDiv2(int a[], int ia, int lena) {
    int rem = 0, dv, q;
    for (int i = ia; i < lena ; i++){
        dv = (rem * 10) + a[i];
        rem = dv & 1;
        q = dv / 2;
        a[i] = q;
    }
}

int findStart(int a[]) {
    int i = 0;
    while (a[i] == 0) i++;

    return i;
}

void bigPrint(int a[], int ia, int lena) {
    if (ia == lena) {
        puts("0");
    } else {
        for (int i = ia; i < lena; i++) {
            printf("%d", a[i]);
        }
        puts("");
    }
}

void solve()
{
    char a[101], b[101];
    int ai[101], bi[101], ait[101];

    scanf("%s", a);
    scanf("%s", b);

    int idx, lenb = strlen(b), lena = strlen(a);
    for (idx = 0; idx < lenb; idx++) {
        ai[idx] = a[idx] - 48;
        ait[idx] = ai[idx];
        bi[idx] = b[idx] - 48; 
    }

    for (; idx < lena; idx++) {
        ai[idx] = a[idx] - 48;
        ait[idx] = ai[idx];
    }

    bigSubtract(ai, bi, lena, lenb, 0);
    bigDiv2(ai, findStart(ai), lena);
    bigSubtract(ait, ai, lena, lena, findStart(ai));
    bigPrint(ait, findStart(ait), lena);
    bigPrint(ai, findStart(ai), lena);
}
 
int main()
{
    int n = 10;
    while (n--) solve();

    return 0;
}