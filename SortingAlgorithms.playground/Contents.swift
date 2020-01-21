// MARK: - Quick Sort

var unsortedArray = [7, 4, 1, 3, 9, 2, 4, 5, 9, 8]

func quickSort(_ array: inout [Int], _ lo: Int, _ hi: Int) {
    
    if lo < hi {
        let p = partition(&array, lo, hi)
        quickSort(&array, lo, p - 1)
        quickSort(&array, p + 1, hi)
    }
    
}
    

func partition(_ array: inout [Int], _ lo: Int, _ hi: Int) -> Int {
    let pivot = array[hi]
    var i = lo
    
    for j in lo...hi {
        if array[j] < pivot {
            array.swapAt(i, j)
            i += 1
        }
    }
    
    array.swapAt(i, hi)
    
    
    return i
}

quickSort(&unsortedArray, 0, unsortedArray.count-1)

//print(unsortedArray)

// MARK: - Merge sort



func merge(_ array: inout [Int], lo: Int, mid:Int, hi: Int) {
    
    var sorted = Array(repeating: 0, count: array.count)
    
    var i=lo, j=mid+1, k=lo
    print("starting:", array, ", lo:",lo,", mid:",mid,", hi:",hi)
    
    
    while i<=mid && j<=hi {
        
        if array[i] < array[j] {
            sorted[k] = array[i]
            i += 1
        } else {
            sorted[k] = array[j]
            j += 1
        }
        
        if k == 0 || sorted[k]>sorted[k-1] {
            countDict[sorted[k]] = (k,1)
        } else {
             countDict[sorted[k]] = (countDict[sorted[k]]!.count, countDict[sorted[k]]!.repeated+1)
        }
        
        k += 1
    }
        
    while i<=mid {
        sorted[k] = array[i]
    
        if k == 0 || sorted[k]>sorted[k-1] {
            countDict[sorted[k]] = (k,1)
        } else {
             countDict[sorted[k]] = (countDict[sorted[k]]!.count, countDict[sorted[k]]!.repeated+1)
        }
        
        i += 1
        k += 1
    }
        
    while j<=hi {
        sorted[k] = array[j]
        
        if k == 0 || sorted[k]>sorted[k-1] {
            countDict[sorted[k]] = (k,1)
        } else {
             countDict[sorted[k]] = (countDict[sorted[k]]!.count, countDict[sorted[k]]!.repeated+1)
        }
        
        j += 1
        k += 1
    }
    
    print(sorted)
    
    for i in lo...hi {
        array[i] = sorted[i]
    }
    
    print(array)
    
}


var countDict = [Int:(count: Int, repeated: Int)]()

var anotherUnsortedArray = [0]

let querries = [7, 9, 0, 8, 3, 1, 6]

func mergeSort(_ array: inout [Int], lo: Int, hi: Int) {
    
    guard lo<hi else { return }
    
    let mid = (lo+hi)/2
    print("lo:",lo,", mid:",mid,", hi:",hi)
    mergeSort(&array, lo:lo, hi:mid);
    mergeSort(&array, lo:mid+1, hi:hi)
    merge(&array, lo:lo, mid:mid, hi:hi)
    
}


mergeSort(&anotherUnsortedArray, lo: 0, hi: anotherUnsortedArray.count-1)


func printQuerries() {
    querries.forEach { (int) in
        print(int, ":", countDict[int]?.count)
        
        if let countTuple = countDict[int] {
            print(countTuple.count, " ")
        } else {
            guard let last = anotherUnsortedArray.last else {return}
            guard let first = anotherUnsortedArray.first else {return}
                        
            if last < int {
                print(last, countDict[last])
                print(countDict[last]!.count + countDict[last]!.repeated, " ")
            } else if first >= int {
                    print(0, " ")
            } else {
                for i in (0..<int).reversed() {
                    if let countTuple = countDict[i] {
                        print(countTuple.count+countTuple.repeated, " ")
                        break
                    }
                }
            }
        }
    }
}
    
    
printQuerries()

