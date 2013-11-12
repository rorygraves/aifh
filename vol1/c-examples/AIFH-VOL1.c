/*
 * Artificial Intelligence for Humans
 * Volume 1: Fundamental Algorithms
 * C/C++ Version
 * http://www.aifh.org
 * http://www.jeffheaton.com
 *
 * Code repository:
 * https://github.com/jeffheaton/aifh

 * Copyright 2013 by Jeff Heaton
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * For more information on Heaton Research copyrights, licenses
 * and trademarks visit:
 * http://www.heatonresearch.com/copyright
 */
#include "aifh-vol1-examples.h"

int main(int argc, char* argv[])
{
	int i;
	int pause = 0;
	int success = 0;

	for(i=1;i<argc;i++) {
		if( *argv[i]=='-' ) {
			if( strcasecmp(argv[i],"-pause") == 0) {
				pause = 1;
			} else {
				printf("Unknown option: %s",argv[i]);
			}
		}
		else {
			if( strcasecmp(argv[i],"readcsv") == 0 ) {
				success = 1;
				ExampleReadCSV(i+1,argc,argv);
			}
		}
	}

	if( !success ) {
		printf("Usage:\n%s [-pause] ExampleName [arg1] [args2] ...\n",argv[0]);
		printf("\nWhere ExampleName is one of:\n");
		printf("**Chapter 1**\n");
		printf("readcsv - Read the contents of a CSV file\n");
	}

	if( pause ) {
		printf("[Press Any Key to Exit]");
		getchar();
	}

	return 0;
}

