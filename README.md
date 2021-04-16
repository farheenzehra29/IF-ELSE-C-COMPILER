# IF-ELSE-C-COMPILER
# 1. Phase 1 Lex Analysis
- Token Generation (Done) 
- Convert input stream to valid datatypes (Done)
- Remove Comments (Done)
- Record Lexemes (Done)
- Skip Whitespaces (Done)
- Identify Keywords (Done)
- Lexical Errors (Done)
- Line Numbers  (Done)
- Symbol Table (Done)

# 2. Phase 2 Syntax Analysis
- Abstract Syntax Tree Construction (Done)

- Arrays/Pointers definition (Done)
- Array usage if statements (Done)
- Array access using subscripts (Done)
- Arithmetic Expressions (Done)
- Define if  (Done)
- use yyloc to print the error tokens (Done)
- Synatx Validation(Error Handing and Error Recovery) Panic Mode and Phrase level error recovery (Done)

# 3. Phase 3 Semantic Analysis
- Type Checking, Errors in expressions (Done)
- Evaluate if (Done)
- Evaluate if-else block (Done)
- Modify Symbol Table based on Scope (Done)
- Evaluate Complex Expressions with Parenthesis (Done)

# 4. Phase 4 Intermediate Code Generation
- Generate three address code (Done)
- Quadruple format (Done) 
- Insert Temporaries to Symbol Table (Done)

# 5. Phase 5 Intermediate Code Optimization
- Eliminate dead code (Done)
- Constant Folding (Done)
- Constant Propagation (Done)
- Strength Reduction (Done)

# To Run The Code
Place all files in the same directory.
flex -l proj.l
yacc -vd icg.y
gcc lex.yy.c y.tab.c -lm -ll
./a.out
Here proj.l is the lexical analyzer, yacc -vd icg.y runs icg.y written in YACC and -d creates y.tab.h and -v creates y.output (debugger for parser). 
The gcc is used for the compilation of the C code. The executable file(./a.out) is run to get the desired output.

