/*
 *  This file is part of the RDF Encoding test code.
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 */

#include <x10aux/config.h>
#include <x10aux/alloc.h>
#include <x10aux/class_cast.h>
#include <x10aux/serialization.h>
#include <x10aux/basic_functions.h>
#include <x10aux/throw.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/lang/StringIndexOutOfBoundsException.h>
#include <x10/array/Array.h>
#include <cstdarg>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include "zlib.h"
#include "zconf.h"
using namespace std;
using namespace x10::lang;
using namespace x10aux;

bool gzipInflate( const std::string& compressedBytes, std::string& uncompressedBytes );
void loadBinaryFile( const char* filename, std::string& contents );
String* gzRead(const char* file);
