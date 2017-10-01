const amqp = require('amqp')


const rabbit = amqp.createConnection({
	host: "mosquito.rmq.cloudamqp.com",
	login: "fqwvdgit",
	password: "rCssr0gy8oGEa9Rt0SmxH7xtaqiYJlFO",
	vhost: "fqwvdgit"
});


rabbit.on("open", e => console.log("error on amqp:i", e));

module.exports = rabbit;
