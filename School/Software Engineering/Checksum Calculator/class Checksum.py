class Checksum:
    check = ["3C", "69", "B8", "15", "4A", "5E", "08", "CD"]
    sum = hex(int(check[0], 16) + int(check[1], 16))
    print (sum[2:])
    for i in range(2, 8):
        if len(sum) == 5:
            temp2 = sum[3:]
            sum = hex(int(temp2, 16) + 1)
            print (temp2 + " + 1")
            temp1 = temp2
        temp1 = sum[2:] if len(sum) > 3 else '0'
        sum = hex(int(temp1, 16) + int(check[i], 16))
        print (temp1 + " + " + check[i])
        print (sum[2:])
