logs = ["ERROR", "INFO", "WARN", "ERROR", "INFO", "ERROR"]

a = logs.count("ERROR")
b = logs.count("WARN")
c = logs.count("INFO")

D = [a, b, c]

dic = {}

for log in logs:
    if log in dic:
        dic[log] += 1
    else:
        dic[log] = 1

error_mas_comun = max(dic,key = dic.get)
dic["Most_Common"] = error_mas_comun

print(dic)