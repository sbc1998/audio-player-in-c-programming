
const colors= ["A", "B", "C", "D", "E", "F", 1, 2, 3, 4, 5, 6, 7, 8, 9];

const button= document.getElementById("btn");
const color= document.querySelector(".color");

button.addEventListener("click", function() {
	
	let result= "#";
	for(let i=0; i<6; i++) {
		
		let random= Math.floor(Math.random()*(colors.length));
		result = result + colors[random];
	}

	document.body.style.backgroundColor= result;
	color.textContent= result;
})