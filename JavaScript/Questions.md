## Q-1

### What is JavaScript. How to use it?

=> JavaScript is a Client Side Scripting Language.

=> JavaScript is highly useful in many fields like Web development, Desktop Application, Mobile Application, Game Development etc.

=> It is used with html css and using this we can create dynamic content.

=> It is use to give the any kind of funcationality to webpage.

---

## Q-2

### How many type of Variable in JavaScript?

=> There are 3 type of variables :

• Var :

-> It is a global declaration of variable.

-> We can use it anywhere in the program.

-> We can change the value of variable at run time.

-> It's Mutable.

• Let :

-> It is a local declaration of variable.

-> We can use it anywhere in the block.

-> It is Mutable, we can change the value of variable at run time.

• Const :

-> It is also local declaration of variable.

-> We can also use it anywhere in the block of program.

-> But we can't change value of variable, It is Unmutable.

---

## Q-3

### Define a Data Types in js?

=> There are major 2 types of data types in JS.

i) Primitive Data type :

=> Primitive data type contains Numbers, String, Boolean, Null, Undefined

• Number : It is used to store numbers in variable.

```
a = 10;
b = 20;
```

• String : It is used to store multiple characters in one variable.

```
a = "abc";
```

• Boolean : It returns true or false.

• Null : It represent the absence of value.

• Undefined : It is a value that automatically assign to variable.

ii) Non-Primitive Data Type :

=> Non-Primitive data type contains object.

=> Object is used to store multiple values of different type.

```
a = {
    name : "abc",
    age : 20
}
```

---

## Q-4

### What the deference between undefined and undeclare in JavaScript?

=> Undefined means we doesn't assign a value to variable.

=> Ex. : let a; , let b;

=> Undeclare means we doesn't declare variable and we're going to use it.

=> Ex. : We are using variable a but we doesn't declare it then code gives error of declaration.

---

## Q-5

### What is Condition Statement?

=> Conditon statemnts are used to control the execution of code.

=> We can control the flow of code using condition statements.

=> If we have to check the condition in code, then we can use conditonal statements.

=> There are major 4 conditional statement :

i) if statement :

```
if(age > 18) {
    console.log("valid to get driving license");
}
```

ii) if else statement :

```
if(age > 18) {
    console.log("valid to get driving license");
} else {
    console.log("NOT valid to get driving license");
}
```

iii) if else-if else statement :

```
if(age > 16) {
    console.log("valid to get learning license");
}
else if(age > 18) {
    console.log("valid to get driving license");
}
else {
    console.log("NOT valid to get driving license");
}
```

iv) Nested If :

```
if(condition) {
    if(condition) {
        // code...
    }
}
else {
    // code...
}
```

---

## Q-6

### What is the result of the expression (5 > 3 && 2 < 4)?

=> The reuslt of expression is TRUE, because 5 is greater than 3 and 2 is lower than 4 so this condition is true.

---

## Q-7

### What is the result of the expression (true && 1 && "hello")?

=> It's returns Hello, because all values are truthy values.

- true is truthy, 1 means true that's why truthy value and "Hello" is a string that is not null that's why it's also truthy value.

- As the rule of && operator if all values are true than returns last value.

---

## Q-8

### What is the result of the expression true && false || false && true?

=> It returns false.

=> Explaination :

- first true && false : as the rule of && operator if any one condition becomes false than it's return false.

- second false && true : as the same as above.

- so now it's false || false, in last rule of || operator if all conditions becomes false than it's return false.

=> That's why it's return false.

## Q-9

### What is a Loop and Switch Case in JavaScript define that ?

• Loop :

=> Loop is defined as execute some part of code again and again until condition of loop return false.

=> There are mainly 3 loops :

i) for loop :

```
for(assignment; condition; incement / decrement) {
    // code...
}
```

ii) while loop :

```
assingment
while(condition) {
    // code...
    increment / decrement
}
```

iii) do..while loop :

```
assingment
do {
    // code...
    increment / decrement
} whie(condition);
```

• Switch Case :

=> Switch case is used instead of if else if ladder.

=> It's execute each case, if any case returns true than swtich will be break, otherwise execute default block code.

```
swtich(condition) {
    case 1:
        // code...
        break;

    case 2:
        // code...
        break;

    default:
        // code...
        break;
}
```

---

## Q-10

### What is the use of is Nan function?

=> NaN stands Not a Number.

=> isNaN function is used to check value is number or not.

=> It returns true when value is not a number.

=> It returns false when value is Number.

```
isNaN("hi"); // It returns true because value is string.

isNaN(10); // It returns false because value is Number.
```

---

## Q-11

### What is the difference between && and || in JavaScript?

• && operator :

=> It's used with conditional statement and loops.

=> It's used with multiple conditions.

=> If both conditions are true then it'll returns TRUE.

• || operator :

=> It's also used with conditional statement and loops.

=> It's used with multiple conditions.

