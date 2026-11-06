def countServers(n, logs, x, queries):
        output = []
        for i in queries:
            check = [0] * n
            
            for j in logs:
                if (j[1] <= (i) and j[1] >= i - x):
                    check[j[0] - 1] = 1
            
            time_period_total = 0
            
            for k in check:
                if k == 0:
                    time_period_total += 1
            
            output.append(time_period_total)        

        return output       
