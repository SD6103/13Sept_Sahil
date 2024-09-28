## Q-1

### What is React Js?

=> React JS is a library of the JavaScript.
=> React JS developed by facebook.
=> React JS is used to build websites and web application.
=> React JS is component based library.

---

## Q-2

### What is NPM in React Js?

=> NPM stands for Node Package Manager.
=> It's a package manager for the JavaScript, primarily used to manage dependencies in Node.js.

---

## Q-3

### What is Role of Node Js in react Js?

=> Node JS plays important role in the React Application.
=> Node works as a development environment for the React JS.
=> Node comes with NPM which helps to install dependancies required by a react application.
=> Node.js can be used to serve the final build of a React application in production.

---

## Q-4

### What is CLI command In React Js?

=> There are many CLI commands in the React JS mentioned some of them below :

► To create a React App :
-> npx create-react-app [app-name]

► show the list libraries of react :
-> npm list react

► version of react :
-> npm view react version

► Run react app :
-> npm start

---

## Q-5

### What is Components in React Js?

=> A component is essentially a piece of the User Interface (UI) that can be reuse with other components to build complex UIs.
=> Basically, Component are HTML Elements, which can be used in the JSX file to create UI design which called React Components.
=> React Components have their own sturcture, style and behavior.
=> Components are render inside of fragments.
=> There are 2 types of components in React JS :

• Class based components :
► syntax :

```
class <className> extends Components {
    render() {
        return (
            <>
            statements;
            </>
        )
    }
}
```

• Functional Components :
► Syntax :

```
function <componentsName> () {
    return (
        <>
        Statemtens;
        </>
    )
}

```

---

## Q-6

### What is Header and Content Components in React Js?

=> Header and Content Components represent specific section of the web page or application layout.
=> This components are used to organize the stucture and making code more easiar to manage.

• Header Component :
=> Generally, Header Component contains logo, navbar, search bar and other elements that mean to appear in the top of the webpage or applcation.
=> Ex :

```

function Header() {
return (

<header>
<nav>
<ul>
<li><a href="#home">Home</a></li>
<li><a href="#about">About</a></li>
<li><a href="#contact">Contact</a></li>
</ul>
</nav>
</header>
);
}

```

• Content Component :
=> Content Component represents the main area of the webapge where the primary content is displayed.
=> This could include text, images, forms and many other elements that makes body of the webapge.

Ex :

```

function Content() {
return (

<main>
<h1>Welcome to Our Website</h1>
<p>This is the main content area where information about the site is displayed.</p>
</main>
);
}

```

---

## Q-7

### How to install React Js on Windows, Linux Operating System? How to Install NPM and How to check version of NPM?

=> install NPM on Windows, Linux OS :

► Download Node.js :
→ Go to the Node.js Official website.
→ Download the LTS version.

► Install Node.js
→ Run the downloaded installer.
→ The installer intall both Node and NPM in your OS.

► Check the version of NPM :
→ <b>npm -v</b>

► Check the version of the Node JS :
→ <b>node -v</b>

=> Install React JS :

► Create React App :
→ npx create-react-app [app-name]

► Run the app :
→ npm start

---

## Q-8

### How to check version of React Js?

=> Check the version of React JS:

► Using command :
→ npm list react

► Cheack from the Package.json file :
→ Open package.json file.
→ Look for the 'dependancies' section.
→ There is listed the version of React JS.

---

```

```

```

```
