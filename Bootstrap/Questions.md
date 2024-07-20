## Q-1

### What are the advantages of Bootstrap?

=> There are many advantages of Bootstrap :

• There are pre-defined class available, so we can use that class to build layout easily.

• Easy to create responsive design.

• There are pre-styled components available on website. so we can implement them directly.

• It's compitable with numerous browsers.

• It's save the time to create the layout.

---

## Q-2

### What is a Bootstrap Container, and how does it work?

=> There are two type of containers available in Bootstrap :

i> container :

• This container has a fixed width at each responsive breakpoints. The width depending on the size of the viewport.

• It automatically centers the content horizontally within the viewport.

```
<div class="container">
  <!-- Content -->
</div>
```

ii> container-fluid :

• This type of container covered full width of viewport.

• It's useful when we need a layout that takes up the full width of screen without any margin.

```
<div class="container-fluid">
  <!-- Content -->
</div>
```

---

## Q-3

### What are the default Bootstrap text settings?

=> Default text settings :

• font-size : 16px

• line-height : 1.5

• font-weight : 400

• font-family : "Helvetica Neue"

---

## Q-4

### What do you know about the Bootstrap Grid System?

=> Bootstrap Grid System contains containers, rows, columns.

=> It is used to align the content.

i> rows :

• Rows are horizontal groups of columns that ensure the columns are aligned properly.

```
<div class="row"></div>
```

ii> columns :

• Columns are the building blocks of the grid system.

• They are placed inside rows.

• Columns can span any number of 12 columns.

• There are breakpoints like xs, md, lg, xl, or xxl.

```
<div class="col-md-6"></div>
```

♦ Grid classes :

• '.col-{breakpoint}-{number} : This syntax specifies the number of columns to span.

• Ex :

```
<div class="row">
    <div class="col-md-4"></div>
    <div class="col-md-4"></div>
    <div class="col-md-4"></div>
</div>
```

---

## Q-5

### What is the difference between Bootstrap 4 and Bootstrap 5

• Bootstrap 4 :

=> Does not include responsive font sizes by default.

=> Uses basic grid system with fewer breakpoints.

=> limited use of CSS variables.

=> Has no built in icon library.

• Bootstrap 5 :

=> Introduce responsive font size by default.

=> Adds new breakpoint XXL >= 1400px for more larger screens.

=> Extend use of CSs variable and add themeing capabilites.

=> Introduce it's own SVG library.

---

## Q-6

### What is a Button Group, and what is the class for a basic Button Group?

=> Button group is the component that allows to group multiple button on a single line.

=> Button group essure that buttons are evenly spaced and aligned.

=> We can use .btn-group class to grouping the multiple buttons.

```
 <div class="btn-group">
      <button type="button" class="btn btn-primary">Primary</button>
      <button type="button" class="btn btn-danger">Danger</button>
      <button type="button" class="btn btn-success">Success</button>
</div>
```

---

## Q-7

### How can you use Bootstrap to make thumbnails?

=> Bootstrap provides a class called ".img-thumbnail", which allowing you to display image or video in grid layout.

=> The ".img-thumbnail" class is used to give images rounded 1px border appearance.

```
<div class="img-div">
    <img src="example.jpg" class="img-thumbnail" alt="Thumbnail">
</div>
```

---

## Q-8

### In Bootstrap 4, what is flexbox?

=> In Bootstrap 4, flexbox is the layout model that provides a more efficient way to layout, align and distribute space among items in a container.

=> Key features of flexbox in bootstrap 4 :

• Direction : control tje direction in which items are placed in the flex container.

• Alignmnemt : Align items within the flex container align both the main axis and cross axis.

• Order : Chanfe the visual order of items without changing their source order.

i> Display flex :

=> ".d-flex" : applies "display: flex" to the element.

=> ".d-inline" : Applies "display: inline-flex" to the element.

ii> Direction :

=> .flex-row: Sets the flex direction to row.

=> flex-row-reverse: Sets the flex direction to row-reverse.

=>.flex-column: Sets the flex direction to column.

=>.flex-column-reverse: Sets the flex direction to column-reverse.

iii> Justify Content :

=> .justify-content-start: Aligns items to the start of the container.

=> .justify-content-end: Aligns items to the end of the container.

=> .justify-content-center: Centers items in the container.

=> .justify-content-between: Distributes items evenly with space between.

=> .justify-content-around: Distributes items evenly with space around.

=> .justify-content-evenly: Distributes items evenly with equal space around them.

iv> Align Items :

=> .align-items-start: Aligns items to the start of the container.

=> .align-items-end: Aligns items to the end of the container.

=> .align-items-center: Centers items in the container.

=> .align-items-baseline: Aligns items along the container’s baseline.

=> .align-items-stretch: Stretches items to fill the container.

=> Ex :

```
<div class="row d-flex justify-content-center align-items-center">
    <div class="col-3"></div>
    <div class="col-3"></div>
    <div class="col-3"></div>
</div>
```

---

## Q-9

### How can one create an alert in Bootstrap?

=> Thanks to pre-defined classes in Bootstrap to create alert.

=> To create basic alert, use the ".alert" clas along with one of the pre-defined classes : ".alert-primary", ".alert-secondary", ".alert-success", ".alert-danger", ".alert-warning", ".alert-info", ".alert-light", ".alert-dark".

---

## Q-10

### What is a bootstrap card and how would you create one?

=> Boostrap card is a flexible and extensibel content container that canbe to display a variety of content, such as text, images, and links.

=> Cards are built using Bootstrap's ".card" class and offer a way to create modular and responsive content sections.

=> Structure of Boostrap Card :

• ".card" : The main container for the card.

• ".card-body" : The content area of the card.

• ".card-title" : The title of card.

• ".card-text" : The content within the card.

• ".card-img-top" : Optional image at the top of the card.

```
<div class="card">
    <img src="example.jpg" class="card-img-top">
    <div class="card-body">
        <div class="card-title">Card Title</div>
        <div class="card-text">Some Example of card text</div>
        <a herf="#" class="btn btn-primary">Know More</a>
    </div>
</div>
```
