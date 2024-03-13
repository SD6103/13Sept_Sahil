## Q-1

### What are the benefits of using CSS?

=> You can write CSS once and then reuse the same sheet in multiple HTML file.

=> You can define a style for each HTML element and apply it to as many web pages as you want.

=> To make a global change, simply change the style, and all element in all the web pages will be updated automatically.

=> Now HTML attributes are being deprecated and it is being recommended to use CSS. So it’s a good to start using CSS in all the HTML pages to make them compatible with future browser.

=> The CSS offers consistent platform Independence and can support latest browser as well.

---

## Q-2

### What are the disadvantages of CSS?

=> CSS might not always look the same across different web browsers. This can lead to inconsistencies in how your website appears to users.

=> Another hurdle is the learning curves. CSS can be complex especially if you’re just starting. You need to grasp things like selectors, properties, values, and the box model, which is quite difficult as a beginner.

=> There is some security issues in CSS.

=> There is limited layout control, It can be a bit tricky without workaround or turning to other technologies like flexbox or grid.

=> Some big files can make your web pages load slowly.

=> As websites grow and evolve, maintaining and reorganizing CSS can become quite complex and time consuming.

---

## Q-3

### What is the difference between CSS2 and CSS3?

• CSS2 :

=> CSS splits up different sections of the code into modules.

=> There is no backward compatibility with CSS2.

=> With CSS2 only web safe fonts can be used.

=> CSS2 doesn’t support the border box property.

• CSS3 :

=> CSS and HTML were put into a single file, there was no concept of modules before.

=> There is backward compatibility maintained with CSS3.

=> With CSS3 special fonts can be used such as those Google Fonts and TypeCast.

=> CSS3 supports the border box property.

---

## Q-4

### Name a few CSS style components.

=> Color : Defines the color of text and backgrounds using properties like “color” and “background-color”.

=> Font components : Control the font family, size, weight, style, and spacing properties like “font-family”, “font-size”, “font-weight”, “font-style”, “line-height”, “letter-spacing”.

=> Box model : Defines the spacing and dimensions of elements using properties like “margin”, “padding”, “width”, “height”.

=> Border : Style the borders of elements using properties like “border-width”, “border-style”, “border-color” and “border-radius”.

=> Background : Specifies the background properties of elements using properties like “background-image”, “background-repeat”, “background-position”, “background-size”.

---

## Q-5

### What do you understand by CSS opacity?

=> The CSS opacity property is used to specify the transparency of an element.

=> In simple word, you can say that it specifies the clarity of the image.

=> In technical terms, Opacity is defined as degree in which light is allowed to travel through an object.

=> Opacity value defines lower than 1, for example 0.5 value of opacity means 60%.

---

## Q-6

### How can the background color of an element be changed?

=> We can change the background color of elements using “background-color” proprerty.

```

element {
	background-color : black;
}

```

---

## Q-7

### How can image repetition of the backup be controlled?

=> => We can stop repetition of background image to set background no repeat.

```

element {
    background-image : url(‘abc.jpg’);
    background-repeat : no-repeat;
}

```

---

## Q-8

### What is the use of the background-position property?

=> Using background-position property, we can set the position of background image.

=> For Ex. If we have to show image from the center position, so we can use “background-position : center;”.

```

element {
	background-image : url(‘abc.jpg’);
	background-position : center;
}

```

---

## Q-9

### Which property controls the image scroll in the background?

=> background-attachment property used to control the image scroll in background.

```

element {
	background-attachment : fixed;
}

```

=> There are many other values like

=> scroll : background image scroll with page. By default.

=> local : background image scroll with the element’s content.

---

## Q-10

### Why should background and color be used as separate properties?

=> The main difference between background and background-color is we can set image in background, but we can’t set image in background-color. Background-color only allows to set background color.
