#include <iostream>

void solve() {
    long long n, k;
    std::cin >> n >> k;
    
    long long max_popcount = 0;
    long long current_bit_value = 1;
    
    while (n > 0) {
        long long full_layer_cost = k * current_bit_value;
        
        if (n >= full_layer_cost) {
            max_popcount += k;
            n -= full_layer_cost;
        } else {
            max_popcount += (n / current_bit_value);
            break; 
        }
        current_bit_value *= 2;
    }
    
    std::cout << max_popcount << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}