

int id = (y*width+x)*3;
R=(oR+R-x+y)/100.0+pixels[id+3%(width*height*3)];
B=B+((R-B)/100.0);
G=G+((B-G)/100.0);
