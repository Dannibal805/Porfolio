import pdb;
pdb.set_trace()

class Shape:
	def __init__(self, side1,side2):
		self.side1 = side1
		self.side2 = side2
		pass

	def get_area(self):
		return self.side1*self.side2
		pass

	def __str__(self):
		return f'El area es  {self.__class__.__name__} is: {self.get_area()}'


class Shape: ...


class Rectangle(Shape):  # Superclass in Parenthesis
	pass


class Shape: ...


class Rectangle(Shape): ...


class Square(Rectangle):
	def __init__(self, side):
		super().__init__(side, side)


class Shape: ...


class Rectangle(Shape): ...


class Square(Rectangle): ...


class Triangle(Rectangle):
	def __init__(self, base, height):
		super().__init__(base, height)

	def get_area(self):
		area = super().get_area()
		return area / 2


class Shape: ...


class Rectangle(Shape): ...


class Square(Rectangle): ...

# At the start of the file
from math import pi


class Circle(Shape):
	def __init__(self, radius):
		self.radius = radius

	def get_area(self):
		return pi * (self.radius ** 2)


# Folded classes
class Shape: ...


class Rectangle(Shape): ...




# Import square root
from math import sqrt


class Hexagon(Rectangle):

	def get_area(self):
		return (3 * sqrt(3) * self.side1 ** 2) / 2


from math import pi, sqrt


# Folded classes
class Shape: ...


class Rectangle(Shape): ...


class Square(Rectangle): ...


class Triangle(Rectangle): ...


class Circle(Shape): ...


class Hexagon(Rectangle): ...


breakpoint()



