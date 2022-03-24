# OpenGL-Assignment-

## Question 1
Write a program to read RGBA values of a color from 'input.txt' and set the background to this color.The input file contains space separated values of RED, GREEN, BLUE and ALPHA components of a color.
**Input** : 0.7 0.5 1.0 1.0
**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q1/output.jpg" width = "500" height = "500"></p>

## Question 2
You are given the coordinates of water dispensaries/coolers in NITC. You are required to visit each dispensary and paint it in blue so others can spot them easily. Imagine your friend is on an airplane flying over NITC. Represent what is seen by your friend. (Make everything else white). <br>
Coordinates are given in ‘input.txt’. <br>
Note:- Ensure the points are visible. Manipulate point size if points are too small.
**Input** : 
  0.8 0.3
  0.3 0.8
  0.0 -0.7
  -0.5 -0.5
  0.2 -0.4
  -0.7 0.9
 **Output**
 
 <p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q2/output.jpg" width = "500" height = "500"></p>


## Question 7
Recreate the following figure by using only squares. The outermost square can be of any dimension, but should be entirely visible within the screen.<br>
Note:- Make the background white and the edges in black. <br>
Hint: Identify a specific pattern that is getting repeated.

<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q7/output.jpg" width = "500" height = "500"></p>

## Question 8
From each point on the strokes made by your mouse, draw a line segment to the world
coordinate (0,0). The color of the line segment is determined by the following rules:
* 1st quadrant - RED
* 2nd quadrant - GREEN
* 3rd quadrant - BLUE
* 4th quadrant - YELLOW
* x-axis - BLACK
* y-axis – BLACK

The brightness of the colour for line segment in each quadrant depends on the angular distance of the line segment from the starting angle of the quadrant. The ratio of angular coverage to the quadrant’s total angular distance is the color brightness. Ex:- If the line segment is in 3rd quadrant at an angle 4Π/ 3 from the positive x-axis, then the angle covered is 4Π/3 − Π and the brightness is determined by the ratio (4 * Π/3 - Π)/(Π/2). Hence the color is -> RGB (0,0,(4 * Π/3 - Π)/(Π/2)).

<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q8/output.jpg" width = "500" height = "500"></p>

## Question 9
### Part-A
Write a program to generate a circle, which is colored on the boundary and the interior with the same color (similar to the one given in the figure below, note that in this case, both the boundary of the circle and the interior are colored in white.)

<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q9/output_a.jpg" width = "500" height = "500"></p>

### Part-B
Is it possible to write a program to generate a circle whose boundary alone is red colored and the whole interior is colored in green? If so, write the program. If not, justify why you are not able to write the program, stating the limitation of OpenGL/ C++ which does not allow you to do that.

<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q9/output_b.jpg" width = "500" height = "500"></p>

### Part-C
Is it possible to write a program to generate a circle whose boundary alone is red colored and the whole interior is colored in white initially and by the next mouse click, it is displayed in such a way that its color in the interior gets changed to green? If not, justify why you are not able to write the program, stating the limitation of OpenGL/ C++ which does not allow you to do that.



