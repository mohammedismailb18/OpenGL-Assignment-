# OpenGL-Assignment-

## Installing
- To get information on the newest version of package and their dependencies.

  ```
   sudo apt-get update
  ```
- Provides simple windowing API and I/O operations.

  ```
   sudo apt-get install freeglut3
  ```
 
 - header files for freeglut3.

    ```
    sudo apt-get install freeglut3-dev
    ```
 
 - A linker for ELF files. Faster than GNU Linker.

    ```
    sudo apt-get install binutils-gold
    ```
 - Software tool for managing the build process of software.
    ```
    sudo apt-get install g++ cmake
    ```
 - For determining which OpenGL extensions are supported on the platform.
    ```
     sudo apt-get install libglew-dev 
    ```



## Question 1
Write a program to read RGBA values of a color from 'input.txt' and set the background to this color.The input file contains space separated values of RED, GREEN, BLUE and ALPHA components of a color. <br>
**Input** : 0.7 0.5 1.0 1.0 <br>
**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q1/output.jpg" width = "500" height = "500"></p>

## Question 2
You are given the coordinates of water dispensaries/coolers in NITC. You are required to visit each dispensary and paint it in blue so others can spot them easily. Imagine your friend is on an airplane flying over NITC. Represent what is seen by your friend. (Make everything else white). <br>
Coordinates are given in ‘input.txt’. <br>
Note:- Ensure the points are visible. Manipulate point size if points are too small.

**Input** : 
- 0.8 0.3
- 0.3 0.8
- 0.0 -0.7
- -0.5 -0.5
- 0.2 -0.4
- -0.7 0.9
 
 **Output**
 <p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q2/output.jpg" width = "500" height = "500"></p>

## Question 3
You manage a trekking site. There are N points of interest that need to be visited in order during the entire hike. The entire journey is very dangerous and hence you tie safety ropes between each pair of locations(in order). Rope is brown in color.<br><br>
Example :- Say the locations to be visited are a,b,c,d,e in that order, then tie ropes between a & b, b & c, ...., d & e.<br><br>
Write a program to read the coordinates of the points of interest given in the order in which they should be visited and draw the ropes between them. Make the background white in color.

**Input**
- 0.8 0.3
- 0.0 0.0
- 0.0 0.5
- -0.5 0.5
- 0.0 -0.5
- -0.7 -0.5

**Output**

<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q3/output.jpg" width = "500" height = "500"></p>

## Question 4
Write a program in which you can make strokes by holding down the mouse left button, dragging and releasing. The path (stroke) traced out by the mouse pointer between the events of mouse's left button click and the eventual release of the left click needs to be plotted. There can be any number of strokes.<br><br>
Using this concept write your name on the screen.<br>
Note:- Make the background white and the strokes black in color.

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q4/output.jpg" width = "500" height = "500"></p>

## Question 5
You are given 3 rectangular strips whose vertex coordinates are as given below. Rectangle A (RED COLOR) (-0.5,0.6,-0.8),(-0.2,0.9,-0.8),(0.8,-0.1, 0.8), (0.5, -0.4, 0.8). Rectangle B (GREEN COLOR) (0.0, 0.8, 0.8),(0.3, 0.5, 0.8),(-0.7, -0.5, -0.8),(-1.0, -0.2, -0.8). Rectangle C (BLUE COLOR) (0.6, 0, -0.8),(0.6, -0.3, -0.8),(-0.9, -0.3, 0.8),(-0.9, 0, 0.8) Plot these strips on screen. Make the background black.<br><br>
Remember in OpenGL -z axis goes into the screen, +z axis comes out of the screen.<br>
Input file contains the coordinates of vertices of the rectangle one after the other.<br>

**Input**

- -0.5 0.6 -0.8
- -0.2 0.9 -0.8
- 0.8 -0.1 0.8
- 0.5 -0.4 0.8
- 0.0 0.8 0.8
- 0.3 0.5 0.8
- -0.7 -0.5 -0.8
- -1.0 -0.2 -0.8
- 0.6 0 -0.8
- 0.6 -0.3 -0.8
- -0.9 -0.3 0.8
- -0.9 0 0.8

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q5/output.jpg" width = "500" height = "500"></p>

## Question 6
You are given the vertices of a polygon. Write a program to generate a geometric pattern, similar to the one given below(considering the pattern given below as an example), which reads as many vertices as a text file.

**Input**
- 0.4 0.96
- 0.96 0.4
- 0.96 -0.4
- 0.4 -0.96
- -0.4 -0.96
- -0.96 -0.4
- -0.96 0.4
- -0.4 0.96

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q6/output.jpg" width = "500" height = "500"></p>

## Question 7
Recreate the following figure by using only squares. The outermost square can be of any dimension, but should be entirely visible within the screen.<br>
Note:- Make the background white and the edges in black. <br>
Hint: Identify a specific pattern that is getting repeated.

**Output**
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

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q8/output.jpg" width = "500" height = "500"></p>

## Question 9
### Part-A
Write a program to generate a circle, which is colored on the boundary and the interior with the same color (similar to the one given in the figure below, note that in this case, both the boundary of the circle and the interior are colored in white.)

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q9/output_a.jpg" width = "500" height = "500"></p>

### Part-B
Is it possible to write a program to generate a circle whose boundary alone is red colored and the whole interior is colored in green? If so, write the program. If not, justify why you are not able to write the program, stating the limitation of OpenGL/ C++ which does not allow you to do that.

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q9/output_b.jpg" width = "500" height = "500"></p>

### Part-C
Is it possible to write a program to generate a circle whose boundary alone is red colored and the whole interior is colored in white initially and by the next mouse click, it is displayed in such a way that its color in the interior gets changed to green? If not, justify why you are not able to write the program, stating the limitation of OpenGL/ C++ which does not allow you to do that.

**Output**
<p align = "center"><img src = "https://github.com/mohammedismailb18/OpenGL-Assignment-/blob/main/Q9/output_c.gif" width = "500" height = "500"></p>




