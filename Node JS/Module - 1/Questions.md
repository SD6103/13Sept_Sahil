b## Q-1

### What is Node.js? Where can you use it?

=> Node.js is an open-source, cross-platform runtime environment that allows you to run JavaScript code on the server side.

=> It uses the V8 JavaScript engine, which is also used by Google Chrome, to execute code efficiently.

► Use of Node JS :

=> Node.js is used for building backend services or APIs for web applications.

=> Node.js is frequently used to build RESTful APIs and backend services in microservice architectures.

=> When paired with front-end frameworks like React or Angular, Node.js is used to serve data to SPAs (Single Page Applications), which require real-time updates and performance optimization.

=> Node.js can be used to create efficient and fast command-line applications because of its speed and versatility.

=> You can use Node.js for scripting tasks like file management, automation, or even for building developer tools.

---

## Q-2

### Explain callback in Node.js.

=> Callback is a special type of function which is passed as an argument of another function.

=> It is executed after the completion of the asynchronous operations within that function.

=> It is help to handle an asynchronous tasks in like reading files, HTTP requests wihtout blocking the execution of rest of the code.

► Example :

```
console.log("start");

setTimeout(()=>{
    console.log("callback function");
}, 2000);

console.log("end");
```

=> In this function fist execute start then end and after 2000ms callback function execute.

---

## Q-3

### What are the advantages of using promises instead of callbacks?

► Prevent Callback Hell :
=> We can prevent nested callback (callback hell) situation using promise.

► Improve Readabilty :
=> With promise, we can avoid the indentation issue caused by multi levels of callbacks, making code ore readble and maintainable.

=> Ex. of nested hell (callback hell) :

```
somthing(()=>{
    somthinelse(()=>{
        thirdelse(()=>{
            console.log("Done");
        })
    })
})
```

► Ex. of promise :

```
somthing()
    .then(res=> dosomething(res))
    .then(newRes => console.log(res));
```

► Better error handling :
=> In callbacks we need to handle every level of errors, but with the promise, we can use a single .catch() block at the end of the chain to handle an error.

=> Ex. of callback :

```
doSomething((err, result) => {
    if (err) {
        console.error(err);
    } else {
        doSomethingElse(result, (err, newResult) => {
            if (err) {
                console.error(err);
            } else {
                console.log("Done");
            }
        });
    }
});
```

► Ex. of promise :

```
doSomething()
    .then(result => doSomethingElse(result))
    .then(newResult => doThirdThing(newResult))
    .then(finalResult => console.log("done"))
    .catch(error => console.error('Error:', error));
```

## Q-3

### What is NPM?

=> NPM stands for Node Package Manager.

=> It's used to manage packages and libraries.

► Use of NPM :

=> You can install third-party libraries like Express, React, or Lodash, which are available in the NPM registry.

=> NPM ensures all your project’s dependencies are installed, whether you’re working on a small project or a complex app.

=> Developers can share their code by publishing their own packages to the NPM registry.

► Commands of NPM :

• <b>npm init</b>: Initializes a new project by creating a package.json file.

• <b>npm install (or npm i) </b>: Installs dependencies listed in the package.json file or installs a specific package.

• npm -v : It's provides the version of NPM.

---

## Q-4

### What are the modules in Node.js? Explain

=> In Node.js, modules are individual units of functionality or code that can be loaded and reused in other parts of an application.

=> Node.js follows a modular architecture, where each file is treated as a separate module.

=> This modular system helps in organizing code, improving reusability, and promoting maintainability.

► Types of Modules:

• Core Modules: Built-in modules provided by Node.js.

• Local Modules: Custom modules created by developers within their applications.

• Third-party Modules: External modules installed via NPM.

► Some popular core module :

• fs (File System): Handles file operations (e.g., reading/writing files).

• http: Used to create web servers and handle HTTP requests.

• path: Provides utilities for working with file and directory paths.

• os: Provides information about the operating system.
