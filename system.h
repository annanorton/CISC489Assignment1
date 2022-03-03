//SYSTEM.H

//read file input
char *fileInput(char *name) {
  
  //open file
  FILE *fileptr = fopen(name, "r");
  if (fileptr == NULL) {
    printf("Unable to open file\n");
  } else {
printf("File opened\n");
  }
  
  //make array to hold file contents
  char *contents;
  int file_size = 50; //TEMP SIZE TBD
  contents = malloc(sizeof(char) * file_size);
  if (!contents) {
    printf("Unable to allocate memory\n");
    abort();
  } else {
printf("Memory allocated for array\n");
  }
  memset(contents, ' ', sizeof(char) * file_size);
printf("Array initialized to %c", contents[0]);

  //store file contents in array
printf("File contents: \n");
  int num_chars = 0;
  while (contents[num_chars - 1] != EOF) {
    contents[num_chars] = fgetc(fileptr);
printf("%c at location %d\n", contents[num_chars], num_chars);
    num_chars++;
  } 
printf("Contents stored in array\n");
  
  //close file
  fclose(fileptr); 
printf("File closed\n");
  
  return contents;
}

//read interactive console input
char *consoleInput() {
  //make array to hold input
  char *question;
  int q_size = 50; //TEMP SIZE TBD
  question = malloc(sizeof(char) * q_size);
  if (!question) {
    printf("Unable to allocate memory\n");
    abort();
  } else {
    printf("Memory allocated for array\n");
  }
  memset(question, ' ', sizeof(char) * q_size);
  printf("Array initialized to %c", question[0]);
  
  //get input from console and assign to array
  printf("File contents: \n");
  int num_chars = 0;
  char *test = "?";
  char temp = ' ';
  while (strcmp(&question[num_chars - 1],test) != 0) {
    scanf("%c",&temp);
    printf("ONE: %c at location %d\n", temp, num_chars);
    question[num_chars] = temp;
    printf("The address holds %s", &question[num_chars]);
    printf("Compare %c and %c is %d\n", question[num_chars], *test, strcmp(&question[num_chars],test));
    printf("TWO: %c at location %d\n", question[num_chars], num_chars);
    num_chars++;
  }
  printf("Contents stored in array\n");
  
  return question;
}

