rdf_encoding
============

test code for Large-scale RDF data encoding using X10

1, To improve the system I/O over disk, a small library based on zlib has been built and integrated in the x10 code 
   via the foreign function interface, so please install zlib (http://www.zlib.net/) at first.

2, How to run the test codes:
    (a), divide triples into chunks and compress them in the form of .gz
    (b), assign the input path by changing the line 221, and output path at line 367
    (c), compile the encoding.x10 code using the commond: x10c++ -O -NO_CHECKS -o encode encoding.x10 -post '# -lz'

3, How to set the enviorment of x10, please refer to http://x10-lang.org/.

4, If any questions, please email to lcheng(at)eeng.nuim.ie
