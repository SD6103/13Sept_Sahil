## Q-1

### What will be the result for these expressions?

1. 5 > 4 => True
   <br>

2. "apple" > "pineapple" => False
   <br>

3. "2" > "12" => True
   • Because in JS string comparison done by the unicode values unicode value of 2 is 50 and value of 1 is 49, so 50 is greater than 49.
   <br>

4. undefined == null => True
   • It's a loose comparison, so JS first convert both operands in the same datatype and then perform the oparation.
   <br>

5. undefined === null => False
   • It's a strict comparison, this comparison checks both same datatype and same value.
   <br>

6. null == "\n0\n" => False
   <br>

7. null === +"\n0\n" => False
   • In this case + oparator convert this ("\n0\n") string into 0, and we applied strict comparison, null is not equal to 0, so it's false.

---

## Q-2

### Will alert be shown?

<b>if ("0") { alert( 'Hello'); }</b>

=> Yes, Alert will be shown in this case, Because we put 0 in String, it means string has a value, that's why its true and will be show an Alert.

---

## Q-3

### What is the code below going to output? alert( null || 2 || undefined );

=> It will give 2 in alert box, because null and undefined are falsy value and the rule of OR operator is it any condition true the it returns True.

---

## Q-4

### What is JSON

=> JSON stands for JavaScript Object Notation

=> It is lightweight data interchange format that is easy for human to read and write and easy to parse and generate for the machine.

=> JSON is mainly string representation of javascript object and user to store data in hierarchical order.

---

## Q-5

### What is promises

=> Promise object represent the eventual completion or failure of an ansynchronous operation.

=> In simple words, promise means the operation is stored in execution queue but that operation will be complete in future.

=> Promise has three states :

1> pending : initial stage.

2> fulfilled : means that operation was completed successfully.

3> rejected : means that the operation failed.

---

## Q-6

### What is JavaScript Output method?

=> Output methods are used to display data or infomation to the user or developer

=> There are some output methods :

i> console.log()
ii> document.write()
iii> alert()
iv> innerHTML
v> prompt

---

## Q-7

### How to used JavaScript Output method?

i> console.log() :

```
console.log("hello")
```

ii> document.write() :

```
document.write("Hello")
```

iii> alert() :

```
alert("Hello");
```

iv> innerHTML :

```
document.querySelector("div").innerHTML = "Hello"
```

v> promt :

```
promt("How Are You?");
```
