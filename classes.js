class Rectangle{
    constructor(height,width){
        this.height=height;
        this.width=width;
    }
    speak(line){
        console.log(`hey baby height and width of rectange is ${this.height} & ${this.width}`);
    }
    }
let per=new Rectangle();
per.__proto__.name="aditya";
console.log(JSON.stringify(per));
per.__proto__.height=34;