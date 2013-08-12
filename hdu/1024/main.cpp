//project name:1024 ( Max Sum Plus Plus )
//Author:����ɱ��
//Creat Date & Time:Sun Apr 22 21:27:13 2012

#include <iostream>
#include <stdio.h>
using namespace std;

int f[1000003];
int best[2][1000003];
int N, M;
int a[1000003];
int sum[1000003];

int main() {

    while (scanf("%d%d", &M, &N) != EOF) {
        int ans = -2000000000;
        sum[0] = 0;
        for (int i = 1; i <= N; i++) {
            scanf("%d", &a[i]);
            sum[i] = sum[i - 1] + a[i];
        }
        for (int i = 0; i <= N; i++) best[0][i] = 0;
        int cur = 0;
        for (int j = 1; j <= M; j++) {
            for (int i = 0; i <= j - 1; i++) best[1 - cur][i] = -2000000000;
            for (int i = j; i <= N; i++) {
                if (j == i) f[i] = sum[i];
                else f[i] = max(best[cur][i - 1], f[i - 1]) + a[i];
                best[1 - cur][i] = max(best[1 - cur][i - 1], f[i]);
                if (j == M) ans = max(ans, f[i]);
            }
            cur = 1 - cur;
        }
        printf("%d\n", ans);
    }
    return 0;

}

//end
//ism

