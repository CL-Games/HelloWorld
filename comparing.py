#Python 

input_num = 60

for i in range (1,input_num + 1,1):
        if (int(input_num) % i) == 0 : 
            print (str(i), end=" ")