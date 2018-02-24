# Uses python3
import sys

def optimal_summands(n):
    summands = []
    #write your code here
    temp=0
    prev_sum=0
    sum=0
    while(sum<=n):
    	temp+=1
    	
    	prev_sum=sum
    	sum=sum+temp
    	if (sum>n):
    		sum=sum-temp
    		break
    	summands.append(temp)

    #print (prev_sum,"nsn",summands[-1])
    summands[-1]=(n-prev_sum+summands[-1])
    #print (sum)



    return summands

if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    summands = optimal_summands(n)
    print(len(summands))
    for x in summands:
        print(x, end=' ')
