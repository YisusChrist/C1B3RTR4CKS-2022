print("Si quieres recuperar tu flag vas a tener que pensar un poco jeje :)\n")

flag = list(input("Introduce el flag: "))     
for i in range(0,len(flag)):
    for j in range(i,len(flag)-1):
        for k in range(j,len(flag)-2):
            flag[k], flag[k+1] = flag[k+1], flag[k]

flag = "".join(flag)
    
if (flag == "ll1_Ol_nppfsg3a{10Od0}"):
    print("\nCorrecto!")
else:
    print("\nIncorrecto, sigue intentándolo haha")