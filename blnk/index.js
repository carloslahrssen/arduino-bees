var rabbit = require("./rabbit");
var python = require('python-shell');
var shell = new python('cereal.py', { mode: 'text'});
var exchange;

console.log("starting");

//shell.on('message', data => console.log(data))

rabbit.on("ready", () => {
	console.log("connected to RabbitMQ");
	
	exchange = rabbit.exchange("blink", {
		type: 'topic',
		durable: true
	});

	shell.on("message", (data) => {
	
		data && console.log("sending message", data );
		data && exchange.publish("passage", {data, timestamp: Date.now()}, {deliveryMode: 2});
	});


});
