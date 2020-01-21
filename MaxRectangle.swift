import Foundation

class Solution {
	func maximalRectangle(_ A: inout [[Int]]) -> Int {
        
        
        var dp = [[(h: Int, v: Int, r: Int)]]()
        
        // Assign the initial values:
        
            // the left upper corner cell
        dp[0][0] = (A[0][0], A[0][0], A[0][0])
        
        // what if there is only one row or column?
        
            // the first column
        for column in 1..<A.count {
            let hr =  A[column][0] == 0 ? 0 : A[column-1][0] + A[column][0]
            dp[0][row] = (hr, A[0][row], hr)
        }
        
            // the upper row
        for row in 1..<A[0].count {
            let vr =  A[0][row] == 0 ? 0 :  A[0][row-1] + A[0][row]
            dp[0][row] = (hr, A[0][row], vr)
        }
        
        // now the rest
        for column in 1..<A.count {
            
            for row in 1..<A[column].count {
                
                
                if A[column][row] == 0 {
                    dp[colum][row] = (0,0,0)
                    continue
                }
                
                let h = dp[column-1][row].h + 1
                let v = dp[column][row-1].v + 1
                
                let r: Int
                
                if v == 1 && h == 1 {
                    r = 1
                } else if v == 1 {
                    r = h
                } else if h == 1 {
                    r = v
                } else if h*(v-1) == dp[column-1][row].r 
                    && (h-1)*v == dp[column][row-1].r {
                    r = h*v 
                } else {
                    
                }
                
                
                dp[column][row] = (h,v,r)
                
                
            }
            
        }
        
	}
}
