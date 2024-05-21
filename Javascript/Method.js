// Method 1: Output to console
function consoleLogExample() {
    console.log("Hello, World!");
}

// Method 2: Read from console
function promptExample() {
    var name = prompt("Enter your name:");
    console.log("Hello, " + name);
}

// Method 3: Alert dialog
function alertExample() {
    alert("This is an alert!");
}

// Method 4: Check if element exists
function getElementByIdExample() {
    var element = document.getElementById("exampleElement");
    if (element) {
        console.log("Element exists!");
    } else {
        console.log("Element does not exist!");
    }
}

// Method 5: Set innerHTML of element
function setInnerHTMLExample() {
    var element = document.getElementById("exampleElement");
    if (element) {
        element.innerHTML = "This is new content.";
    } else {
        console.log("Element does not exist!");
    }
}

// Method 6: Get element by class name
function getElementsByClassNameExample() {
    var elements = document.getElementsByClassName("exampleClass");
    console.log("Number of elements with class 'exampleClass':", elements.length);
}

// Method 7: Create element
function createElementExample() {
    var newElement = document.createElement("div");
    newElement.innerHTML = "This is a new element.";
    document.body.appendChild(newElement);
}

// Method 8: Math operations
function mathExample() {
    var num = Math.sqrt(16);
    console.log("Square root of 16:", num);
}

// Method 9: Generate random number
function randomExample() {
    var num = Math.floor(Math.random() * 100) + 1;
    console.log("Random number between 1 and 100:", num);
}

// Method 10: Get current date and time
function dateTimeExample() {
    var now = new Date();
    console.log("Current date and time:", now);
}

// Method 11: String operations
function stringExample() {
    var str = "Hello, World!";
    console.log("Length of string:", str.length);
    console.log("Uppercase:", str.toUpperCase());
    console.log("Lowercase:", str.toLowerCase());
    console.log("Substring:", str.substring(0, 5));
}

// Method 12: JSON parsing
function jsonExample() {
    var jsonString = '{"name": "John", "age": 30}';
    var jsonObject = JSON.parse(jsonString);
    console.log("Parsed JSON object:", jsonObject);
}

// Method 13: AJAX request
function ajaxExample() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            console.log("Response:", this.responseText);
        }
    };
    xhttp.open("GET", "example.txt", true);
    xhttp.send();
}

// Method 14: Regular expression operations
function regexExample() {
    var str = "The quick brown fox jumps over the lazy dog.";
    var pattern = /\b\w{3}\b/g;
    var matches = str.match(pattern);
    console.log("Matches:", matches);
}

// Method 15: Local storage
function localStorageExample() {
    localStorage.setItem("username", "John");
    var username = localStorage.getItem("username");
    console.log("Username from local storage:", username);
}

// Method 16: Session storage
function sessionStorageExample() {
    sessionStorage.setItem("token", "abcd1234");
    var token = sessionStorage.getItem("token");
    console.log("Token from session storage:", token);
}

// Method 17: Set timeout
function setTimeoutExample() {
    setTimeout(function() {
        console.log("Timeout completed.");
    }, 2000);
}

// Method 18: Set interval
function setIntervalExample() {
    var counter = 0;
    var interval = setInterval(function() {
        console.log("Interval:", counter++);
        if (counter > 5) {
            clearInterval(interval);
        }
    }, 1000);
}

// Method 19: Fetch API
function fetchExample() {
    fetch('example.txt')
        .then(response => response.text())
        .then(data => console.log("Fetch response:", data))
        .catch(error => console.error("Fetch error:", error));
}

// Method 20: Event handling
function eventListenerExample() {
    document.getElementById("exampleButton").addEventListener("click", function() {
        console.log("Button clicked!");
    });
}

// Call each method to demonstrate
consoleLogExample();
promptExample();
alertExample();
getElementByIdExample();
setInnerHTMLExample();
getElementsByClassNameExample();
createElementExample();
mathExample();
randomExample();
dateTimeExample();
stringExample();
jsonExample();
ajaxExample();
regexExample();
localStorageExample();
sessionStorageExample();
setTimeoutExample();
setIntervalExample();
fetchExample();
eventListenerExample();

