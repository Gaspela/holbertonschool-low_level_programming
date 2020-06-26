<h1 class="gap">0x0C. C - More malloc, free</h1>
<article id="description" class="gap formatted-content">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/xRakq81EUvl-3QG_3QUC8A" title="Do I cast the result of malloc?" target="_blank">Do I cast the result of malloc?</a> </li>
<li><a href="/rltoken/EtTOoIezIdtjFOZX5YO7-g" title="Automatic and dynamic allocation, malloc and free" target="_blank">Automatic and dynamic allocation, malloc and free</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>exit (3)</code></li>
<li><code>calloc</code></li>
<li><code>realloc</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/nyIx2a1_Uam3jaNoIi6lKQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use the <code>exit</code> function</li>
<li>What are the functions <code>calloc</code> and <code>realloc</code> from the standard library and how to use them</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code> </li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>holberton.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>

  </article>

## Author
* **Samir millan** - [Gaspela04](https://github.com/Gaspela04)
