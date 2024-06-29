
const colors= ["lightgray", "blue", "purple", "rgba(255, 0, 0, 0.6)", "#FF5733"];

const button= document.getElementById("btn");
const color= document.querySelector(".color");

button.addEventListener("click", function() {
	
	let random= Math.floor(Math.random()*(colors.length));

	console.log(random);
	document.body.style.backgroundColor= colors[random];
	color.textContent= colors[random];
})