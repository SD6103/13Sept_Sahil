## Q-1

### What is jQuery?

=> JQuery is a JavaScript library which follows write less do more approceh in programming.

=> It provides functionlality by which we can reduse the size of code and make it more clear and easy to understand.

=> It simplify the process of writing JavaScript.

---

## Q-2

### How to Apply CSS Using JQuery, How to Add Class and Remove Class in Jquery, JQuery Animation?

• CSS :

=> We can apply CSS with <q><b>css()</b></q> method which is provided by JQuery.

```
<body>
    <div class="box">hello</div>
</body>

<sctipt>
let box = $(".box").css("background", "red")
</script>
```

• Add Class :

=> We can add class to element by <q><b>addClass()</b></q> method.

```
<body>
    <div class="box">hello</div>
</body>

<sctipt>
let box = $(".box").addClass("card")
</script>
```

• Remove Class :

=> We can also remove class with removeClass() in JQuery.

```
<body>
    <div class="box card">hello</div>
</body>

<sctipt>
let box = $(".box").removeClass("card")
</script>
```

• Animation :

=> We can create some kind of animations with animation() metod in JQuery.

=> We can provide multiple values in animate() method.

```
<style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        .box {
            background-color: rgb(61, 63, 180);
            width: 200px;
            height: 200px;
        }
</style>

<div class="box"></div>

    <script>
        let box = $(".box");
        box.hover(() => {
            box.animate({
                width: '100vw',
                height: "100vh",
                opacity: "0.5",
            })
        })
    </script>
</script>
```

---
