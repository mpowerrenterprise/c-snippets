from operator import attrgetter

class User:

	def __init__(self,x,y):
		self.name = x
		self.user_id = y

	def __repr__(self):
		return self.name +" : "+str(self.user_id)

Users = [

	User("joker",23),
	User("guna",33),
	User("maker",563),
	User("doer",565),


]

for user in Users:
	print(user)

print("-------------")

for user in sorted(Users, key =attrgetter('name')):
	print(user)

print("-------------")

for user in sorted(Users, key=attrgetter('user_id')):
	print(user)