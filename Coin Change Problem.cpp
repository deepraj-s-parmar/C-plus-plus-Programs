#include <iostream>
using namespace std;

int main() {

    int n, amount;

    cin >> n;

    int coins[100];

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    cin >> amount;

    int dp[1000];

    for (int i = 0; i <= amount; i++)
        dp[i] = 9999;

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {

        for (int j = 0; j < n; j++) {

            if (coins[j] <= i)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }

    if (dp[amount] == 9999)
        cout << "Not Possible";
    else
        cout << "Minimum Coins: " << dp[amount];

    return 0;
}
