<h1 class="gap">0x10. C - Variadic functions</h1>
 <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/wLRJdO8pA2-Vb-rF2Y71sA" title="stdarg.h" target="_blank">stdarg.h</a> </li>
<li><a href="/rltoken/3gW8GycmyjarbJR76FkrzA" title="Variadic Functions" target="_blank">Variadic Functions</a> </li>
<li><a href="/rltoken/_RRPCY32VODyN_r2HIEnBQ" title="Const Keyword" target="_blank">Const Keyword</a> </li>
</ul>

<!-- - [C - Variable Arguments](/rltoken/qaPJ-LRiEzLvPH6-F3SqJQ) 
- [Functions with Variable Argument Lists in C using va_list](/rltoken/wEciKT_uR-d9tQHwTWfbHg) -->

<p><strong>man or help</strong>:</p>

<ul>
<li><code>stdarg</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/ibS4gLVrbsqSDUdPhq_4Vg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are variadic functions</li>
<li>How to use <code>va_start</code>, <code>va_arg</code> and <code>va_end</code> macros</li>
<li>Why and how to use the <code>const</code> type qualifier</li>
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
<li>You are allowed to use the following macros: <code>va_start</code>, <code>va_arg</code> and <code>va_end</code></li>
<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>variadic_functions.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2 class="gap">Tasks</h2>

    <div data-role="task963" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-963">
  <span id="user_id" data-id="167608"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Beauty is variable, ugliness is constant
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="167608"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the sum of all its parameters.</p>

<ul>
<li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
<li>If <code>n == 0</code>, return <code>0</code></li>
</ul>
<h3 class="panel-title">
      1. To be is to be the value of a variable
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="167608"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints numbers, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between numbers</li>
<li>and <code>n</code> is the number of integers passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If <code>separator</code> is <code>NULL</code>, don&rsquo;t print it</li>
<li>Print a new line at the end of your function</li>
</ul>

<h3 class="panel-title">
      2. One woman&#39;s constant is another woman&#39;s variable
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="167608"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints strings, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between the strings</li>
<li>and <code>n</code> is the number of strings passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If separator is NULL, don&rsquo;t print it</li>
<li>If one of the string is NULL, print <code>(nil)</code> instead</li>
<li>Print a new line at the end of your function</li>
</ul>
 <h3 class="panel-title">
      3. To be is a to be the value of a variable
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="167608"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints anything.</p>

<ul>
<li>Prototype: <code>void print_all(const char * const format, ...);</code></li>
<li>where <code>format</code> is a list of types of arguments passed to the function

<ul>
<li><code>c</code>: <code>char</code></li>
<li><code>i</code>: <code>integer</code></li>
<li><code>f</code>: <code>float</code></li>
<li><code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead</li>
<li>any other char should be ignored</li>
<li>see example</li>
</ul></li>
<li>You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code></li>
<li>You can use a maximum of

<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul></li>
<li>You can declare a maximum of <code>9</code> variables</li>
<li>You are allowed to use <code>printf</code></li>
<li>Print a new line at the end of your function</li>
</ul>
