
// Fade in animation for page
window.addEventListener("load", () => {

    document.body.style.opacity = "0";

    setTimeout(() => {
        document.body.style.transition = "opacity 1.2s";
        document.body.style.opacity = "1";
    }, 200);

});



// Search box animation
const searchBox = document.querySelector("main input");

searchBox.addEventListener("focus", () => {

    searchBox.style.border = "2px solid #e23744";

});

searchBox.addEventListener("blur", () => {

    searchBox.style.border = "none";

});



// Header scroll effect

window.addEventListener("scroll", () => {

    const header = document.querySelector("header");

    if(window.scrollY > 50){
        header.style.background = "#c72c38";
        header.style.transition = "0.3s";
    }
    else{
        header.style.background = "#e23744";
    }

});



// Placeholder typing animation

const text = "Search for restaurants, cuisine or a dish";
let index = 0;

function typeEffect(){

    if(index < text.length){

        searchBox.setAttribute(
            "placeholder",
            text.substring(0,index+1)
        );

        index++;
        setTimeout(typeEffect,50);

    }
}

typeEffect();