# M19G Internship task

The project is based on compiling a cpp file into javascript file, and then using the compiled js file in HTML for invoking the methods written in cpp file.

[Live Demo](https://prtk418.github.io/emscipten_proj)

## The repository consists of two branches

* master
* gh-pages 

The master branch consists of core files required to build a compiled javascript file , and gh-pages branch consists of files required to host the live demo.

### Build process

Run the below commands ( For Linux ):
```
git clone git@github.com:prtk418/emscipten_proj.git
cd emscripten_proj
bash build.sh
```

Now run a server by using the below command
```
python2 -m SimpleHTTPServer 8000
```

> Hop on to http://localhost:8000/ now