#include <vector>
#include <numeric> 

class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        
        int count0 = 0;
        int count1 = 0;
        for (int student : students) {
            if (student == 0) {
                count0++;
            } else {
                count1++;
            }
        }
        
        
        for (int sandwich : sandwiches) {
            if (sandwich == 0) { // Current sandwich is circular
                if (count0 > 0) {
                    count0--;
                } else {
                   
                    return count1;
                }
            } else { // Current sandwich is square
                if (count1 > 0) {
                    count1--;
                } else {
                   
                    return count0;
                }
            }
        }
      
        return 0;
    }
};
