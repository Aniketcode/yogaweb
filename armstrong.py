def count(n):
    c=0
    while(n>0):
        d=n%10
        c+=1
        n=n//10
    return c



n=int(input("Enter the number: "))
temp=n
d=count(n)
print(temp)

m=0
while(n>0):
    dig=n%10
    m+=dig**d
    n//=10
print(m)
if temp==m:
    print("Entered number is a armstrong number ")
else:
    print("Enterd number is not a armstrong number ")