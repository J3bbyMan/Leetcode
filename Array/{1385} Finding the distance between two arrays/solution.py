def findTheDistanceValue(arr1, arr2, d):
        count = len(arr1)

        for i in arr1:
            for j in arr2:
                if abs(i-j) <= d:
                    count -= 1
                    break      

        return count 
