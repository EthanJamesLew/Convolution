# Convolution
A standard  C++ kernel processor for images
 
# Roadmap

Classes

  **Image** 
    
    The image class will need to be able represent an arbitraily large image in memory. 
    Also, it will need to be able to access pixels by (x,y) coordinates. Ideally, uint_32
    with RGBA bit shift will an efficient way to represent colors in memory. This
    representation should need only a 1D aggregate (for efficiency). With the following
    transformation for an (mxn) image:
    
    Given an index Q:
       Q->(x,y)
       x=Q%n, y=(Q-x)/n
    
    The image class will also need to be able to handle edges. The Image class should be able
    to handle coordinates outside an image:
    
      WRAP:
        Tiles the image by modulation
      MIRROR:
        Flips image tiles by inverse modulation
      EXTEND:
        Extends the edges into the out-of-bounds range
      EMPTY:
        Returns 0 if coordinates falls out of bounds
   
   **FileImage**     
     
     Given a pointer to an image FileImage will load .ppt, .bmp and .png files into it. Also it
     should be able to save an Image class to disk.
     
   **Convolution**
      
      Convolution must be able to hold an mxn convolution in memory with fixed size. Also, it 
      should be able to receive an image pointer and output a kernel process to another image 
      pointer.
      
   Extra Classes
      
   **MainWindow**
   
     An window (SDL or Qt) previewer to view images in a viewport.
     
   **MainGUI**
   
     An event based gui (librocket/CEGUI/Qt) to load images and interact with a convolution matrix graphically.
 
# Resources

  https://en.wikipedia.org/wiki/Kernel_(image_processing)
       