=> If any one condition becomes true then it'll returns TRUE.

---

## Q-12

### What is the use of Void (0)?

=> Void (0) returns undefined.

=> It is used when we have to set anything undefined or return undfined.

---

## Q-13

### What are the looping structures in JavaScript? Any one Example?

=> Loop is defined as execute some part of code again and again until condition of loop return false.

=> There are mainly 3 loops :

i) for loop :

```
for(assignment; condition; incement / decrement) {
    // code...
}
```

ii) while loop :

```
assingment
while(condition) {
    // code...
    increment / decrement
}
```

iii) do..while loop :

```
assingment
do {
    // code...
    increment / decrement
} whie(condition);
```

=> Example of Loop :

```
for(let i = 0; i<10; i++) {
    console.log(i);
}
```

---

## Q-14

### What is the drawback of declaring methods directly in JavaScript objects?

=> The main drawback of declaring function directly in javascript object is you can't access function directly by calling it.

=> if you have to use function then you must have to call that function by object.

=> For Ex. : I have a function in an object, now I have to access that function so I can't access it by calling that function directly, I have to call it by object.

```
obj = {
    function print() {
        // code...
    }
}

console.log(obj.print())
```

---

## Q-15

### How many type of JS Event? How to use it ?

=> There are many type of events in JavaScript some of them are listed below :

- click : Triggered when element clicked.

- dblclick : Triggered when element double clicked.

- mouseover : Triggered when mouse pointer move over the element.

- mouseout : Triggered when mouse pointer move out the element.

- keydown : Triggered when key is pressed.

- keyup : Triggered when key released.

- submit : Triggered when form is submitted.

- change : Triggered when the value of input element changes.

---

## Q-16

### What is Bom vs Dom in JS?

• DOM :

=> Document Object Model.

=> It focuses on the structure of the displayed document.

=> It's allows to access and modify the element and content of an HTML or XML document.

=> When an HTML document loaded in the browser then is becomes a document object.

• BOM :

=> Browser Object Model.

=> It focuses in browser functionality.

=> It allows to javascript to interect with browser.

=> The window object will be created by browser.

---

## Q-17

### Array vs object defences in JS?

=> Array and object are both same but in some scenario both makes difference.

=> The main difference between array and object is We can't give key value to array.

=> In array we are store only value, where in object we are store value as well as key property of value that makes sense in reading and understanding.

=> We use square brackets [] to store value in array.

=> We use curly brackets {} to store value in object.

=> Ex :

• Array :

```
let arr = [10,20,30,40,50,"abc","xyz"]
```

• Object :

```
let obj = {
    name : "abc",
    age : 20,
    city : "xyz",
}
```

---

## Q-18

### What is negative Infinity?

=> It is a special value that behaves according to the rules of mathematical infinity, but in the negative direction.

---

## Q-19

### Which company developed JavaScript?

=> JavaScript was developed by Netscape Communications.

---

## Q-20

### What is === operator?

=> === is comparision operator.

=> It's compare values as well as the type of values.

=> If values are same but types are not same then it returns false.

```
a = 10;
b = "10";

if(a === b)  // It returns false
```

---

## Q-21

### How can the style/class of an element be changed?

=> We can directly modify the style of an element by using style function in JS.

=> Ex :

```
<div id="ele">Hello World</div>

 <script>
      const ele = document.querySelector('#ele');
      ele.style.color = 'red';
      ele.style.fontSize = '30px';
  </script>
```

---

## Q-22

### How can you convert the string of any base to an integer in JavaScript?

=> There are many way to convert string to integer some of them are listed below :

i) Using Number function :

```
let str = "10";
let num = Number(str)
```

ii) Using parseInt() :

```
let str = "10"
let num = parseInt(str)
```

iii) Using Unary Plus (+) :

```
let str = "10";
let num = +str;
```

---

## Q-23

### What is the function of the delete operator?

=> Delete operator is used to delete property from the object.

```
obj = {
    name :"abc",
    age : 20
}
delete obj.age;
```

## Q-24

### What are all the types of Pop up boxes available in JavaScript?

=> There are 3 types of Pop up boxes in JavaScript.

i) Alert Box :

=> Alert box is used to give any kind of alert or message.

```
alert("Message");
```

ii) Confirm Box :

=> Confirm Box is used to get verify or accept from the user.

```
if(confirm("Press OK") {
    console.log("You Pressed OK")
}
else {
    console.log("You Pressed Cancel")
})
```

iii) Prompt Box :

=> Prompt box is used to provide prompt that contains input field for user to input something.

```
prompt("Please enter your name");
```

---

## Q-25

### How can a page be forced to load another page in JavaScript?

=> We can use window.location.href property to redirect another page.

```
window.location.href = "URL";
```

---

## Q-26

### What are the disadvantages of using innerHTML in JavaScript?

=> There are some disadvantage of innerHTML :

- innerHTML is very slow

- Appending to innerHTML is not supported

- Cyber security concerns
