<h1>0x0F. C - Function pointers </h1>
<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/yt8Q9jxzT_gyRAvnNkAgkw" title="Function Pointer in C" target="_blank">Function Pointer in C</a> </li>
<li><a href="/rltoken/wP-yWvo9IqbcQsywMmh_iQ" title="Pointers to functions" target="_blank">Pointers to functions</a> </li>
<li><a href="/rltoken/dAN27S1yyBPeBa8RGfvPNA" title="Function Pointers in C / C++" target="_blank">Function Pointers in C / C++</a> </li>
<li><a href="/rltoken/1vvWpH9Ux8axOLc9jPWcMw" title="why pointers to functions?" target="_blank">why pointers to functions?</a> </li>
<li><a href="/rltoken/G_0lQzs4LAd1e5tKhNMPiw" title="Everything you need to know about pointers in C" target="_blank">Everything you need to know about pointers in C</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/ITYG4BLMI4_5Unpdwue2tw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are function pointers and how to use them</li>
<li>What does a function pointer exactly hold</li>
<li>Where does a function pointer point to in the virtual memory</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>function_pointers.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h3 class="panel-title">  0. What&#39;s my name   </h3>
<p>Write a function that prints a name.</p>

<ul>
<li>Prototype: <code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>
 <h3 class="panel-title">
      1. If you spend too much time thinking about a thing, you&#39;ll never get it done
    </h3>
<p>Write a function that executes a function given as a parameter on each element of an array.</p>

<ul>
<li>Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
<li>where <code>size</code> is the size of the array</li>
<li>and <code>action</code> is a pointer to the function you need to use</li>
</ul>
 <h3 class="panel-title">
      2. To hell with circumstances; I create opportunities
    </h3>
<p>Write a function that searches for an integer.</p>

<ul>
<li>Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
<li>where <code>size</code> is the number of elements in the array <code>array</code></li>
<li><code>cmp</code> is a pointer to the function to be used to compare values</li>
<li><code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code></li>
<li>If no element matches, return <code>-1</code></li>
<li>If size &lt;= <code>0</code>, return <code>-1</code></li>
</ul>
<h3 class="panel-title">
      3. A goal is not always meant to be reached, it often serves simply as something to aim at
    </h3>
 <p>Write a program that performs simple operations.</p>

<ul>
<li>You are allowed to use the standard library</li>
<li>Usage: <code>calc num1 operator num2</code></li>
<li>You can assume <code>num1</code> and <code>num2</code> are integers, so use the <code>atoi</code> function to convert them from the string input to <code>int</code></li>
<li><code>operator</code> is one of the following:

<ul>
<li><code>+</code>: addition</li>
<li><code>-</code>: subtraction</li>
<li><code>*</code>: multiplication</li>
<li><code>/</code>: division</li>
<li><code>%</code>: modulo</li>
</ul></li>
<li>The program prints the result of the operation, followed by a new line</li>
<li>You can assume that the result of all operations can be stored in an <code>int</code></li>
<li>if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code></li>
<li>if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code></li>
<li>if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code></li>
</ul>

<p>This task requires that you create four different files.</p>

<p><strong>3-calc.h</strong></p>

<p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure:</p>
<pre><code>/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code></pre>

<p><strong>3-op_functions.c</strong></p>

<p>This file should contain the 5 following functions (not more):</p>

<ul>
<li><code>op_add</code>: returns the sum of <code>a</code> and <code>b</code>. Prototype: <code>int op_add(int a, int b);</code></li>
<li><code>op_sub</code>: returns the difference of <code>a</code> and <code>b</code>. Prototype: <code>int op_sub(int a, int b);</code></li>
<li><code>op_mul</code>: returns the product of <code>a</code> and <code>b</code>. Prototype: <code>int op_mul(int a, int b);</code></li>
<li><code>op_div</code>: returns the result of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_div(int a, int b);</code></li>
<li><code>op_mod</code>: returns the remainder of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_mod(int a, int b);</code></li>
</ul>

<p><strong>3-get_op_func.c</strong></p>

<p>This file should contain the function that selects the correct function to perform the operation asked by the user. You&rsquo;re not allowed to declare any other function.</p>

<ul>
<li>Prototype: <code>int (*get_op_func(char *s))(int, int);</code></li>
<li>where <code>s</code> is the operator passed as argument to the program</li>
<li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code>get_op_func(&quot;+&quot;)</code> should return a pointer to the function <code>op_add</code></li>
<li>You are not allowed to use <code>switch</code> statements</li>
<li>You are not allowed to use <code>for</code> or <code>do ... while</code> loops</li>
<li>You are not allowed to use <code>goto</code></li>
<li>You are not allowed to use <code>else</code></li>
<li>You are not allowed to use more than one <code>if</code> statement in your code</li>
<li>You are not allowed to use more than one <code>while</code> loop in your code</li>
<li>If <code>s</code> does not match any of the 5 expected operators (<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>, <code>%</code>), return <code>NULL</code></li>
<li>You are only allowed to declare these two variables in this function:</li>
</ul>

<pre><code>    op_t ops[] = {
        {&quot;+&quot;, op_add},
        {&quot;-&quot;, op_sub},
        {&quot;*&quot;, op_mul},
        {&quot;/&quot;, op_div},
        {&quot;%&quot;, op_mod},
        {NULL, NULL}
    };
    int i;
</code></pre>

<p><strong>3-main.c</strong></p>

<p>This file should contain your <code>main</code> function only.</p>

<ul>
<li>You are not allowed to code any other function than <code>main</code> in this file</li>
<li>You are not allowed to directly call <code>op_add</code>, <code>op_sub</code>, <code>op_mul</code>, <code>op_div</code> or <code>op_mod</code> from the <code>main</code> function</li>
<li>You have to use <code>atoi</code> to convert arguments to <code>int</code></li>
<li>You are not allowed to use any kind of loop</li>
<li>You are allowed to use a maximum of 3 <code>if</code> statements</li>
</ul>
<h3 class="panel-title">
      4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
    </h3>
<p>Write a program that prints the <a href="/rltoken/5eSu8Ohx0ddeNGmaeDo_zQ" title="opcodes" target="_blank">opcodes</a> of its own main function.</p>

<ul>
<li>Usage: <code>./main number_of_bytes</code></li>
<li>Output format:

<ul>
<li>the opcodes should be printed in hexadecimal, lowercase</li>
<li>each opcode is two char long</li>
<li>listing ends with a new line</li>
<li>see example</li>
</ul></li>
<li>You are allowed to use <code>printf</code> and <code>atoi</code></li>
<li>You have to use <code>atoi</code> to convert the argument to an <code>int</code></li>
<li>If the number of argument is not the correct one, print <code>Error</code>, followed by a new line, and exit with the status <code>1</code></li>
<li>If the number of bytes is negative, print <code>Error</code>, followed by a new line, and exit with the status <code>2</code></li>
<li>You do not have to compile with any flags</li>
</ul>
<p>Note: if you want to translate your opcodes to assembly instructions, you can use, for instance <a href="/rltoken/jUyzrqbp0AUZBdiTKdVExA" title="udcli" target="_blank">udcli</a>.</p>

<h3> End of Readme </h3>


