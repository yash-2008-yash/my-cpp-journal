# C++ Precedence and Associativity Table

<table>
  <tr><th>Precedence</th><th>Operator</th><th>Description</th><th>Associativity</th></tr>

  <tr><td>1</td><td><code>::</code></td><td>Scope Resolution</td><td>Left to Right</td></tr>

  <tr>
    <td rowspan="8">2</td>
    <td><code>a++</code></td><td>Suffix/postfix increment</td>
    <td rowspan="8">Left to Right</td>
  </tr>
  <tr><td><code>a--</code></td><td>Suffix/postfix decrement</td></tr>
  <tr><td><code>type( )</code></td><td>Function cast</td></tr>
  <tr><td><code>type{ }</code></td><td>Function cast</td></tr>
  <tr><td><code>a( )</code></td><td>Function call</td></tr>
  <tr><td><code>a[ ]</code></td><td>Subscript</td></tr>
  <tr><td>.</td><td>Member access from an object</td></tr>
  <tr><td><code>-></code></td><td>Member access from object ptr</td></tr>

  <tr>
    <td rowspan="13">3</td>
    <td><code>++a</code></td><td>Prefix increment</td>
    <td rowspan="13">Right to Left</td>
  </tr>
  <tr><td><code>--a</code></td><td>Prefix decrement</td></tr>
  <tr><td><code>+a</code></td><td>Unary plus</td></tr>
  <tr><td><code>-a</code></td><td>Unary minus</td></tr>
  <tr><td>!</td><td>Logical NOT</td></tr>
  <tr><td>~</td><td>Bitwise NOT</td></tr>
  <tr><td>(type)</td><td>C style cast</td></tr>
  <tr><td><code>*a</code></td><td>Indirection (dereference)</td></tr>
  <tr><td><code>&a</code></td><td>Address-of</td></tr>
  <tr><td>sizeof</td><td>Size-of</td></tr>
  <tr><td>co_await</td><td>await-expression</td></tr>
  <tr><td>new, new[ ]</td><td>Dynamic memory allocation</td></tr>
  <tr><td>delete, delete[ ]</td><td>Dynamic memory deallocation</td></tr>

  <tr>
    <td rowspan="2">4</td>
    <td><code>.*</code></td><td>Member object selector</td>
    <td rowspan="2">Left to Right</td>
  </tr>
  <tr><td><code>->*</code></td><td>Member pointer selector</td></tr>

  <tr>
    <td rowspan="3">5</td>
    <td><code>a * b</code></td><td>Multiplication</td>
    <td rowspan="3">Left to Right</td>
  </tr>
  <tr><td><code>a / b</code></td><td>Division</td></tr>
  <tr><td><code>a % b</code></td><td>Modulus</td></tr>

  <tr>
    <td rowspan="2">6</td>
    <td><code>a + b</code></td><td>Addition</td>
    <td rowspan="2">Left to Right</td>
  </tr>
  <tr><td><code>a - b</code></td><td>Subtraction</td></tr>

  <tr>
    <td rowspan="2">7</td>
    <td><code><<</code></td><td>Bitwise left shift</td>
    <td rowspan="2">Left to Right</td>
  </tr>
  <tr><td><code>>></code></td><td>Bitwise right shift</td></tr>

  <tr><td>8</td><td><code><=></code></td><td>Three-way comparison operator</td><td>Left to Right</td></tr>

  <tr>
    <td rowspan="4">9</td>
    <td><code><</code></td><td>Less than</td>
    <td rowspan="4">Left to Right</td>
  </tr>
  <tr><td><code><=</code></td><td>Less than or equal to</td></tr>
  <tr><td><code>></code></td><td>Greater than</td></tr>
  <tr><td><code>>=</code></td><td>Greater than or equal to</td></tr>

  <tr>
    <td rowspan="2">10</td>
    <td><code>==</code></td><td>Equal to</td>
    <td rowspan="2">Left to Right</td>
  </tr>
  <tr><td><code>!=</code></td><td>Not equal to</td></tr>

  <tr><td>11</td><td>&</td><td>Bitwise AND</td><td>Left to Right</td></tr>
  <tr><td>12</td><td>^</td><td>Bitwise XOR</td><td>Left to Right</td></tr>
  <tr><td>13</td><td>|</td><td>Bitwise OR</td><td>Left to Right</td></tr>
  <tr><td>14</td><td>&&</td><td>Logical AND</td><td>Left to Right</td></tr>
  <tr><td>15</td><td>||</td><td>Logical OR</td><td>Left to Right</td></tr>

  <tr>
    <td rowspan="14">16</td>
    <td><code>a ? b : c</code></td><td>Ternary Conditional</td>
    <td rowspan="14">Right to Left</td>
  </tr>
  <tr><td>throw</td><td>throw operator</td></tr>
  <tr><td>co_yield</td><td>yield expression (C++20)</td></tr>
  <tr><td>=</td><td>Assignment</td></tr>
  <tr><td>+=</td><td>Addition Assignment</td></tr>
  <tr><td>-=</td><td>Subtraction Assignment</td></tr>
  <tr><td>*=</td><td>Multiplication Assignment</td></tr>
  <tr><td>/=</td><td>Division Assignment</td></tr>
  <tr><td>%=</td><td>Modulus Assignment</td></tr>
  <tr><td><<=</td><td>Bitwise Shift Left Assignment</td></tr>
  <tr><td>>>=</td><td>Bitwise Shift Right Assignment</td></tr>
  <tr><td>&=</td><td>Bitwise AND Assignment</td></tr>
  <tr><td>^=</td><td>Bitwise XOR Assignment</td></tr>
  <tr><td>|=</td><td>Bitwise OR Assignment</td></tr>

  <tr><td>17</td><td>,</td><td>Comma operator</td><td>Left to Right</td></tr>

</table>