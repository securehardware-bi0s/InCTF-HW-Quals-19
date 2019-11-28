import string

letters = string.ascii_lowercase

s = "thunderstricken"

l = [5]

for c in s:
	current = l[-1]
	i = 0
	while(1):
		#print i
		if(letters[(current^i)%26] == c):
			l.append(i)
			break
		i += 1

l1 = [0]

for c in l:
	current = l1[-1]
	i = 0
	while(1):
		#print i
		if(current^i == c):
			l1.append(i)
			break
		i+=1

l1 = [str(i) for i in l1]
s1 = " ".join(l1)
print s1