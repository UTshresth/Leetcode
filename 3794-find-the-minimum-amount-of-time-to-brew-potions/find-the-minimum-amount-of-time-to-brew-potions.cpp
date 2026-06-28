#include <vector>
#include <algorithm>

class Solution {
private:
    struct Point {
        long long x, y;
    };

public:
    long long minTime(std::vector<int>& skill, std::vector<int>& mana) {
        int n = skill.size();
        int m = mana.size();

        // 1. Compute prefix sums of skills
        std::vector<long long> P(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            P[i + 1] = P[i] + skill[i];
        }

        // 2. Build the Upper Convex Hull of points (P[i-1], skill[i])
        std::vector<Point> hull;
        for (int i = 0; i < n; ++i) {
            Point current = {P[i], (long long)skill[i]};
            
            while (hull.size() >= 2) {
                Point B = hull.back();
                Point A = hull[hull.size() - 2];
                
                // Cross product to eliminate points that don't belong to the upper hull
                // (B.x - A.x) * (C.y - B.y) - (B.y - A.y) * (C.x - B.x)
                if ((B.x - A.x) * (current.y - B.y) - (B.y - A.y) * (current.x - B.x) >= 0) {
                    hull.pop_back();
                } else {
                    break;
                }
            }
            hull.push_back(current);
        }

        // 3. Greedily process transitions between consecutive potions
        long long S = 0; // Start time of potion 0 is 0
        for (int j = 1; j < m; ++j) {
            long long A = mana[j - 1];
            long long B = mana[j];
            long long M = A - B;
            long long C_coeff = A;

            // Binary search over the upper hull segments to maximize M*x + C_coeff*y
            int low = 0, high = hull.size() - 1;
            while (low < high) {
                int mid = low + (high - low) / 2;
                long long val_curr = M * hull[mid].x + C_coeff * hull[mid].y;
                long long val_next = M * hull[mid + 1].x + C_coeff * hull[mid + 1].y;
                
                if (val_next > val_curr) {
                    low = mid + 1; // Trend is increasing, move right
                } else {
                    high = mid;    // Trend is decreasing, peak is to the left or at mid
                }
            }
            
            long long max_val = M * hull[low].x + C_coeff * hull[low].y;
            S += max_val;
        }

        // Total time is when the final wizard finishes the final potion
        long long total_time = S + (long long)mana[m - 1] * P[n];
        return total_time;
    }
};