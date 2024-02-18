''' Print diamond structure:  
    * 
   * *
  * * *
 * * * *
  * * *
   * *
    *
    '''
n=4
for i in range(n):
    print(" "*(n-i)+"* "*(i+1))

for j in range(n-1):
    print(" "*(j+2)+"* "*(n-j-1))